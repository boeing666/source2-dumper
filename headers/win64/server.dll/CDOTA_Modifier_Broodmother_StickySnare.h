#pragma once

class CDOTA_Modifier_Broodmother_StickySnare : public CDOTA_Buff /*0x0*/  // sizeof 0x1B60, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    VectorWS m_vOrigin; // offset 0x1AF8, size 0xC, align 4
    VectorWS m_vWallDirection; // offset 0x1B04, size 0xC, align 4
    Vector m_vWallRight; // offset 0x1B10, size 0xC, align 4
    float32 width; // offset 0x1B1C, size 0x4, align 4
    float32 root_duration; // offset 0x1B20, size 0x4, align 4
    float32 formation_delay; // offset 0x1B24, size 0x4, align 4
    bool m_bTouching; // offset 0x1B28, size 0x1, align 1
    char _pad_1B29[0x3]; // offset 0x1B29
    CHandle< CBaseEntity > m_hRight; // offset 0x1B2C, size 0x4, align 4
    bool m_bParticle; // offset 0x1B30, size 0x1, align 1
    char _pad_1B31[0x3]; // offset 0x1B31
    GameTime_t m_flStartingTime; // offset 0x1B34, size 0x4, align 255
    int32 m_nFoWID; // offset 0x1B38, size 0x4, align 4
    int32 m_nTeamID; // offset 0x1B3C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_vecAffectedHeroes; // offset 0x1B40, size 0x18, align 8
    ParticleIndex_t m_nWarmupFXIndex; // offset 0x1B58, size 0x4, align 255
    char _pad_1B5C[0x4]; // offset 0x1B5C
};
