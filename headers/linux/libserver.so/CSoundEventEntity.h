#pragma once

class CSoundEventEntity : public CBaseEntity /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    bool m_bStartOnSpawn; // offset 0x788, size 0x1, align 1
    bool m_bToLocalPlayer; // offset 0x789, size 0x1, align 1
    bool m_bStopOnNew; // offset 0x78A, size 0x1, align 1
    bool m_bSaveRestore; // offset 0x78B, size 0x1, align 1
    bool m_bSavedIsPlaying; // offset 0x78C, size 0x1, align 1
    char _pad_078D[0x3]; // offset 0x78D
    float32 m_flSavedElapsedTime; // offset 0x790, size 0x4, align 4
    char _pad_0794[0x4]; // offset 0x794
    CUtlSymbolLarge m_iszSourceEntityName; // offset 0x798, size 0x8, align 8
    CUtlSymbolLarge m_iszAttachmentName; // offset 0x7A0, size 0x8, align 8
    CEntityOutputTemplate< SndOpEventGuid_t > m_onGUIDChanged; // offset 0x7A8, size 0x30, align 8
    CEntityIOOutput m_onSoundFinished; // offset 0x7D8, size 0x18, align 255
    float32 m_flClientCullRadius; // offset 0x7F0, size 0x4, align 4
    char _pad_07F4[0x2C]; // offset 0x7F4
    CUtlSymbolLarge m_iszSoundName; // offset 0x820, size 0x8, align 8
    char _pad_0828[0x14]; // offset 0x828
    CEntityHandle m_hSource; // offset 0x83C, size 0x4, align 4
    int32 m_nEntityIndexSelection; // offset 0x840, size 0x4, align 4
    char _pad_0844[0x4]; // offset 0x844
};
