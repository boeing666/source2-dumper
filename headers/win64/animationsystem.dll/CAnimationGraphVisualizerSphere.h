#pragma once

class CAnimationGraphVisualizerSphere : public CAnimationGraphVisualizerPrimitiveBase /*0x0*/  // sizeof 0x60, align 0x10 [vtable trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    VectorAligned m_vWsPosition; // offset 0x40, size 0x10, align 16
    float32 m_flRadius; // offset 0x50, size 0x4, align 4
    Color m_Color; // offset 0x54, size 0x4, align 1
    char _pad_0058[0x8]; // offset 0x58
};
