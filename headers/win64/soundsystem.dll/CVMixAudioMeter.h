#pragma once

class CVMixAudioMeter  // sizeof 0x18, align 0x8 (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    CUtlString m_displayName; // offset 0x8, size 0x8, align 8
    uint32 m_nDebugId; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
