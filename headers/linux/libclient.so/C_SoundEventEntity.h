#pragma once

class C_SoundEventEntity : public C_BaseEntity /*0x0*/  // sizeof 0x828, align 0x8 [vtable] (client)
{
public:
    uint8_t m_bClientSideOnly : 1; // offset 0x0 | MNotSaved
    char _pad_0001[0x76B]; // offset 0x1
    bool m_bStartOnSpawn; // offset 0x76C, size 0x1, align 1
    bool m_bToLocalPlayer; // offset 0x76D, size 0x1, align 1
    bool m_bStopOnNew; // offset 0x76E, size 0x1, align 1
    bool m_bSaveRestore; // offset 0x76F, size 0x1, align 1
    bool m_bSavedIsPlaying; // offset 0x770, size 0x1, align 1
    char _pad_0771[0x3]; // offset 0x771
    float32 m_flSavedElapsedTime; // offset 0x774, size 0x4, align 4
    CUtlSymbolLarge m_iszSourceEntityName; // offset 0x778, size 0x8, align 8
    CUtlSymbolLarge m_iszAttachmentName; // offset 0x780, size 0x8, align 8
    CEntityOutputTemplate< SndOpEventGuid_t > m_onGUIDChanged; // offset 0x788, size 0x30, align 8
    CEntityIOOutput m_onSoundFinished; // offset 0x7B8, size 0x18, align 255
    float32 m_flClientCullRadius; // offset 0x7D0, size 0x4, align 4
    char _pad_07D4[0x2C]; // offset 0x7D4
    CUtlSymbolLarge m_iszSoundName; // offset 0x800, size 0x8, align 8
    char _pad_0808[0x14]; // offset 0x808
    CEntityHandle m_hSource; // offset 0x81C, size 0x4, align 4
    int32 m_nEntityIndexSelection; // offset 0x820, size 0x4, align 4
    char _pad_0824[0x4]; // offset 0x824
};
