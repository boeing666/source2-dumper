#pragma once

class C_DOTA_Ability_LoneDruid_SpiritBear : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    bool m_bLevelChanged; // offset 0x828, size 0x1, align 1
    char _pad_0829[0x3]; // offset 0x829
    CHandle< C_BaseEntity > m_hBear; // offset 0x82C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPreBear; // offset 0x830, size 0x4, align 4
    char _pad_0834[0x4]; // offset 0x834
};
