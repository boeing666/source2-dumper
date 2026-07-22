#pragma once

class CAnimationGraphVisualizerLine : public CAnimationGraphVisualizerPrimitiveBase /*0x0*/  // sizeof 0x70, align 0x10 [vtable trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    VectorAligned m_vWsPositionStart; // offset 0x40, size 0x10, align 16
    VectorAligned m_vWsPositionEnd; // offset 0x50, size 0x10, align 16
    Color m_Color; // offset 0x60, size 0x4, align 1
    char _pad_0064[0xC]; // offset 0x64
};
