#pragma once

class CCitadel_Modifier_PunkgoatTethered : public CCitadelModifier /*0x0*/  // sizeof 0x840, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    ParticleIndex_t m_nRangeIndicatorCaster; // offset 0x148, size 0x4, align 255
    ParticleIndex_t m_nRangeIndicatorParent; // offset 0x14C, size 0x4, align 255
    GameTime_t m_tLastLOSTime; // offset 0x150, size 0x4, align 255
    GameTime_t m_flLastDamageTime; // offset 0x154, size 0x4, align 255
    char _pad_0158[0x6E0]; // offset 0x158
    CHandle< CBaseEntity > m_hTetheredTo; // offset 0x838, size 0x4, align 4
    char _pad_083C[0x4]; // offset 0x83C
};
