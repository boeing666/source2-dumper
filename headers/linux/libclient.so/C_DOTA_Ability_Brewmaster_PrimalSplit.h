#pragma once

class C_DOTA_Ability_Brewmaster_PrimalSplit : public C_DOTABaseAbility /*0x0*/  // sizeof 0x858, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    CHandle< C_BaseEntity > m_hPrimary; // offset 0x828, size 0x4, align 4
    CHandle< C_BaseEntity > m_hSecondary; // offset 0x82C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTertiary; // offset 0x830, size 0x4, align 4
    CHandle< C_BaseEntity > m_hEarthScepterItem; // offset 0x834, size 0x4, align 4
    CHandle< C_BaseEntity > m_hStormScepterItem; // offset 0x838, size 0x4, align 4
    CHandle< C_BaseEntity > m_hFireScepterItem; // offset 0x83C, size 0x4, align 4
    GameTime_t m_fHurlBoulder_CooldownTime; // offset 0x840, size 0x4, align 255
    GameTime_t m_fHDispelMagic_CooldownTime; // offset 0x844, size 0x4, align 255
    GameTime_t m_fCyclone_CooldownTime; // offset 0x848, size 0x4, align 255
    GameTime_t m_fWindWalk_CooldownTime; // offset 0x84C, size 0x4, align 255
    bool m_bGainedScepterLevels; // offset 0x850, size 0x1, align 1
    char _pad_0851[0x7]; // offset 0x851
};
