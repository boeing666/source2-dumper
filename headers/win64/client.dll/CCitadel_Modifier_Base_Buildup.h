#pragma once

class CCitadel_Modifier_Base_Buildup : public CCitadelModifier /*0x0*/  // sizeof 0xD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    GameTime_t m_flLastBuildupAppliedTime; // offset 0xC0, size 0x4, align 255
    float32 m_flDelayedDieTimeRemaining; // offset 0xC4, size 0x4, align 4
    bool m_bInDelayTime; // offset 0xC8, size 0x1, align 1
    char _pad_00C9[0x3]; // offset 0xC9
    float32 m_flBuildUpDecayDelayFromWeaponCycleTime; // offset 0xCC, size 0x4, align 4
};
