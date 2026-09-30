#pragma once

class CSoundPatch  // sizeof 0xB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CSoundEnvelope m_pitch; // offset 0x8, size 0x10, align 4
    CSoundEnvelope m_volume; // offset 0x18, size 0x10, align 4
    char _pad_0028[0x14]; // offset 0x28
    float32 m_shutdownTime; // offset 0x3C, size 0x4, align 4
    float32 m_flLastTime; // offset 0x40, size 0x4, align 4
    char _pad_0044[0x4]; // offset 0x44
    CUtlSymbolLarge m_iszSoundScriptName; // offset 0x48, size 0x8, align 8
    CHandle< C_BaseEntity > m_hEnt; // offset 0x50, size 0x4, align 4
    CEntityIndex m_soundEntityIndex; // offset 0x54, size 0x4, align 4 | MNotSaved
    VectorWS m_soundOrigin; // offset 0x58, size 0xC, align 4 | MNotSaved
    int32 m_isPlaying; // offset 0x64, size 0x4, align 4
    CCopyRecipientFilter m_Filter; // offset 0x68, size 0x38, align 8
    float32 m_flCloseCaptionDuration; // offset 0xA0, size 0x4, align 4
    bool m_bUpdatedSoundOrigin; // offset 0xA4, size 0x1, align 1 | MNotSaved
    char _pad_00A5[0x3]; // offset 0xA5
    CUtlSymbolLarge m_iszClassName; // offset 0xA8, size 0x8, align 8 | MNotSaved
};
