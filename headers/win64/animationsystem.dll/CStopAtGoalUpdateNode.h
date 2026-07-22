#pragma once

class CStopAtGoalUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0xA0, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x74]; // offset 0x0
    float32 m_flOuterRadius; // offset 0x74, size 0x4, align 4
    float32 m_flInnerRadius; // offset 0x78, size 0x4, align 4
    float32 m_flMaxScale; // offset 0x7C, size 0x4, align 4
    float32 m_flMinScale; // offset 0x80, size 0x4, align 4
    char _pad_0084[0x4]; // offset 0x84
    CAnimInputDamping m_damping; // offset 0x88, size 0x18, align 8
};
