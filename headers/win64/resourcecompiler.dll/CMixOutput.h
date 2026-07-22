#pragma once

class CMixOutput : public CMixPropertyBase /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    float32 m_flVolume1; // offset 0x20, size 0x4, align 4 | MPropertyDescription
    float32 m_flVolume2; // offset 0x24, size 0x4, align 4 | MPropertyDescription
    CUtlString m_sendTo; // offset 0x28, size 0x8, align 8 | MPropertyDescription MPropertyFriendlyName MPropertyAttributeChoiceName
};
