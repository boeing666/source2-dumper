#pragma once

class CCitadel_Ability_Gunslinger_DemonCarbine : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1BD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    bool m_bWantsSlow; // offset 0x16E0, size 0x1, align 1
    char _pad_16E1[0x3]; // offset 0x16E1
    GameTime_t m_flLatchedTimeScaleFracChangeTime; // offset 0x16E4, size 0x4, align 255
    float32 m_flLatchedTimeScaleFrac; // offset 0x16E8, size 0x4, align 4
    GameTime_t m_flSpeedBoostEndTime; // offset 0x16EC, size 0x4, align 255
    GameTime_t m_flShotTimeScaleEndTime; // offset 0x16F0, size 0x4, align 255
    char _pad_16F4[0x4]; // offset 0x16F4
    float32 m_flStoredPowerPct; // offset 0x16F8, size 0x4, align 4
    char _pad_16FC[0x4D4]; // offset 0x16FC
};
