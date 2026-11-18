#pragma once

class C_DOTA_Ability_Tusk_Snowball : public C_DOTABaseAbility /*0x0*/  // sizeof 0x8C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    float32 snowball_windup_radius; // offset 0x828, size 0x4, align 4
    float32 snowball_radius; // offset 0x82C, size 0x4, align 4
    float32 snowball_grow_rate; // offset 0x830, size 0x4, align 4
    int32 snowball_damage; // offset 0x834, size 0x4, align 4
    int32 snowball_damage_bonus; // offset 0x838, size 0x4, align 4
    float32 stun_duration; // offset 0x83C, size 0x4, align 4
    float32 stun_duration_bonus; // offset 0x840, size 0x4, align 4
    int32 bonus_damage; // offset 0x844, size 0x4, align 4
    float32 bonus_stun; // offset 0x848, size 0x4, align 4
    int32 snowball_speed; // offset 0x84C, size 0x4, align 4
    int32 snowball_speed_bonus; // offset 0x850, size 0x4, align 4
    float32 snowball_duration; // offset 0x854, size 0x4, align 4
    VectorWS m_vProjectileLocation; // offset 0x858, size 0xC, align 4
    char _pad_0864[0x4]; // offset 0x864
    CUtlVector< CHandle< C_BaseEntity > > m_hSnowballedUnits; // offset 0x868, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hEnemiesHit; // offset 0x880, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x898, size 0x4, align 255
    char _pad_089C[0x4]; // offset 0x89C
    CountdownTimer ctSnowball; // offset 0x8A0, size 0x18, align 8
    bool m_bSpeakAlly; // offset 0x8B8, size 0x1, align 1
    bool m_bIsExpired; // offset 0x8B9, size 0x1, align 1
    bool m_bInWindup; // offset 0x8BA, size 0x1, align 1
    char _pad_08BB[0x1]; // offset 0x8BB
    CHandle< C_BaseEntity > m_hPrimaryTarget; // offset 0x8BC, size 0x4, align 4
    int32 m_nContainedValidUnits; // offset 0x8C0, size 0x4, align 4
    bool m_bEndingSnowball; // offset 0x8C4, size 0x1, align 1
    char _pad_08C5[0x3]; // offset 0x8C5
};
