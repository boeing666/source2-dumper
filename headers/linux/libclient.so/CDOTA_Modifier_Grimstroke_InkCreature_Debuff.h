#pragma once

class CDOTA_Modifier_Grimstroke_InkCreature_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 m_flCurrentArmorReduction; // offset 0x1A78, size 0x4, align 4
    CHandle< C_BaseEntity > m_hLatchedCreature; // offset 0x1A7C, size 0x4, align 4
    float32 tick_interval; // offset 0x1A80, size 0x4, align 4
    int32 damage_per_second; // offset 0x1A84, size 0x4, align 4
};
