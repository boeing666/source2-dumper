#pragma once

class CCitadel_Ability_PowerSurge : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1610, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    GameTime_t m_flNextProcTime; // offset 0x14A8, size 0x4, align 255
    float32 m_flBaseCooldown; // offset 0x14AC, size 0x4, align 4
    char _pad_14B0[0x160]; // offset 0x14B0
};
