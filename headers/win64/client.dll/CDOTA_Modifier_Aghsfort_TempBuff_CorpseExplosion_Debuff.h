#pragma once

class CDOTA_Modifier_Aghsfort_TempBuff_CorpseExplosion_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 corpse_explosion_radius; // offset 0x1AA8, size 0x4, align 4
    int32 corpse_explosion_damage_pct; // offset 0x1AAC, size 0x4, align 4
    int32 corpse_explosion_chance_pct; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
