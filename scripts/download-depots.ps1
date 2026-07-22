<#
.SYNOPSIS
  Download a Source2 game's depot files via SteamRE/DepotDownloader.
  scripts\download-depots.ps1 -Game cs2 -Target both
#>
[CmdletBinding()]
param(
	[ValidateSet("cs2", "dota2", "deadlock")]
	[string]$Game          = "cs2",
	[ValidateSet("both", "linux", "windows")]
	[string]$Target        = "both",
	[string]$Version       = "DepotDownloader_3.4.0",
	[string]$FileList      = "",
	[string]$SteamUsername = $env:STEAM_USERNAME,
	[string]$SteamPassword = $env:STEAM_PASSWORD
)

$ErrorActionPreference = "Stop"
[Net.ServicePointManager]::SecurityProtocol = [Net.SecurityProtocolType]::Tls12

switch ($Game) {
	"cs2"      { $app = 730;     $gameSubdir = "csgo";    $gtRepo = "GameTracking-CS2" }
	"dota2"    { $app = 570;     $gameSubdir = "dota";    $gtRepo = "GameTracking-Dota2" }
	"deadlock" { $app = 1422450; $gameSubdir = "citadel"; $gtRepo = "GameTracking-Deadlock" }
}

$scriptDir = $PSScriptRoot
$root      = Split-Path -Parent $scriptDir
if (-not $FileList) { $FileList = Join-Path $scriptDir "depots.txt" }
$gameDir   = Join-Path $root "game\$Game"
$tools     = Join-Path $root ".tools\depotdownloader"
$dd        = Join-Path $tools "DepotDownloader.exe"

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

foreach ($os in @("linux", "windows")) {
	if ($Target -in @("both", $os)) {
		Write-Host ">> $Game app $app ($os) -> game\"
		& $dd -app $app -filelist $FileList -dir $gameDir -os $os @auth
		if ($LASTEXITCODE -ne 0) { throw "DepotDownloader ($os) exited $LASTEXITCODE" }
	}
}

$gt = "https://raw.githubusercontent.com/SteamDatabase/$gtRepo/master/game"
Write-Host ">> steam.inf"
$infDir = Join-Path $gameDir "game\$gameSubdir"
New-Item -ItemType Directory -Force -Path $infDir | Out-Null
try {
	Invoke-WebRequest -Uri "$gt/$gameSubdir/steam.inf" -OutFile (Join-Path $infDir "steam.inf")
} catch {
	Write-Host "warning: steam.inf fetch failed"
}

if ($Game -eq "cs2") {
	Write-Host ">> gameevents ($gtRepo)"
	$gameevents = @(
		@{ src = "csgo/pak01_dir/resource/game.gameevents"; dst = "game\csgo\resource\game.gameevents" },
		@{ src = "csgo/pak01_dir/resource/mod.gameevents";  dst = "game\csgo\resource\mod.gameevents"  },
		@{ src = "core/pak01_dir/resource/core.gameevents"; dst = "game\core\resource\core.gameevents" }
	)
	foreach ($ge in $gameevents) {
		$out = Join-Path $gameDir $ge.dst
		New-Item -ItemType Directory -Force -Path (Split-Path -Parent $out) | Out-Null
		try {
			Invoke-WebRequest -Uri "$gt/$($ge.src)" -OutFile $out
		} catch {
			Write-Host "warning: gameevents fetch failed: $($ge.src)"
		}
	}
}

Write-Host ">> Done."
