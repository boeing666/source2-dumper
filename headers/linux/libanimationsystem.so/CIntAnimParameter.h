#pragma once

class CIntAnimParameter : public CConcreteAnimParameter /*0x0*/  // sizeof 0x88, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x78]; // offset 0x0
    int32 m_defaultValue; // offset 0x78, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_minValue; // offset 0x7C, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_maxValue; // offset 0x80, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0084[0x4]; // offset 0x84
};
