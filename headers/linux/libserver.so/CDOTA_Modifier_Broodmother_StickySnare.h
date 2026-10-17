#pragma once

class CDOTA_Modifier_Broodmother_StickySnare : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    VectorWS m_vOrigin; // offset 0x1AA8, size 0xC, align 4
    VectorWS m_vWallDirection; // offset 0x1AB4, size 0xC, align 4
    Vector m_vWallRight; // offset 0x1AC0, size 0xC, align 4
    float32 width; // offset 0x1ACC, size 0x4, align 4
    float32 root_duration; // offset 0x1AD0, size 0x4, align 4
    float32 formation_delay; // offset 0x1AD4, size 0x4, align 4
    bool m_bTouching; // offset 0x1AD8, size 0x1, align 1
    char _pad_1AD9[0x3]; // offset 0x1AD9
    CHandle< CBaseEntity > m_hRight; // offset 0x1ADC, size 0x4, align 4
    bool m_bParticle; // offset 0x1AE0, size 0x1, align 1
    char _pad_1AE1[0x3]; // offset 0x1AE1
    GameTime_t m_flStartingTime; // offset 0x1AE4, size 0x4, align 255
    int32 m_nFoWID; // offset 0x1AE8, size 0x4, align 4
    int32 m_nTeamID; // offset 0x1AEC, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_vecAffectedHeroes; // offset 0x1AF0, size 0x18, align 8
    ParticleIndex_t m_nWarmupFXIndex; // offset 0x1B08, size 0x4, align 255
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
