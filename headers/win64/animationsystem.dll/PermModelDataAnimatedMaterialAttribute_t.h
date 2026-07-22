#pragma once

struct PermModelDataAnimatedMaterialAttribute_t  // sizeof 0x10, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    CUtlString m_AttributeName; // offset 0x0, size 0x8, align 8
    int32 m_nNumChannels; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
};
