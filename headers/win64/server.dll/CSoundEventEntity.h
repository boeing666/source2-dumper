#pragma once

class CSoundEventEntity : public CBaseEntity /*0x0*/  // sizeof 0x570, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    bool m_bStartOnSpawn; // offset 0x4B0, size 0x1, align 1
    bool m_bToLocalPlayer; // offset 0x4B1, size 0x1, align 1
    bool m_bStopOnNew; // offset 0x4B2, size 0x1, align 1
    bool m_bSaveRestore; // offset 0x4B3, size 0x1, align 1
    bool m_bSavedIsPlaying; // offset 0x4B4, size 0x1, align 1
    char _pad_04B5[0x3]; // offset 0x4B5
    float32 m_flSavedElapsedTime; // offset 0x4B8, size 0x4, align 4
    char _pad_04BC[0x4]; // offset 0x4BC
    CUtlSymbolLarge m_iszSourceEntityName; // offset 0x4C0, size 0x8, align 8
    CUtlSymbolLarge m_iszAttachmentName; // offset 0x4C8, size 0x8, align 8
    CEntityOutputTemplate< SndOpEventGuid_t > m_onGUIDChanged; // offset 0x4D0, size 0x30, align 8
    CEntityIOOutput m_onSoundFinished; // offset 0x500, size 0x18, align 255
    float32 m_flClientCullRadius; // offset 0x518, size 0x4, align 4
    char _pad_051C[0x2C]; // offset 0x51C
    CUtlSymbolLarge m_iszSoundName; // offset 0x548, size 0x8, align 8
    char _pad_0550[0x14]; // offset 0x550
    CEntityHandle m_hSource; // offset 0x564, size 0x4, align 4
    int32 m_nEntityIndexSelection; // offset 0x568, size 0x4, align 4
    char _pad_056C[0x4]; // offset 0x56C
};
