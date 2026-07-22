#pragma once

class CDOTAFlappySkywrathDifficulty  // sizeof 0x3C, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    CDOTAFlappySkywrathCharacter characterPlayer; // offset 0x0, size 0x10, align 4
    CDOTAFlappySkywrathCharacter characterOpponent; // offset 0x10, size 0x10, align 4
    float32 flRaceDistance; // offset 0x20, size 0x4, align 4
    float32 flBaseObstacleDistanceInterval; // offset 0x24, size 0x4, align 4
    float32 flBaseObstacleGapDistance; // offset 0x28, size 0x4, align 4
    float32 flMinObstacleGapDistance; // offset 0x2C, size 0x4, align 4
    float32 flCollisionSpeedReduction; // offset 0x30, size 0x4, align 4
    float32 flLandedMaxSpeed; // offset 0x34, size 0x4, align 4
    float32 flCollisionInputCooldown; // offset 0x38, size 0x4, align 4
};
