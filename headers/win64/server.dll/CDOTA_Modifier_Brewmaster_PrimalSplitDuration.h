#pragma once

class CDOTA_Modifier_Brewmaster_PrimalSplitDuration : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_brewling_hp; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_damage; // offset 0x1AAC, size 0x4, align 4
    int32 hp_per_attribute; // offset 0x1AB0, size 0x4, align 4
    float32 dmg_per_attribute; // offset 0x1AB4, size 0x4, align 4
    int32 attribute_share_pct; // offset 0x1AB8, size 0x4, align 4
    int32 m_nBonusHP; // offset 0x1ABC, size 0x4, align 4
    int32 m_nBonusDamage; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
