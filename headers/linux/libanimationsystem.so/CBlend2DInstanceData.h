#pragma once

class CBlend2DInstanceData  // sizeof 0xA0, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    Vector2D m_dampedValue; // offset 0x8, size 0x8, align 4
    char _pad_0010[0x34]; // offset 0x10
    float32 m_flCycle; // offset 0x44, size 0x4, align 4
    float32 m_flPrevCycle; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x54]; // offset 0x4C
};
