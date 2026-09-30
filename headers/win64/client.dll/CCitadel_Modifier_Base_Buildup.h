#pragma once

class CCitadel_Modifier_Base_Buildup : public CCitadelModifier /*0x0*/  // sizeof 0x140, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    GameTime_t m_flLastBuildupAppliedTime; // offset 0x130, size 0x4, align 255
    float32 m_flDelayedDieTimeRemaining; // offset 0x134, size 0x4, align 4
    bool m_bInDelayTime; // offset 0x138, size 0x1, align 1
    char _pad_0139[0x3]; // offset 0x139
    float32 m_flBuildUpDecayDelayFromWeaponCycleTime; // offset 0x13C, size 0x4, align 4
};
