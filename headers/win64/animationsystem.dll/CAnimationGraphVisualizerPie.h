#pragma once

class CAnimationGraphVisualizerPie : public CAnimationGraphVisualizerPrimitiveBase /*0x0*/  // sizeof 0x80, align 0x10 [vtable trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    VectorAligned m_vWsCenter; // offset 0x40, size 0x10, align 16
    VectorAligned m_vWsStart; // offset 0x50, size 0x10, align 16
    VectorAligned m_vWsEnd; // offset 0x60, size 0x10, align 16
    Color m_Color; // offset 0x70, size 0x4, align 1
    char _pad_0074[0xC]; // offset 0x74
};
