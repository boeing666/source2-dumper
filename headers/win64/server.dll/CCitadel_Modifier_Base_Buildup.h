#pragma once

class CCitadel_Modifier_Base_Buildup : public CCitadelModifier /*0x0*/  // sizeof 0xE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    GameTime_t m_flLastBuildupAppliedTime; // offset 0xD0, size 0x4, align 255
    float32 m_flDelayedDieTimeRemaining; // offset 0xD4, size 0x4, align 4
    bool m_bInDelayTime; // offset 0xD8, size 0x1, align 1
    char _pad_00D9[0x3]; // offset 0xD9
    float32 m_flBuildUpDecayDelayFromWeaponCycleTime; // offset 0xDC, size 0x4, align 4
};
