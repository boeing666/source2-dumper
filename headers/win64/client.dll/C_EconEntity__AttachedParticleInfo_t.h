#pragma once

struct C_EconEntity::AttachedParticleInfo_t  // sizeof 0xC, align 0xFF [trivial_dtor] (client)
{
    ParticleIndex_t m_nAttachedParticleIndex; // offset 0x0, size 0x4, align 255
    CUtlStringToken m_customType; // offset 0x4, size 0x4, align 4
    bool m_bShouldDestroyImmediately; // offset 0x8, size 0x1, align 1
    char _pad_0009[0x3]; // offset 0x9
};
