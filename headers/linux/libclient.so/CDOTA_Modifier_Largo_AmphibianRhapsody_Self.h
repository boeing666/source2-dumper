#pragma once

class CDOTA_Modifier_Largo_AmphibianRhapsody_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 radius; // offset 0x1A58, size 0x4, align 4
    float32 duration; // offset 0x1A5C, size 0x4, align 4
    float32 rhythm_interval; // offset 0x1A60, size 0x4, align 4
    float32 rhythm_grace_period; // offset 0x1A64, size 0x4, align 4
    float32 armor_per_stack; // offset 0x1A68, size 0x4, align 4
    int32 max_stacks; // offset 0x1A6C, size 0x4, align 4
    float32 stack_duration; // offset 0x1A70, size 0x4, align 4
    int32 double_song; // offset 0x1A74, size 0x4, align 4
    int32 stack_decrement_on_exit; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x30]; // offset 0x1A7C
    AmphibianRhapsodySong_t m_nCurrentSong; // offset 0x1AAC, size 0x4, align 4
    AmphibianRhapsodySong_t m_nCurrentSecondSong; // offset 0x1AB0, size 0x4, align 4
    int32 m_nCurrentSongMusicTrack; // offset 0x1AB4, size 0x4, align 4
    float32 m_flAnticipatePoseTime; // offset 0x1AB8, size 0x4, align 4
    bool m_bPlayFinishSongSound; // offset 0x1ABC, size 0x1, align 1
    char _pad_1ABD[0x13]; // offset 0x1ABD
    bool bRhythmFXStarted; // offset 0x1AD0, size 0x1, align 1
    char _pad_1AD1[0x3]; // offset 0x1AD1
    float32 m_flNextRestartParticleTime; // offset 0x1AD4, size 0x4, align 4
    int32 m_iPoseParameterAnticipation; // offset 0x1AD8, size 0x4, align 4
    float32 m_flLastPoseTime; // offset 0x1ADC, size 0x4, align 4
    bool m_bMusicStarted; // offset 0x1AE0, size 0x1, align 1
    char _pad_1AE1[0x7]; // offset 0x1AE1
};
