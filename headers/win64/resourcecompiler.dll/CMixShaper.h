#pragma once

class CMixShaper : public CMixPropertyBase /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    VMixShaperDesc_t m_desc; // offset 0x20, size 0x14, align 4 | MPropertyAutoExpandSelf
    char _pad_0034[0x4]; // offset 0x34
};
