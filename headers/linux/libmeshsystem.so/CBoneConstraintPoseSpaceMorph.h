#pragma once

class CBoneConstraintPoseSpaceMorph : public CBoneConstraintBase /*0x0*/  // sizeof 0xA0, align 0x8 [vtable] (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CUtlString m_sBoneName; // offset 0x20, size 0x8, align 8
    CUtlString m_sAttachmentName; // offset 0x28, size 0x8, align 8
    CUtlVector< CUtlString > m_outputMorph; // offset 0x30, size 0x18, align 8
    CUtlVector< CBoneConstraintPoseSpaceMorph::Input_t > m_inputList; // offset 0x48, size 0x18, align 8
    bool m_bClamp; // offset 0x60, size 0x1, align 1
    char _pad_0061[0x3F]; // offset 0x61
};
