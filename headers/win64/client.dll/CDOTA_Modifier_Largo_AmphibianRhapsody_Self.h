#pragma once

class CDOTA_Modifier_Largo_AmphibianRhapsody_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    float32 duration; // offset 0x1A7C, size 0x4, align 4
    float32 rhythm_interval; // offset 0x1A80, size 0x4, align 4
    float32 rhythm_grace_period; // offset 0x1A84, size 0x4, align 4
    float32 armor_per_stack; // offset 0x1A88, size 0x4, align 4
    int32 max_stacks; // offset 0x1A8C, size 0x4, align 4
    float32 stack_duration; // offset 0x1A90, size 0x4, align 4
    int32 double_song; // offset 0x1A94, size 0x4, align 4
    int32 stack_decrement_on_exit; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x30]; // offset 0x1A9C
    AmphibianRhapsodySong_t m_nCurrentSong; // offset 0x1ACC, size 0x4, align 4
    AmphibianRhapsodySong_t m_nCurrentSecondSong; // offset 0x1AD0, size 0x4, align 4
    int32 m_nCurrentSongMusicTrack; // offset 0x1AD4, size 0x4, align 4
    float32 m_flAnticipatePoseTime; // offset 0x1AD8, size 0x4, align 4
    bool m_bPlayFinishSongSound; // offset 0x1ADC, size 0x1, align 1
    char _pad_1ADD[0x13]; // offset 0x1ADD
    bool bRhythmFXStarted; // offset 0x1AF0, size 0x1, align 1
    char _pad_1AF1[0x3]; // offset 0x1AF1
    float32 m_flNextRestartParticleTime; // offset 0x1AF4, size 0x4, align 4
    int32 m_iPoseParameterAnticipation; // offset 0x1AF8, size 0x4, align 4
    float32 m_flLastPoseTime; // offset 0x1AFC, size 0x4, align 4
    bool m_bMusicStarted; // offset 0x1B00, size 0x1, align 1
    char _pad_1B01[0x7]; // offset 0x1B01
};
