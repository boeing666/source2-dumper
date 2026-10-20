#pragma once

class CCitadel_Modifier_Base_Buildup : public CCitadelModifier /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    GameTime_t m_flLastBuildupAppliedTime; // offset 0x150, size 0x4, align 255
    float32 m_flDelayedDieTimeRemaining; // offset 0x154, size 0x4, align 4
    bool m_bInDelayTime; // offset 0x158, size 0x1, align 1
    char _pad_0159[0x3]; // offset 0x159
    float32 m_flBuildUpDecayDelayFromWeaponCycleTime; // offset 0x15C, size 0x4, align 4
};
