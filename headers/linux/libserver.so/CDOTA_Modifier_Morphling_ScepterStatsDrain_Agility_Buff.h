#pragma once

class CDOTA_Modifier_Morphling_ScepterStatsDrain_Agility_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 scepter_stat_steal; // offset 0x1AA8, size 0x4, align 4
    int32 scepter_attack_speed; // offset 0x1AAC, size 0x4, align 4
    int32 nStrengthSteal; // offset 0x1AB0, size 0x4, align 4
    int32 nAgilitySteal; // offset 0x1AB4, size 0x4, align 4
    int32 nIntSteal; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
