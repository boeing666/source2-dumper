#pragma once

class CCitadel_Ability_Ratking_StandardBearer : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1980, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x16C0]; // offset 0x0
    GameTime_t m_flForcedPlantTime; // offset 0x16C0, size 0x4, align 255
    GameTime_t m_flChargeResumeTime; // offset 0x16C4, size 0x4, align 255
    GameTime_t m_flChargeStartTime; // offset 0x16C8, size 0x4, align 255
    EPlantLeapPhase_t m_ePlantLeapPhase; // offset 0x16CC, size 0x1, align 1
    char _pad_16CD[0x3]; // offset 0x16CD
    GameTime_t m_flPlantLeapPhaseStartTime; // offset 0x16D0, size 0x4, align 255
    float32 m_flPlantLeapPhaseElapsedAtPause; // offset 0x16D4, size 0x4, align 4
    bool m_bLeapLanded; // offset 0x16D8, size 0x1, align 1
    char _pad_16D9[0x3]; // offset 0x16D9
    Vector m_vPlantDir; // offset 0x16DC, size 0xC, align 4
    bool m_bFirstTick; // offset 0x16E8, size 0x1, align 1
    char _pad_16E9[0x3]; // offset 0x16E9
    Vector m_vGoalDir; // offset 0x16EC, size 0xC, align 4
    float32 m_flCurrentChargeSpeed; // offset 0x16F8, size 0x4, align 4
    float32 m_flChargeStartSpeed; // offset 0x16FC, size 0x4, align 4
    char _pad_1700[0x280]; // offset 0x1700
};
