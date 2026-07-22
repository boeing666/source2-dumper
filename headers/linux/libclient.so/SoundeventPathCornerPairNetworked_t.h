#pragma once

struct SoundeventPathCornerPairNetworked_t  // sizeof 0x24, align 0xFF [trivial_dtor] (client)
{
    VectorWS vP1; // offset 0x0, size 0xC, align 4
    VectorWS vP2; // offset 0xC, size 0xC, align 4
    float32 flPathLengthSqr; // offset 0x18, size 0x4, align 4
    float32 flP1Pct; // offset 0x1C, size 0x4, align 4
    float32 flP2Pct; // offset 0x20, size 0x4, align 4
};
