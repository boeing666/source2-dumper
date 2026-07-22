#pragma once

class C_SoundEventEntity : public C_BaseEntity /*0x0*/  // sizeof 0x6C0, align 0x8 [vtable] (client)
{
public:
    uint8_t m_bClientSideOnly : 1; // offset 0x0 | MNotSaved
    char _pad_0001[0x5FF]; // offset 0x1
    bool m_bStartOnSpawn; // offset 0x600, size 0x1, align 1
    bool m_bToLocalPlayer; // offset 0x601, size 0x1, align 1
    bool m_bStopOnNew; // offset 0x602, size 0x1, align 1
    bool m_bSaveRestore; // offset 0x603, size 0x1, align 1
    bool m_bSavedIsPlaying; // offset 0x604, size 0x1, align 1
    char _pad_0605[0x3]; // offset 0x605
    float32 m_flSavedElapsedTime; // offset 0x608, size 0x4, align 4
    char _pad_060C[0x4]; // offset 0x60C
    CUtlSymbolLarge m_iszSourceEntityName; // offset 0x610, size 0x8, align 8
    CUtlSymbolLarge m_iszAttachmentName; // offset 0x618, size 0x8, align 8
    CEntityOutputTemplate< SndOpEventGuid_t > m_onGUIDChanged; // offset 0x620, size 0x30, align 8
    CEntityIOOutput m_onSoundFinished; // offset 0x650, size 0x18, align 255
    float32 m_flClientCullRadius; // offset 0x668, size 0x4, align 4
    char _pad_066C[0x2C]; // offset 0x66C
    CUtlSymbolLarge m_iszSoundName; // offset 0x698, size 0x8, align 8
    char _pad_06A0[0x14]; // offset 0x6A0
    CEntityHandle m_hSource; // offset 0x6B4, size 0x4, align 4
    int32 m_nEntityIndexSelection; // offset 0x6B8, size 0x4, align 4
    char _pad_06BC[0x4]; // offset 0x6BC
};
