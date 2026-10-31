#pragma once

class CBoneConstraintRbf : public CBoneConstraintBase /*0x0*/  // sizeof 0xC8, align 0x8 [vtable] (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CUtlVector< std::pair< CUtlString, uint32 > > m_inputBones; // offset 0x20, size 0x18, align 8
    CUtlVector< std::pair< CUtlString, uint32 > > m_outputBones; // offset 0x38, size 0x18, align 8
    char _pad_0050[0x78]; // offset 0x50
};
