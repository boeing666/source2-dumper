#pragma once

class CnmGraphDocFollowBoneNode::CData : public CNmGraphDocVariationDataNode::CData /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_boneName; // offset 0x8, size 0x8, align 8
    CUtlString m_followTargetBoneName; // offset 0x10, size 0x8, align 8
};
