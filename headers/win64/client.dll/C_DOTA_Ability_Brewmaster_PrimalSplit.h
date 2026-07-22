#pragma once

class C_DOTA_Ability_Brewmaster_PrimalSplit : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    CHandle< C_BaseEntity > m_hPrimary; // offset 0x6A8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hSecondary; // offset 0x6AC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hTertiary; // offset 0x6B0, size 0x4, align 4
    GameTime_t m_fHurlBoulder_CooldownTime; // offset 0x6B4, size 0x4, align 255
    GameTime_t m_fHDispelMagic_CooldownTime; // offset 0x6B8, size 0x4, align 255
    GameTime_t m_fCyclone_CooldownTime; // offset 0x6BC, size 0x4, align 255
    GameTime_t m_fWindWalk_CooldownTime; // offset 0x6C0, size 0x4, align 255
    bool m_bGainedScepterLevels; // offset 0x6C4, size 0x1, align 1
    char _pad_06C5[0x3]; // offset 0x6C5
};
