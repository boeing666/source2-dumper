#pragma once

class CCitadel_Modifier_PunkgoatTethered : public CCitadelModifier /*0x0*/  // sizeof 0x848, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    ParticleIndex_t m_nRangeIndicatorCaster; // offset 0x150, size 0x4, align 255
    ParticleIndex_t m_nRangeIndicatorParent; // offset 0x154, size 0x4, align 255
    GameTime_t m_tLastLOSTime; // offset 0x158, size 0x4, align 255
    GameTime_t m_flLastDamageTime; // offset 0x15C, size 0x4, align 255
    char _pad_0160[0x6E0]; // offset 0x160
    CHandle< CBaseEntity > m_hTetheredTo; // offset 0x840, size 0x4, align 4
    char _pad_0844[0x4]; // offset 0x844
};
