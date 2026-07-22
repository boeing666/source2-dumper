#pragma once

class CSoundEventEntity : public CBaseEntity /*0x0*/  // sizeof 0x560, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    bool m_bStartOnSpawn; // offset 0x4A0, size 0x1, align 1
    bool m_bToLocalPlayer; // offset 0x4A1, size 0x1, align 1
    bool m_bStopOnNew; // offset 0x4A2, size 0x1, align 1
    bool m_bSaveRestore; // offset 0x4A3, size 0x1, align 1
    bool m_bSavedIsPlaying; // offset 0x4A4, size 0x1, align 1
    char _pad_04A5[0x3]; // offset 0x4A5
    float32 m_flSavedElapsedTime; // offset 0x4A8, size 0x4, align 4
    char _pad_04AC[0x4]; // offset 0x4AC
    CUtlSymbolLarge m_iszSourceEntityName; // offset 0x4B0, size 0x8, align 8
    CUtlSymbolLarge m_iszAttachmentName; // offset 0x4B8, size 0x8, align 8
    CEntityOutputTemplate< SndOpEventGuid_t > m_onGUIDChanged; // offset 0x4C0, size 0x30, align 8
    CEntityIOOutput m_onSoundFinished; // offset 0x4F0, size 0x18, align 255
    float32 m_flClientCullRadius; // offset 0x508, size 0x4, align 4
    char _pad_050C[0x2C]; // offset 0x50C
    CUtlSymbolLarge m_iszSoundName; // offset 0x538, size 0x8, align 8
    char _pad_0540[0x14]; // offset 0x540
    CEntityHandle m_hSource; // offset 0x554, size 0x4, align 4
    int32 m_nEntityIndexSelection; // offset 0x558, size 0x4, align 4
    char _pad_055C[0x4]; // offset 0x55C
};
