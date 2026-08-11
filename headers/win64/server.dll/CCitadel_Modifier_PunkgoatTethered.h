#pragma once

class CCitadel_Modifier_PunkgoatTethered : public CCitadelModifier /*0x0*/  // sizeof 0x5E8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    ParticleIndex_t m_nRangeIndicatorCaster; // offset 0xD0, size 0x4, align 255
    ParticleIndex_t m_nRangeIndicatorParent; // offset 0xD4, size 0x4, align 255
    GameTime_t m_tLastLOSTime; // offset 0xD8, size 0x4, align 255
    GameTime_t m_flLastDamageTime; // offset 0xDC, size 0x4, align 255
    char _pad_00E0[0x500]; // offset 0xE0
    CHandle< CBaseEntity > m_hTetheredTo; // offset 0x5E0, size 0x4, align 4
    char _pad_05E4[0x4]; // offset 0x5E4
};
