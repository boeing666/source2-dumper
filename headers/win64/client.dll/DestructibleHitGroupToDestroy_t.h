#pragma once

struct DestructibleHitGroupToDestroy_t  // sizeof 0x8, align 0xFF [trivial_dtor] (client)
{
    HitGroup_t m_nHitGroup; // offset 0x0, size 0x4, align 4
    int32 m_nMaxDamageLevel; // offset 0x4, size 0x4, align 4
};
