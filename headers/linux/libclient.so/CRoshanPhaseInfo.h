#pragma once

class CRoshanPhaseInfo  // sizeof 0x20, align 0xFF [vtable trivial_dtor] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    ERoshanSpawnPhase m_eRoshanPhase; // offset 0x8, size 0x4, align 4
    GameTime_t m_flRoshanPhaseStartTime; // offset 0xC, size 0x4, align 255
    GameTime_t m_flRoshanPhaseEndTime; // offset 0x10, size 0x4, align 255
    CHandle< C_BaseEntity > m_hAegisItem; // offset 0x14, size 0x4, align 4
    CHandle< C_BaseEntity > m_hAegisHolder; // offset 0x18, size 0x4, align 4
    HeroID_t m_nAegisHolderHeroID; // offset 0x1C, size 0x4, align 255
};
