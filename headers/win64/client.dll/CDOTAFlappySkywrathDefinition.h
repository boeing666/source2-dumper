#pragma once

class CDOTAFlappySkywrathDefinition  // sizeof 0xF0, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot MVDataSingleton}
{
public:
    CUtlString strID; // offset 0x0, size 0x8, align 8
    CUtlString sLayoutPath; // offset 0x8, size 0x8, align 8
    CUtlString sMapFile; // offset 0x10, size 0x8, align 8
    CUtlString sMapLoopingFile; // offset 0x18, size 0x8, align 8
    CUtlString sMapBGFile; // offset 0x20, size 0x8, align 8
    CUtlVector< CDOTAFlappySkywrathDifficulty > vecDifficulties; // offset 0x28, size 0x18, align 8
    float32 flMinimumSpeed; // offset 0x40, size 0x4, align 4
    float32 flGravity; // offset 0x44, size 0x4, align 4
    float32 flJumpPower; // offset 0x48, size 0x4, align 4
    float32 flGlideAcceleration; // offset 0x4C, size 0x4, align 4
    float32 flGlideFallSpeed; // offset 0x50, size 0x4, align 4
    float32 flDashDuration; // offset 0x54, size 0x4, align 4
    float32 flDashBoost; // offset 0x58, size 0x4, align 4
    float32 flDashSpeed; // offset 0x5C, size 0x4, align 4
    float32 flDiveDuration; // offset 0x60, size 0x4, align 4
    float32 flDiveSpeed; // offset 0x64, size 0x4, align 4
    float32 flTrackDistance; // offset 0x68, size 0x4, align 4
    float32 flCameraDistance; // offset 0x6C, size 0x4, align 4
    Vector vCameraOffset; // offset 0x70, size 0xC, align 4
    Vector2D vCameraEdgeThresholds; // offset 0x7C, size 0x8, align 4
    float32 flCameraAcceleration; // offset 0x84, size 0x4, align 4
    Vector2D vPlayerSize; // offset 0x88, size 0x8, align 4
    Vector2D vPlayerVerticalBounds; // offset 0x90, size 0x8, align 4
    Vector2D vObstacleVerticalBounds; // offset 0x98, size 0x8, align 4
    Vector2D vObstacleHorizontalBounds; // offset 0xA0, size 0x8, align 4
    float32 flTopOffsetToTip; // offset 0xA8, size 0x4, align 4
    float32 flBottomOffsetToTip; // offset 0xAC, size 0x4, align 4
    char _pad_00B0[0x28]; // offset 0xB0
    CUtlVector< CDOTAFlappySkywrathInputAction > vecInputActions; // offset 0xD8, size 0x18, align 8
};
