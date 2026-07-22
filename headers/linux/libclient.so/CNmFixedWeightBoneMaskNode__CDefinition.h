#pragma once

class CNmFixedWeightBoneMaskNode::CDefinition : public CNmBoneMaskValueNode::CDefinition /*0x0*/  // sizeof 0x10, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC]; // offset 0x0
    float32 m_flBoneWeight; // offset 0xC, size 0x4, align 4
};
