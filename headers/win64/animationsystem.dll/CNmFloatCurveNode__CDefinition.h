#pragma once

class CNmFloatCurveNode::CDefinition : public CNmFloatValueNode::CDefinition /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 m_nInputValueNodeIdx; // offset 0x10, size 0x2, align 2
    char _pad_0012[0x6]; // offset 0x12
    CPiecewiseCurve m_curve; // offset 0x18, size 0x40, align 8
};
