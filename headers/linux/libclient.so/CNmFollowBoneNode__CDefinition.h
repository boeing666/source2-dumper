#pragma once

class CNmFollowBoneNode::CDefinition : public CNmPassthroughNode::CDefinition /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CGlobalSymbol m_bone; // offset 0x10, size 0x8, align 8
    CGlobalSymbol m_followTargetBone; // offset 0x18, size 0x8, align 8
    int16 m_nEnabledNodeIdx; // offset 0x20, size 0x2, align 2
    NmFollowBoneMode_t m_mode; // offset 0x22, size 0x1, align 1
    char _pad_0023[0x5]; // offset 0x23
};
