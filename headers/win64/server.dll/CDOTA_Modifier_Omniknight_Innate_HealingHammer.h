#pragma once

class CDOTA_Modifier_Omniknight_Innate_HealingHammer : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32[5] m_nHeal; // offset 0x1A78, size 0x14, align 4
    int32 healing_pct_of_damage; // offset 0x1A8C, size 0x4, align 4
};
