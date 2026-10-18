<#
.SYNOPSIS
  Windows entry point for scripts/download-depots.sh (SteamFileDownloader `track`), run with Git for Windows' bash.
  scripts\download-depots.ps1 -Game cs2 -Target both
#>
[CmdletBinding()]
param(
	[ValidateSet("cs2", "dota2", "deadlock")]
	[string]$Game   = "cs2",
	[ValidateSet("both", "linux", "windows")]
	[string]$Target = "both"
)

$ErrorActionPreference = "Stop"

$bash = (Get-Command bash -ErrorAction SilentlyContinue).Source
if (-not $bash) {
	$git = (Get-Command git -ErrorAction SilentlyContinue).Source
	if ($git) { $bash = Join-Path (Split-Path -Parent (Split-Path -Parent $git)) "bin\bash.exe" }
}
if (-not $bash -or -not (Test-Path $bash)) { throw "bash not found: install Git for Windows" }

$env:GAME = $Game
& $bash (Join-Path $PSScriptRoot "download-depots.sh") $Target
if ($LASTEXITCODE -ne 0) { throw "download-depots.sh exited $LASTEXITCODE" }
