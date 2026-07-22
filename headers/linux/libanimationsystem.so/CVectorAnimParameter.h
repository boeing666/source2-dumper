#pragma once

class CVectorAnimParameter : public CConcreteAnimParameter /*0x0*/  // sizeof 0x90, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x78]; // offset 0x0
    Vector m_defaultValue; // offset 0x78, size 0xC, align 4 | MPropertyFriendlyName
    bool m_bInterpolate; // offset 0x84, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0085[0x3]; // offset 0x85
    AnimParamVectorType_t m_vectorType; // offset 0x88, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_008C[0x4]; // offset 0x8C
};
