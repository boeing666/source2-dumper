#pragma once

class CCitadelAudioProcessingVolumeBase : public C_BaseEntity /*0x0*/  // sizeof 0x600, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CUtlString m_strEffectName; // offset 0x5F0, size 0x8, align 8
    char _pad_05F8[0x4]; // offset 0x5F8
    int32 m_nVolumeID; // offset 0x5FC, size 0x4, align 4
};
