#pragma once

class C_SoundEventEntity : public C_BaseEntity /*0x0*/  // sizeof 0x6B0, align 0x8 [vtable] (client)
{
public:
    uint8_t m_bClientSideOnly : 1; // offset 0x0 | MNotSaved
    char _pad_0001[0x5EF]; // offset 0x1
    bool m_bStartOnSpawn; // offset 0x5F0, size 0x1, align 1
    bool m_bToLocalPlayer; // offset 0x5F1, size 0x1, align 1
    bool m_bStopOnNew; // offset 0x5F2, size 0x1, align 1
    bool m_bSaveRestore; // offset 0x5F3, size 0x1, align 1
    bool m_bSavedIsPlaying; // offset 0x5F4, size 0x1, align 1
    char _pad_05F5[0x3]; // offset 0x5F5
    float32 m_flSavedElapsedTime; // offset 0x5F8, size 0x4, align 4
    char _pad_05FC[0x4]; // offset 0x5FC
    CUtlSymbolLarge m_iszSourceEntityName; // offset 0x600, size 0x8, align 8
    CUtlSymbolLarge m_iszAttachmentName; // offset 0x608, size 0x8, align 8
    CEntityOutputTemplate< SndOpEventGuid_t > m_onGUIDChanged; // offset 0x610, size 0x30, align 8
    CEntityIOOutput m_onSoundFinished; // offset 0x640, size 0x18, align 255
    float32 m_flClientCullRadius; // offset 0x658, size 0x4, align 4
    char _pad_065C[0x2C]; // offset 0x65C
    CUtlSymbolLarge m_iszSoundName; // offset 0x688, size 0x8, align 8
    char _pad_0690[0x14]; // offset 0x690
    CEntityHandle m_hSource; // offset 0x6A4, size 0x4, align 4
    int32 m_nEntityIndexSelection; // offset 0x6A8, size 0x4, align 4
    char _pad_06AC[0x4]; // offset 0x6AC
};
