#pragma once

struct PermModelExtPart_t  // sizeof 0x40, align 0x10 (modellib) {MGetKV3ClassDefaults}
{
    CTransform m_Transform; // offset 0x0, size 0x20, align 16
    CUtlString m_Name; // offset 0x20, size 0x8, align 8
    int32 m_nParent; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
    CStrongHandle< InfoForResourceTypeCModel > m_refModel; // offset 0x30, size 0x8, align 8
    char _pad_0038[0x8]; // offset 0x38
};
