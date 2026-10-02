#pragma once

class CCitadel_Ability_Ratking_StandardBearer : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1978, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x16B8]; // offset 0x0
    GameTime_t m_flForcedPlantTime; // offset 0x16B8, size 0x4, align 255
    GameTime_t m_flChargeResumeTime; // offset 0x16BC, size 0x4, align 255
    GameTime_t m_flChargeStartTime; // offset 0x16C0, size 0x4, align 255
    EPlantLeapPhase_t m_ePlantLeapPhase; // offset 0x16C4, size 0x1, align 1
    char _pad_16C5[0x3]; // offset 0x16C5
    GameTime_t m_flPlantLeapPhaseStartTime; // offset 0x16C8, size 0x4, align 255
    float32 m_flPlantLeapPhaseElapsedAtPause; // offset 0x16CC, size 0x4, align 4
    bool m_bLeapLanded; // offset 0x16D0, size 0x1, align 1
    char _pad_16D1[0x3]; // offset 0x16D1
    Vector m_vPlantDir; // offset 0x16D4, size 0xC, align 4
    bool m_bFirstTick; // offset 0x16E0, size 0x1, align 1
    char _pad_16E1[0x3]; // offset 0x16E1
    Vector m_vGoalDir; // offset 0x16E4, size 0xC, align 4
    float32 m_flCurrentChargeSpeed; // offset 0x16F0, size 0x4, align 4
    float32 m_flChargeStartSpeed; // offset 0x16F4, size 0x4, align 4
    char _pad_16F8[0x280]; // offset 0x16F8
};
