#pragma once

class CVectorAnimParameter : public CConcreteAnimParameter /*0x0*/  // sizeof 0x98, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x80]; // offset 0x0
    Vector m_defaultValue; // offset 0x80, size 0xC, align 4 | MPropertyFriendlyName
    bool m_bInterpolate; // offset 0x8C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_008D[0x3]; // offset 0x8D
    AnimParamVectorType_t m_vectorType; // offset 0x90, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0094[0x4]; // offset 0x94
};
