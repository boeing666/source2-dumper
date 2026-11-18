#pragma once

class CDOTA_Modifier_Life_Stealer_Feast : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 hp_leech_percent; // offset 0x1AF8, size 0x4, align 4
    float32 hp_damage_percent; // offset 0x1AFC, size 0x4, align 4
    int32 creep_deny_percent; // offset 0x1B00, size 0x4, align 4
    int32 bonus_hp_per_creep; // offset 0x1B04, size 0x4, align 4
    int32 bonus_hp_per_creep_num_required; // offset 0x1B08, size 0x4, align 4
    int32 bonus_hp_per_hero; // offset 0x1B0C, size 0x4, align 4
    int32 m_nTotalBonusHP; // offset 0x1B10, size 0x4, align 4
    int32 m_nCreepCounter; // offset 0x1B14, size 0x4, align 4
};
