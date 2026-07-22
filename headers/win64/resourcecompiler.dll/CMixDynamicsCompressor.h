#pragma once

class CMixDynamicsCompressor : public CMixPropertyBase /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    int32 m_nChannels; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    VMixDynamicsCompressorDesc_t m_desc; // offset 0x24, size 0x24, align 4 | MPropertyAutoExpandSelf
    int32 m_nUIPage; // offset 0x48, size 0x4, align 4
    bool m_bIsLimiter; // offset 0x4C, size 0x1, align 1
    char _pad_004D[0x3]; // offset 0x4D
};
