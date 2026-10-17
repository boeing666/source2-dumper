#pragma once

class CDOTA_Modifier_Legion_Commander_MomentOfCourage_Lifesteal : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 hp_leech_percent; // offset 0x1AA8, size 0x4, align 4
    int32 secondary_attack_damage; // offset 0x1AAC, size 0x4, align 4
};
