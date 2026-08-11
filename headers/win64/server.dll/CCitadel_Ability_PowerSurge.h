#pragma once

class CCitadel_Ability_PowerSurge : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1078, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    GameTime_t m_flNextProcTime; // offset 0xF70, size 0x4, align 255
    float32 m_flBaseCooldown; // offset 0xF74, size 0x4, align 4
    char _pad_0F78[0x100]; // offset 0xF78
};
