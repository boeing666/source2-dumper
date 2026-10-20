#pragma once

class CCitadel_Ability_Ratking_StandardBearer : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1BB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x18F8]; // offset 0x0
    GameTime_t m_flForcedPlantTime; // offset 0x18F8, size 0x4, align 255
    GameTime_t m_flChargeResumeTime; // offset 0x18FC, size 0x4, align 255
    GameTime_t m_flChargeStartTime; // offset 0x1900, size 0x4, align 255
    EPlantLeapPhase_t m_ePlantLeapPhase; // offset 0x1904, size 0x1, align 1
    char _pad_1905[0x3]; // offset 0x1905
    GameTime_t m_flPlantLeapPhaseStartTime; // offset 0x1908, size 0x4, align 255
    float32 m_flPlantLeapPhaseElapsedAtPause; // offset 0x190C, size 0x4, align 4
    bool m_bLeapLanded; // offset 0x1910, size 0x1, align 1
    char _pad_1911[0x3]; // offset 0x1911
    Vector m_vPlantDir; // offset 0x1914, size 0xC, align 4
    bool m_bFirstTick; // offset 0x1920, size 0x1, align 1
    char _pad_1921[0x3]; // offset 0x1921
    Vector m_vGoalDir; // offset 0x1924, size 0xC, align 4
    float32 m_flCurrentChargeSpeed; // offset 0x1930, size 0x4, align 4
    float32 m_flChargeStartSpeed; // offset 0x1934, size 0x4, align 4
    char _pad_1938[0x280]; // offset 0x1938
};
