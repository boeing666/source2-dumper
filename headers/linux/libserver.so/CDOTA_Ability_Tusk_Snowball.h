#pragma once

class CDOTA_Ability_Tusk_Snowball : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x860*/  // sizeof 0x9B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x86C]; // offset 0x0
    float32 snowball_windup_radius; // offset 0x86C, size 0x4, align 4
    float32 snowball_radius; // offset 0x870, size 0x4, align 4
    float32 snowball_grow_rate; // offset 0x874, size 0x4, align 4
    int32 snowball_damage; // offset 0x878, size 0x4, align 4
    int32 snowball_damage_bonus; // offset 0x87C, size 0x4, align 4
    float32 stun_duration; // offset 0x880, size 0x4, align 4
    float32 stun_duration_bonus; // offset 0x884, size 0x4, align 4
    int32 bonus_damage; // offset 0x888, size 0x4, align 4
    float32 bonus_stun; // offset 0x88C, size 0x4, align 4
    int32 snowball_speed; // offset 0x890, size 0x4, align 4
    int32 snowball_speed_bonus; // offset 0x894, size 0x4, align 4
    float32 snowball_duration; // offset 0x898, size 0x4, align 4
    VectorWS m_vProjectileLocation; // offset 0x89C, size 0xC, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hSnowballedUnits; // offset 0x8A8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hEnemiesHit; // offset 0x8C0, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x8D8, size 0x4, align 255
    char _pad_08DC[0x4]; // offset 0x8DC
    CountdownTimer ctSnowball; // offset 0x8E0, size 0x18, align 8
    bool m_bSpeakAlly; // offset 0x8F8, size 0x1, align 1
    bool m_bIsExpired; // offset 0x8F9, size 0x1, align 1
    bool m_bInWindup; // offset 0x8FA, size 0x1, align 1
    char _pad_08FB[0x1]; // offset 0x8FB
    CHandle< CBaseEntity > m_hPrimaryTarget; // offset 0x8FC, size 0x4, align 4
    int32 m_nContainedValidUnits; // offset 0x900, size 0x4, align 4
    bool m_bEndingSnowball; // offset 0x904, size 0x1, align 1
    char _pad_0905[0xA3]; // offset 0x905
    int32 m_nSnowballProjectileHandle; // offset 0x9A8, size 0x4, align 4
    char _pad_09AC[0x4]; // offset 0x9AC
};
