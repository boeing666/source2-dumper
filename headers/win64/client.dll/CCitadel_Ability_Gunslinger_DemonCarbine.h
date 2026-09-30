#pragma once

class CCitadel_Ability_Gunslinger_DemonCarbine : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1BC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    bool m_bWantsSlow; // offset 0x16D8, size 0x1, align 1
    char _pad_16D9[0x3]; // offset 0x16D9
    GameTime_t m_flLatchedTimeScaleFracChangeTime; // offset 0x16DC, size 0x4, align 255
    float32 m_flLatchedTimeScaleFrac; // offset 0x16E0, size 0x4, align 4
    GameTime_t m_flSpeedBoostEndTime; // offset 0x16E4, size 0x4, align 255
    GameTime_t m_flShotTimeScaleEndTime; // offset 0x16E8, size 0x4, align 255
    char _pad_16EC[0x4]; // offset 0x16EC
    float32 m_flStoredPowerPct; // offset 0x16F0, size 0x4, align 4
    char _pad_16F4[0x4D4]; // offset 0x16F4
};
