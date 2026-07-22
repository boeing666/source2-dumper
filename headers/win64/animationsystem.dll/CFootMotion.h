#pragma once

class CFootMotion  // sizeof 0x28, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CFootStride > m_strides; // offset 0x0, size 0x18, align 8
    CUtlString m_name; // offset 0x18, size 0x8, align 8
    bool m_bAdditive; // offset 0x20, size 0x1, align 1
    char _pad_0021[0x7]; // offset 0x21
};
