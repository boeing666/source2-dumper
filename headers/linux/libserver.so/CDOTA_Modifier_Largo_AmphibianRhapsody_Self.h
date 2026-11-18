#pragma once

class CDOTA_Modifier_Largo_AmphibianRhapsody_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1C18, align 0xFF [vtable] (server)
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
    char _pad_1B5D[0x3]; // offset 0x1B5D
    char*[3] arrOriginalQWEAbilityNames; // offset 0x1B60, size 0x18, align 8
    char*[3] arrCurrentQWEAbilityNames; // offset 0x1B78, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x1B90, size 0x4, align 255
    char _pad_1B94[0x4]; // offset 0x1B94
    CountdownTimer m_rhythmTimer; // offset 0x1B98, size 0x18, align 8
    int32 m_nCurrentRhythmWindow; // offset 0x1BB0, size 0x4, align 4
    char _pad_1BB4[0x4]; // offset 0x1BB4
    CUtlVector< int32 > m_vecSuccessfulBursts; // offset 0x1BB8, size 0x18, align 8
    CUtlVector< int32 > m_vecMissedBursts; // offset 0x1BD0, size 0x18, align 8
    float32 m_flLatencyAllowance; // offset 0x1BE8, size 0x4, align 4
    bool m_bPlayedStopSound; // offset 0x1BEC, size 0x1, align 1
    bool m_bCanceledByEnemy; // offset 0x1BED, size 0x1, align 1
    char _pad_1BEE[0x2]; // offset 0x1BEE
    CountdownTimer m_doubleSongTimer; // offset 0x1BF0, size 0x18, align 8
    int32 m_nConsecutiveBursts; // offset 0x1C08, size 0x4, align 4
    int32 m_nSuccessfulStrums; // offset 0x1C0C, size 0x4, align 4
    bool m_bSpokeConcept; // offset 0x1C10, size 0x1, align 1
    char _pad_1C11[0x3]; // offset 0x1C11
    CHandle< CDOTA_Ability_Largo_AmphibianRhapsody_Song > m_pFirstStrumSong; // offset 0x1C14, size 0x4, align 4
};
