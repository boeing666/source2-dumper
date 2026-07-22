#pragma once

class CDOTA_Modifier_Brewmaster_PrimalSplitDuration : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_brewling_hp; // offset 0x1A58, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A5C, size 0x4, align 4
    int32 hp_per_attribute; // offset 0x1A60, size 0x4, align 4
    float32 dmg_per_attribute; // offset 0x1A64, size 0x4, align 4
    int32 attribute_share_pct; // offset 0x1A68, size 0x4, align 4
    int32 m_nBonusHP; // offset 0x1A6C, size 0x4, align 4
    int32 m_nBonusDamage; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x4]; // offset 0x1A74
};
