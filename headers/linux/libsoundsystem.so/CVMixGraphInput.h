#pragma once

class CVMixGraphInput : public CVMixInputBase /*0x0*/  // sizeof 0x18, align 0x8 (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC]; // offset 0x0
    CVMixDataOffset m_nOffset; // offset 0xC, size 0x4, align 255
    char _pad_0010[0x8]; // offset 0x10
};
