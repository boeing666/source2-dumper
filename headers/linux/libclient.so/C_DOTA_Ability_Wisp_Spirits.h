#pragma once

class C_DOTA_Ability_Wisp_Spirits : public C_DOTABaseAbility /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    CUtlVector< sSpiritDef > m_SpiritDefs; // offset 0x828, size 0x18, align 8
    int32 m_nWispDirection; // offset 0x840, size 0x4, align 4
    int32 spirit_amount; // offset 0x844, size 0x4, align 4
    float32 m_flStartSpiritRadius; // offset 0x848, size 0x4, align 4
    char _pad_084C[0x4]; // offset 0x84C
};
