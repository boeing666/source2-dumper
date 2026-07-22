#pragma once

class CMixEQ8 : public CMixPropertyBase /*0x0*/  // sizeof 0xE8, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    int32 m_nChannels; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0024[0x4]; // offset 0x24
    CFilterStage[8] m_stages; // offset 0x28, size 0xC0, align 8 | MPropertyFriendlyName
};
