#pragma once

class CVMixNameInput : public CVMixInputBase /*0x0*/  // sizeof 0x20, align 0x8 (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlString m_defaultValue; // offset 0x10, size 0x8, align 8
    char _pad_0018[0x8]; // offset 0x18
};
