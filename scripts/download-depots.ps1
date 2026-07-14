<#
.SYNOPSIS
  Downloads the CS2 (app 730) depot files listed in the filelist, using
  SteamRE/DepotDownloader. Bootstraps the tool on first run. Same steps the CI
  workflow runs — run it directly to test:

    scripts\download-depots.ps1              # both OSes
    scripts\download-depots.ps1 -Target windows
#>
[CmdletBinding()]
param(
	[ValidateSet("both", "linux", "windows")]
	[string]$Target        = "both",
	[string]$Version       = "DepotDownloader_3.4.0",
	[string]$FileList      = "",
	[string]$SteamUsername = $env:STEAM_USERNAME,
	[string]$SteamPassword = $env:STEAM_PASSWORD
)

$ErrorActionPreference = "Stop"
[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12

$app          = 730
$depotLinux   = 2347773
$depotWindows = 2347771

$scriptDir = $PSScriptRoot
$root      = Split-Path -Parent $scriptDir
if (-not $FileList) { $FileList = Join-Path $scriptDir "depots.txt" }
$gameDir   = Join-Path $root "game"
$tools     = Join-Path $root ".tools\depotdownloader"
$dd        = Join-Path $tools "DepotDownloader.exe"

# Per-OS filelist if present (scripts\depots.linux.txt / depots.windows.txt), else
# the shared one. Manifest paths differ per OS (linuxsteamrt64/lib*.so vs win64/*.dll);
# the shared list uses regex to match both.
function Resolve-FileList([string]$os) {
	$f = Join-Path $scriptDir "depots.$os.txt"
	if (Test-Path $f) { return $f } else { return $FileList }
}

if (-not (Test-Path $dd)) {
	$asset = "DepotDownloader-windows-x64.zip"
	Write-Host ">> Fetching $asset ($Version)"
	New-Item -ItemType Directory -Force -Path $tools | Out-Null
	$zip = Join-Path $tools "dd.zip"
	Invoke-WebRequest -Uri "https://github.com/SteamRE/DepotDownloader/releases/download/$Version/$asset" -OutFile $zip
	Expand-Archive -Path $zip -DestinationPath $tools -Force
	Remove-Item $zip -Force
}

$auth = @()
if ($SteamUsername) {
	$auth += @("-username", $SteamUsername)
	if ($SteamPassword) { $auth += @("-password", $SteamPassword) }
	$auth += "-remember-password"
}

if ($Target -in @("both", "linux")) {
	$list = Resolve-FileList "linux"
	Write-Host ">> Linux depot $depotLinux -> game\ (filelist: $list)"
	& $dd -app $app -depot $depotLinux -filelist $list -dir $gameDir -os linux @auth
	if ($LASTEXITCODE -ne 0) { throw "DepotDownloader (linux) exited $LASTEXITCODE" }
}

if ($Target -in @("both", "windows")) {
	$list = Resolve-FileList "windows"
	Write-Host ">> Windows depot $depotWindows -> game\ (filelist: $list)"
	& $dd -app $app -depot $depotWindows -filelist $list -dir $gameDir -os windows @auth
	if ($LASTEXITCODE -ne 0) { throw "DepotDownloader (windows) exited $LASTEXITCODE" }
}

Write-Host ">> steam.inf (PatchVersion)"
$infDir = Join-Path $gameDir "game\csgo"
New-Item -ItemType Directory -Force -Path $infDir | Out-Null
try {
	Invoke-WebRequest -Uri "https://raw.githubusercontent.com/SteamDatabase/GameTracking-CS2/master/game/csgo/steam.inf" `
		-OutFile (Join-Path $infDir "steam.inf")
} catch {
	Write-Host "warning: steam.inf fetch failed (PatchVersion will be blank)"
}

Write-Host ">> Done."
