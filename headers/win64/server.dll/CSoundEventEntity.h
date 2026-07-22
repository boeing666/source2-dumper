#pragma once

class CSoundEventEntity : public CBaseEntity /*0x0*/  // sizeof 0x558, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    bool m_bStartOnSpawn; // offset 0x498, size 0x1, align 1
    bool m_bToLocalPlayer; // offset 0x499, size 0x1, align 1
    bool m_bStopOnNew; // offset 0x49A, size 0x1, align 1
    bool m_bSaveRestore; // offset 0x49B, size 0x1, align 1
    bool m_bSavedIsPlaying; // offset 0x49C, size 0x1, align 1
    char _pad_049D[0x3]; // offset 0x49D
    float32 m_flSavedElapsedTime; // offset 0x4A0, size 0x4, align 4
    char _pad_04A4[0x4]; // offset 0x4A4
    CUtlSymbolLarge m_iszSourceEntityName; // offset 0x4A8, size 0x8, align 8
    CUtlSymbolLarge m_iszAttachmentName; // offset 0x4B0, size 0x8, align 8
    CEntityOutputTemplate< SndOpEventGuid_t > m_onGUIDChanged; // offset 0x4B8, size 0x30, align 8
    CEntityIOOutput m_onSoundFinished; // offset 0x4E8, size 0x18, align 255
    float32 m_flClientCullRadius; // offset 0x500, size 0x4, align 4
    char _pad_0504[0x2C]; // offset 0x504
    CUtlSymbolLarge m_iszSoundName; // offset 0x530, size 0x8, align 8
    char _pad_0538[0x14]; // offset 0x538
    CEntityHandle m_hSource; // offset 0x54C, size 0x4, align 4
    int32 m_nEntityIndexSelection; // offset 0x550, size 0x4, align 4
    char _pad_0554[0x4]; // offset 0x554
};
