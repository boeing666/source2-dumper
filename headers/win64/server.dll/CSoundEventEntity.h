#pragma once

class CSoundEventEntity : public CBaseEntity /*0x0*/  // sizeof 0x568, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    bool m_bStartOnSpawn; // offset 0x4A8, size 0x1, align 1
    bool m_bToLocalPlayer; // offset 0x4A9, size 0x1, align 1
    bool m_bStopOnNew; // offset 0x4AA, size 0x1, align 1
    bool m_bSaveRestore; // offset 0x4AB, size 0x1, align 1
    bool m_bSavedIsPlaying; // offset 0x4AC, size 0x1, align 1
    char _pad_04AD[0x3]; // offset 0x4AD
    float32 m_flSavedElapsedTime; // offset 0x4B0, size 0x4, align 4
    char _pad_04B4[0x4]; // offset 0x4B4
    CUtlSymbolLarge m_iszSourceEntityName; // offset 0x4B8, size 0x8, align 8
    CUtlSymbolLarge m_iszAttachmentName; // offset 0x4C0, size 0x8, align 8
    CEntityOutputTemplate< SndOpEventGuid_t > m_onGUIDChanged; // offset 0x4C8, size 0x30, align 8
    CEntityIOOutput m_onSoundFinished; // offset 0x4F8, size 0x18, align 255
    float32 m_flClientCullRadius; // offset 0x510, size 0x4, align 4
    char _pad_0514[0x2C]; // offset 0x514
    CUtlSymbolLarge m_iszSoundName; // offset 0x540, size 0x8, align 8
    char _pad_0548[0x14]; // offset 0x548
    CEntityHandle m_hSource; // offset 0x55C, size 0x4, align 4
    int32 m_nEntityIndexSelection; // offset 0x560, size 0x4, align 4
    char _pad_0564[0x4]; // offset 0x564
};
