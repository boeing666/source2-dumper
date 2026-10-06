#pragma once

class CCitadel_Modifier_Base_Buildup : public CCitadelModifier /*0x0*/  // sizeof 0x148, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    GameTime_t m_flLastBuildupAppliedTime; // offset 0x138, size 0x4, align 255
    float32 m_flDelayedDieTimeRemaining; // offset 0x13C, size 0x4, align 4
    bool m_bInDelayTime; // offset 0x140, size 0x1, align 1
    char _pad_0141[0x3]; // offset 0x141
    float32 m_flBuildUpDecayDelayFromWeaponCycleTime; // offset 0x144, size 0x4, align 4
};
