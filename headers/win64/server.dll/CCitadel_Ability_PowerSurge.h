#pragma once

class CCitadel_Ability_PowerSurge : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1608, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    GameTime_t m_flNextProcTime; // offset 0x14A0, size 0x4, align 255
    float32 m_flBaseCooldown; // offset 0x14A4, size 0x4, align 4
    char _pad_14A8[0x160]; // offset 0x14A8
};
