#pragma once

class C_DOTA_Ability_Tusk_Snowball : public C_DOTABaseAbility /*0x0*/  // sizeof 0x748, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 snowball_windup_radius; // offset 0x6A8, size 0x4, align 4
    float32 snowball_radius; // offset 0x6AC, size 0x4, align 4
    float32 snowball_grow_rate; // offset 0x6B0, size 0x4, align 4
    int32 snowball_damage; // offset 0x6B4, size 0x4, align 4
    int32 snowball_damage_bonus; // offset 0x6B8, size 0x4, align 4
    float32 stun_duration; // offset 0x6BC, size 0x4, align 4
    float32 stun_duration_bonus; // offset 0x6C0, size 0x4, align 4
    int32 bonus_damage; // offset 0x6C4, size 0x4, align 4
    float32 bonus_stun; // offset 0x6C8, size 0x4, align 4
    int32 snowball_speed; // offset 0x6CC, size 0x4, align 4
    int32 snowball_speed_bonus; // offset 0x6D0, size 0x4, align 4
    float32 snowball_duration; // offset 0x6D4, size 0x4, align 4
    VectorWS m_vProjectileLocation; // offset 0x6D8, size 0xC, align 4
    char _pad_06E4[0x4]; // offset 0x6E4
    CUtlVector< CHandle< C_BaseEntity > > m_hSnowballedUnits; // offset 0x6E8, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hEnemiesHit; // offset 0x700, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x718, size 0x4, align 255
    char _pad_071C[0x4]; // offset 0x71C
    CountdownTimer ctSnowball; // offset 0x720, size 0x18, align 8
    bool m_bSpeakAlly; // offset 0x738, size 0x1, align 1
    bool m_bIsExpired; // offset 0x739, size 0x1, align 1
    bool m_bInWindup; // offset 0x73A, size 0x1, align 1
    char _pad_073B[0x1]; // offset 0x73B
    CHandle< C_BaseEntity > m_hPrimaryTarget; // offset 0x73C, size 0x4, align 4
    int32 m_nContainedValidUnits; // offset 0x740, size 0x4, align 4
    bool m_bEndingSnowball; // offset 0x744, size 0x1, align 1
    char _pad_0745[0x3]; // offset 0x745
};
