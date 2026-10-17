#pragma once

class CDOTA_Modifier_Largo_AmphibianRhapsody_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1BC8, align 0xFF [vtable] (server)
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
    char _pad_1B0D[0x3]; // offset 0x1B0D
    char*[3] arrOriginalQWEAbilityNames; // offset 0x1B10, size 0x18, align 8
    char*[3] arrCurrentQWEAbilityNames; // offset 0x1B28, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x1B40, size 0x4, align 255
    char _pad_1B44[0x4]; // offset 0x1B44
    CountdownTimer m_rhythmTimer; // offset 0x1B48, size 0x18, align 8
    int32 m_nCurrentRhythmWindow; // offset 0x1B60, size 0x4, align 4
    char _pad_1B64[0x4]; // offset 0x1B64
    CUtlVector< int32 > m_vecSuccessfulBursts; // offset 0x1B68, size 0x18, align 8
    CUtlVector< int32 > m_vecMissedBursts; // offset 0x1B80, size 0x18, align 8
    float32 m_flLatencyAllowance; // offset 0x1B98, size 0x4, align 4
    bool m_bPlayedStopSound; // offset 0x1B9C, size 0x1, align 1
    bool m_bCanceledByEnemy; // offset 0x1B9D, size 0x1, align 1
    char _pad_1B9E[0x2]; // offset 0x1B9E
    CountdownTimer m_doubleSongTimer; // offset 0x1BA0, size 0x18, align 8
    int32 m_nConsecutiveBursts; // offset 0x1BB8, size 0x4, align 4
    bool m_bSpokeConcept; // offset 0x1BBC, size 0x1, align 1
    char _pad_1BBD[0x3]; // offset 0x1BBD
    CHandle< CDOTA_Ability_Largo_AmphibianRhapsody_Song > m_pFirstStrumSong; // offset 0x1BC0, size 0x4, align 4
    char _pad_1BC4[0x4]; // offset 0x1BC4
};
