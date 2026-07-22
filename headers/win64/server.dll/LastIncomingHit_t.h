#pragma once

struct LastIncomingHit_t  // sizeof 0x20, align 0xFF [trivial_ctor trivial_dtor] (server)
{
    Vector vecDir; // offset 0x0, size 0xC, align 4
    Vector vecBoneLocalPos; // offset 0xC, size 0xC, align 4
    int32 nHitboxBoneIndex; // offset 0x18, size 0x4, align 4
    float32 flHitStrength; // offset 0x1C, size 0x4, align 4
};
