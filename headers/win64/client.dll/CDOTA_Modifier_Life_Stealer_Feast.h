#pragma once

class CDOTA_Modifier_Life_Stealer_Feast : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 hp_leech_percent; // offset 0x1A58, size 0x4, align 4
    float32 hp_damage_percent; // offset 0x1A5C, size 0x4, align 4
    int32 creep_deny_percent; // offset 0x1A60, size 0x4, align 4
    int32 bonus_hp_per_creep; // offset 0x1A64, size 0x4, align 4
    int32 bonus_hp_per_hero; // offset 0x1A68, size 0x4, align 4
    int32 m_nTotalBonusHP; // offset 0x1A6C, size 0x4, align 4
};
