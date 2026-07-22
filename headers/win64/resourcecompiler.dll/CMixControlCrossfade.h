#pragma once

class CMixControlCrossfade : public CMixPropertyBase /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    float32 m_flFadeStart; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flFadeEnd; // offset 0x24, size 0x4, align 4 | MPropertyFriendlyName
};
