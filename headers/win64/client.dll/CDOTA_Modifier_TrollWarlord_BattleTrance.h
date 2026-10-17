#pragma once

class CDOTA_Modifier_TrollWarlord_BattleTrance : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 movement_speed; // offset 0x1AA8, size 0x4, align 4
    int32 slow_resistance; // offset 0x1AAC, size 0x4, align 4
    int32 attack_speed; // offset 0x1AB0, size 0x4, align 4
    int32 lifesteal; // offset 0x1AB4, size 0x4, align 4
    int32 ignore_attack_speed_limit; // offset 0x1AB8, size 0x4, align 4
    bool priortize_creep_heroes; // offset 0x1ABC, size 0x1, align 1
    char _pad_1ABD[0x3]; // offset 0x1ABD
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
