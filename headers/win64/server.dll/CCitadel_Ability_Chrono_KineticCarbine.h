#pragma once

class CCitadel_Ability_Chrono_KineticCarbine : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1BA8, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    bool m_bWantsSlow; // offset 0x14A0, size 0x1, align 1
    char _pad_14A1[0x3]; // offset 0x14A1
    GameTime_t m_flLatchedTimeScaleFracChangeTime; // offset 0x14A4, size 0x4, align 255
    float32 m_flLatchedTimeScaleFrac; // offset 0x14A8, size 0x4, align 4
    GameTime_t m_flSpeedBoostEndTime; // offset 0x14AC, size 0x4, align 255
    GameTime_t m_flShotTimeScaleEndTime; // offset 0x14B0, size 0x4, align 255
    char _pad_14B4[0x8]; // offset 0x14B4
    float32 m_flStoredPowerPct; // offset 0x14BC, size 0x4, align 4
    char _pad_14C0[0x6E8]; // offset 0x14C0
};
