#pragma once

class CMixAudioMeter : public CMixPropertyBase /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    float32 m_flLeftLevel; // offset 0x20, size 0x4, align 4
    float32 m_flLeftPeak; // offset 0x24, size 0x4, align 4
    float32 m_flRightLevel; // offset 0x28, size 0x4, align 4
    float32 m_flRightPeak; // offset 0x2C, size 0x4, align 4
};
