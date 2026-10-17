#pragma once

class CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    Vector m_vDir; // offset 0x1AA8, size 0xC, align 4
    bool m_bBoulderCreated; // offset 0x1AB4, size 0x1, align 1
    char _pad_1AB5[0x3]; // offset 0x1AB5
};
