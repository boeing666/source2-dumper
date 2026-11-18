#pragma once

class CDOTA_Modifier_Largo_AmphibianRhapsody_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1B88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 radius; // offset 0x1AF8, size 0x4, align 4
    float32 duration; // offset 0x1AFC, size 0x4, align 4
    float32 rhythm_interval; // offset 0x1B00, size 0x4, align 4
    float32 rhythm_grace_period; // offset 0x1B04, size 0x4, align 4
    float32 armor_per_stack; // offset 0x1B08, size 0x4, align 4
    int32 max_stacks; // offset 0x1B0C, size 0x4, align 4
    float32 stack_duration; // offset 0x1B10, size 0x4, align 4
    int32 double_song; // offset 0x1B14, size 0x4, align 4
    int32 stack_decrement_on_exit; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x30]; // offset 0x1B1C
    AmphibianRhapsodySong_t m_nCurrentSong; // offset 0x1B4C, size 0x4, align 4
    AmphibianRhapsodySong_t m_nCurrentSecondSong; // offset 0x1B50, size 0x4, align 4
    int32 m_nCurrentSongMusicTrack; // offset 0x1B54, size 0x4, align 4
    float32 m_flAnticipatePoseTime; // offset 0x1B58, size 0x4, align 4
    bool m_bPlayFinishSongSound; // offset 0x1B5C, size 0x1, align 1
    char _pad_1B5D[0x13]; // offset 0x1B5D
    bool bRhythmFXStarted; // offset 0x1B70, size 0x1, align 1
    char _pad_1B71[0x3]; // offset 0x1B71
    float32 m_flNextRestartParticleTime; // offset 0x1B74, size 0x4, align 4
    int32 m_iPoseParameterAnticipation; // offset 0x1B78, size 0x4, align 4
    float32 m_flLastPoseTime; // offset 0x1B7C, size 0x4, align 4
    bool m_bMusicStarted; // offset 0x1B80, size 0x1, align 1
    char _pad_1B81[0x7]; // offset 0x1B81
};
