#pragma once

class CVMixNameInputMeter : public CVMixInputBase /*0x0*/  // sizeof 0x18, align 0x8 (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int32 m_nValueIndex; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
