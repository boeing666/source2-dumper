#pragma once

class CDOTA_Modifier_Largo_AmphibianRhapsody_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 radius; // offset 0x1AA8, size 0x4, align 4
    float32 duration; // offset 0x1AAC, size 0x4, align 4
    float32 rhythm_interval; // offset 0x1AB0, size 0x4, align 4
    float32 rhythm_grace_period; // offset 0x1AB4, size 0x4, align 4
    float32 armor_per_stack; // offset 0x1AB8, size 0x4, align 4
    int32 max_stacks; // offset 0x1ABC, size 0x4, align 4
    float32 stack_duration; // offset 0x1AC0, size 0x4, align 4
    int32 double_song; // offset 0x1AC4, size 0x4, align 4
    int32 stack_decrement_on_exit; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0x30]; // offset 0x1ACC
    AmphibianRhapsodySong_t m_nCurrentSong; // offset 0x1AFC, size 0x4, align 4
    AmphibianRhapsodySong_t m_nCurrentSecondSong; // offset 0x1B00, size 0x4, align 4
    int32 m_nCurrentSongMusicTrack; // offset 0x1B04, size 0x4, align 4
    float32 m_flAnticipatePoseTime; // offset 0x1B08, size 0x4, align 4
    bool m_bPlayFinishSongSound; // offset 0x1B0C, size 0x1, align 1
    char _pad_1B0D[0x13]; // offset 0x1B0D
    bool bRhythmFXStarted; // offset 0x1B20, size 0x1, align 1
    char _pad_1B21[0x3]; // offset 0x1B21
    float32 m_flNextRestartParticleTime; // offset 0x1B24, size 0x4, align 4
    int32 m_iPoseParameterAnticipation; // offset 0x1B28, size 0x4, align 4
    float32 m_flLastPoseTime; // offset 0x1B2C, size 0x4, align 4
    bool m_bMusicStarted; // offset 0x1B30, size 0x1, align 1
    char _pad_1B31[0x7]; // offset 0x1B31
};
