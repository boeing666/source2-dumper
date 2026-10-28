#pragma once

class CBoneConstraintDotToMorph : public CBoneConstraintBase /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CUtlString m_sBoneName; // offset 0x20, size 0x8, align 8
    CUtlString m_sTargetBoneName; // offset 0x28, size 0x8, align 8
    CUtlString m_sMorphChannelName; // offset 0x30, size 0x8, align 8
    float32[4] m_flRemap; // offset 0x38, size 0x10, align 4
    char _pad_0048[0x10]; // offset 0x48
};
