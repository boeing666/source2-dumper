#pragma once

struct ParticleNode_t  // sizeof 0x24, align 0xFF [trivial_dtor] (client)
{
    CHandle< C_BaseEntity > m_hEntity; // offset 0x0, size 0x4, align 4
    ParticleIndex_t m_iIndex; // offset 0x4, size 0x4, align 255
    GameTime_t m_flStartTime; // offset 0x8, size 0x4, align 255
    float32 m_flGrowthDuration; // offset 0xC, size 0x4, align 4
    VectorWS m_vecGrowthOrigin; // offset 0x10, size 0xC, align 4
    float32 m_flEndcapTime; // offset 0x1C, size 0x4, align 4
    bool m_bMarkedForDelete; // offset 0x20, size 0x1, align 1
    char _pad_0021[0x3]; // offset 0x21
};
