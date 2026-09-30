#pragma once

class CNmFloatSpringNode::CDefinition : public CNmFloatValueNode::CDefinition /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    float32 m_flStartValue; // offset 0x10, size 0x4, align 4
    float32 m_flHertz; // offset 0x14, size 0x4, align 4
    float32 m_flDampingRatio; // offset 0x18, size 0x4, align 4
    int16 m_nInputValueNodeIdx; // offset 0x1C, size 0x2, align 2
    bool m_bUseStartValue; // offset 0x1E, size 0x1, align 1
    char _pad_001F[0x1]; // offset 0x1F
};
