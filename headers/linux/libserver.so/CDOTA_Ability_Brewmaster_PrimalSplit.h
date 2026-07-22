#pragma once

class CDOTA_Ability_Brewmaster_PrimalSplit : public CDOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    CHandle< CBaseEntity > m_hPrimary; // offset 0x85C, size 0x4, align 4
    CHandle< CBaseEntity > m_hSecondary; // offset 0x860, size 0x4, align 4
    CHandle< CBaseEntity > m_hTertiary; // offset 0x864, size 0x4, align 4
    GameTime_t m_fHurlBoulder_CooldownTime; // offset 0x868, size 0x4, align 255
    GameTime_t m_fHDispelMagic_CooldownTime; // offset 0x86C, size 0x4, align 255
    GameTime_t m_fCyclone_CooldownTime; // offset 0x870, size 0x4, align 255
    GameTime_t m_fWindWalk_CooldownTime; // offset 0x874, size 0x4, align 255
    bool m_bGainedScepterLevels; // offset 0x878, size 0x1, align 1
    char _pad_0879[0x7]; // offset 0x879
};
