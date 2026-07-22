#pragma once

class CMixDualCompressor : public CMixPropertyBase /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    int32 m_nChannels; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    VMixDualCompressorDesc_t m_desc; // offset 0x24, size 0x34, align 4 | MPropertyAutoExpandSelf
};
