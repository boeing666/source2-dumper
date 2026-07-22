#pragma once

class CAnimationGraphVisualizerText : public CAnimationGraphVisualizerPrimitiveBase /*0x0*/  // sizeof 0x60, align 0x10 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    VectorAligned m_vWsPosition; // offset 0x40, size 0x10, align 16
    Color m_Color; // offset 0x50, size 0x4, align 1
    char _pad_0054[0x4]; // offset 0x54
    CUtlString m_Text; // offset 0x58, size 0x8, align 8
};
