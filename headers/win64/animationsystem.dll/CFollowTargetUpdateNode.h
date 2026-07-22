#pragma once

class CFollowTargetUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0x90, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    FollowTargetOpFixedSettings_t m_opFixedData; // offset 0x70, size 0x10, align 4
    char _pad_0080[0x8]; // offset 0x80
    CAnimParamHandle m_hParameterPosition; // offset 0x88, size 0x2, align 1
    CAnimParamHandle m_hParameterOrientation; // offset 0x8A, size 0x2, align 1
    char _pad_008C[0x4]; // offset 0x8C
};
