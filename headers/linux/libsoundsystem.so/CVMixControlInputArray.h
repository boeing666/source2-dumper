#pragma once

class CVMixControlInputArray : public CVMixInputBase /*0x0*/  // sizeof 0x10, align 0x8 (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC]; // offset 0x0
    int32 m_nArrayIndex; // offset 0xC, size 0x4, align 4
};
