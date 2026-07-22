#pragma once

class CVMixControlInput : public CVMixInputBase /*0x0*/  // sizeof 0x10, align 0x8 (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC]; // offset 0x0
    float32 m_flDefaultValue; // offset 0xC, size 0x4, align 4
};
