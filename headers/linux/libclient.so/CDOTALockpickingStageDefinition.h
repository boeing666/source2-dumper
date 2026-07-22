#pragma once

class CDOTALockpickingStageDefinition  // sizeof 0x54, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    ELockpickingStageMode m_eMode; // offset 0x0, size 0x4, align 4
    int32 m_nNumUnlocks; // offset 0x4, size 0x4, align 4
    float32 m_flInitialSpeed; // offset 0x8, size 0x4, align 4
    float32 m_flSpeedIncrementPerUnlock; // offset 0xC, size 0x4, align 4
    float32 m_flMinDegreesBetweenUnlocks; // offset 0x10, size 0x4, align 4
    float32 m_flTimeLimit; // offset 0x14, size 0x4, align 4
    float32 m_flTimerIncreasePerUnlock; // offset 0x18, size 0x4, align 4
    float32 m_flSpeedBoostRate; // offset 0x1C, size 0x4, align 4
    float32 m_flSpeedBoostPercentage; // offset 0x20, size 0x4, align 4
    float32 m_flDecelerationRate; // offset 0x24, size 0x4, align 4
    float32 m_flRecoverRate; // offset 0x28, size 0x4, align 4
    float32 m_flBaseUnlockAppearRate; // offset 0x2C, size 0x4, align 4
    float32 m_flUnlockAppearIncreaseRate; // offset 0x30, size 0x4, align 4
    float32 m_flMaxSpeedMultiplier; // offset 0x34, size 0x4, align 4
    float32 m_flTimerIncreaseUnlockChance; // offset 0x38, size 0x4, align 4
    float32 m_flTimerIncreaseUnlockEscalatingChance; // offset 0x3C, size 0x4, align 4
    int32 m_nMaxUnlocksOnBoard; // offset 0x40, size 0x4, align 4
    int32 m_nBoardRadius; // offset 0x44, size 0x4, align 4
    int32 m_nUnlockRadius; // offset 0x48, size 0x4, align 4
    float32 m_flUnlockDegreeDecreaseRate; // offset 0x4C, size 0x4, align 4
    int32 m_nScorePerUnlock; // offset 0x50, size 0x4, align 4
};
