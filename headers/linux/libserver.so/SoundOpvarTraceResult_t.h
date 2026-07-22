#pragma once

struct SoundOpvarTraceResult_t  // sizeof 0x14, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    VectorWS vPos; // offset 0x0, size 0xC, align 4
    bool bDidHit; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
    float32 flDistSqrToCenter; // offset 0x10, size 0x4, align 4
};
