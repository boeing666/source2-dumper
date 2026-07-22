#pragma once

class CVMixVsndInput : public CVMixInputBase /*0x0*/  // sizeof 0x20, align 0x8 (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlString m_defaultValue; // offset 0x10, size 0x8, align 8
    int32 m_nProcessor; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
};
