#pragma once

class CMixControlStackInput : public CMixPropertyBase /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    float32 m_flDefaultValue; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMinRange; // offset 0x24, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxRange; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_002C[0x4]; // offset 0x2C
};
