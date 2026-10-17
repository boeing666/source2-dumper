#pragma once

class CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 bonus_damage_from_creep; // offset 0x1AA8, size 0x4, align 4
    float32 bonus_shared_by_allies_pct; // offset 0x1AAC, size 0x4, align 4
    float32 m_flModifier; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
