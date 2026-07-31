#pragma once

class CDOTA_Modifier_Life_Stealer_Feast : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 hp_leech_percent; // offset 0x1A78, size 0x4, align 4
    float32 hp_damage_percent; // offset 0x1A7C, size 0x4, align 4
    int32 creep_deny_percent; // offset 0x1A80, size 0x4, align 4
    int32 bonus_hp_per_creep; // offset 0x1A84, size 0x4, align 4
    int32 bonus_hp_per_hero; // offset 0x1A88, size 0x4, align 4
    int32 m_nTotalBonusHP; // offset 0x1A8C, size 0x4, align 4
};
