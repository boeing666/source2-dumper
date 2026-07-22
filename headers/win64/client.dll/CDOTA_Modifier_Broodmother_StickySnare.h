#pragma once

class CDOTA_Modifier_Broodmother_StickySnare : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    VectorWS m_vOrigin; // offset 0x1A58, size 0xC, align 4
    VectorWS m_vWallDirection; // offset 0x1A64, size 0xC, align 4
    Vector m_vWallRight; // offset 0x1A70, size 0xC, align 4
    float32 width; // offset 0x1A7C, size 0x4, align 4
    float32 root_duration; // offset 0x1A80, size 0x4, align 4
    float32 formation_delay; // offset 0x1A84, size 0x4, align 4
    bool m_bTouching; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x3]; // offset 0x1A89
    CHandle< C_BaseEntity > m_hRight; // offset 0x1A8C, size 0x4, align 4
    bool m_bParticle; // offset 0x1A90, size 0x1, align 1
    char _pad_1A91[0x3]; // offset 0x1A91
    GameTime_t m_flStartingTime; // offset 0x1A94, size 0x4, align 255
    int32 m_nFoWID; // offset 0x1A98, size 0x4, align 4
    int32 m_nTeamID; // offset 0x1A9C, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_vecAffectedHeroes; // offset 0x1AA0, size 0x18, align 8
    ParticleIndex_t m_nWarmupFXIndex; // offset 0x1AB8, size 0x4, align 255
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
