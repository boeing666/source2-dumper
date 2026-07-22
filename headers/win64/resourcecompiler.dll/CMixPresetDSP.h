#pragma once

class CMixPresetDSP : public CMixPropertyBase /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    int32 m_nChannels; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0024[0x4]; // offset 0x24
    CUtlString m_effectName; // offset 0x28, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flXFade; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0034[0x4]; // offset 0x34
};
