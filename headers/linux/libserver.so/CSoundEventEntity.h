#pragma once

class CSoundEventEntity : public CBaseEntity /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bStartOnSpawn; // offset 0x778, size 0x1, align 1
    bool m_bToLocalPlayer; // offset 0x779, size 0x1, align 1
    bool m_bStopOnNew; // offset 0x77A, size 0x1, align 1
    bool m_bSaveRestore; // offset 0x77B, size 0x1, align 1
    bool m_bSavedIsPlaying; // offset 0x77C, size 0x1, align 1
    char _pad_077D[0x3]; // offset 0x77D
    float32 m_flSavedElapsedTime; // offset 0x780, size 0x4, align 4
    char _pad_0784[0x4]; // offset 0x784
    CUtlSymbolLarge m_iszSourceEntityName; // offset 0x788, size 0x8, align 8
    CUtlSymbolLarge m_iszAttachmentName; // offset 0x790, size 0x8, align 8
    CEntityOutputTemplate< SndOpEventGuid_t > m_onGUIDChanged; // offset 0x798, size 0x30, align 8
    CEntityIOOutput m_onSoundFinished; // offset 0x7C8, size 0x18, align 255
    float32 m_flClientCullRadius; // offset 0x7E0, size 0x4, align 4
    char _pad_07E4[0x2C]; // offset 0x7E4
    CUtlSymbolLarge m_iszSoundName; // offset 0x810, size 0x8, align 8
    char _pad_0818[0x14]; // offset 0x818
    CEntityHandle m_hSource; // offset 0x82C, size 0x4, align 4
    int32 m_nEntityIndexSelection; // offset 0x830, size 0x4, align 4
    char _pad_0834[0x4]; // offset 0x834
};
