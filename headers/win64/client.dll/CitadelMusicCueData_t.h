#pragma once

struct CitadelMusicCueData_t  // sizeof 0x98, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CSoundEventName m_strSoundEvent; // offset 0x0, size 0x10, align 8
    EMusicState_t m_nDeferState; // offset 0x10, size 0x4, align 4
    float32 m_flBpm; // offset 0x14, size 0x4, align 4
    bool m_bInterruptStop; // offset 0x18, size 0x1, align 1
    bool m_bSetToNoneStateWhenFinished; // offset 0x19, size 0x1, align 1
    char _pad_001A[0x2]; // offset 0x1A
    CitadelMusicSyncMode_t m_nSyncMode; // offset 0x1C, size 0x4, align 4
    CUtlVector< float32 > m_SyncTimes; // offset 0x20, size 0x18, align 8
    float32 m_flSyncOffset; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x4]; // offset 0x3C
    CUtlOrderedMap< CUtlString, CitadelMusicChord_t > m_Chords; // offset 0x40, size 0x28, align 8
    CUtlVector< CUtlString > m_Arpeggiators; // offset 0x68, size 0x18, align 8
    char _pad_0080[0x18]; // offset 0x80
};
