#pragma once

class CDOTA_Modifier_Brewmaster_PrimalSplitDuration : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_brewling_hp; // offset 0x1A78, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A7C, size 0x4, align 4
    int32 hp_per_attribute; // offset 0x1A80, size 0x4, align 4
    float32 dmg_per_attribute; // offset 0x1A84, size 0x4, align 4
    int32 attribute_share_pct; // offset 0x1A88, size 0x4, align 4
    int32 m_nBonusHP; // offset 0x1A8C, size 0x4, align 4
    int32 m_nBonusDamage; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
};
