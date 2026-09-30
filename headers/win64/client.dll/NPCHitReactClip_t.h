#pragma once

struct NPCHitReactClip_t  // sizeof 0x10, align 0x8 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    CGlobalSymbol m_ClipID; // offset 0x0, size 0x8, align 8
    float32 m_flRandomWeight; // offset 0x8, size 0x4, align 4
    float32 m_flDuration; // offset 0xC, size 0x4, align 4
};
