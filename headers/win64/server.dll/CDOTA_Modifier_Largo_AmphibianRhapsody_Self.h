#pragma once

class CDOTA_Modifier_Largo_AmphibianRhapsody_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1B98, align 0xFF [vtable] (server)
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
    char _pad_1ADD[0x3]; // offset 0x1ADD
    char*[3] arrOriginalQWEAbilityNames; // offset 0x1AE0, size 0x18, align 8
    char*[3] arrCurrentQWEAbilityNames; // offset 0x1AF8, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x1B10, size 0x4, align 255
    char _pad_1B14[0x4]; // offset 0x1B14
    CountdownTimer m_rhythmTimer; // offset 0x1B18, size 0x18, align 8
    int32 m_nCurrentRhythmWindow; // offset 0x1B30, size 0x4, align 4
    char _pad_1B34[0x4]; // offset 0x1B34
    CUtlVector< int32 > m_vecSuccessfulBursts; // offset 0x1B38, size 0x18, align 8
    CUtlVector< int32 > m_vecMissedBursts; // offset 0x1B50, size 0x18, align 8
    float32 m_flLatencyAllowance; // offset 0x1B68, size 0x4, align 4
    bool m_bPlayedStopSound; // offset 0x1B6C, size 0x1, align 1
    bool m_bCanceledByEnemy; // offset 0x1B6D, size 0x1, align 1
    char _pad_1B6E[0x2]; // offset 0x1B6E
    CountdownTimer m_doubleSongTimer; // offset 0x1B70, size 0x18, align 8
    int32 m_nConsecutiveBursts; // offset 0x1B88, size 0x4, align 4
    bool m_bSpokeConcept; // offset 0x1B8C, size 0x1, align 1
    char _pad_1B8D[0x3]; // offset 0x1B8D
    CHandle< CDOTA_Ability_Largo_AmphibianRhapsody_Song > m_pFirstStrumSong; // offset 0x1B90, size 0x4, align 4
    char _pad_1B94[0x4]; // offset 0x1B94
};
