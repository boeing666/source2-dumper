#pragma once

class CDOTA_Modifier_PrimalBeast_Uproar_Roared_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 roared_bonus_attack_speed; // offset 0x1A78, size 0x4, align 4
    int32 roared_bonus_armor; // offset 0x1A7C, size 0x4, align 4
    int32 roared_bonus_aoe_pct; // offset 0x1A80, size 0x4, align 4
    int32 m_nBuffStackCount; // offset 0x1A84, size 0x4, align 4
};
