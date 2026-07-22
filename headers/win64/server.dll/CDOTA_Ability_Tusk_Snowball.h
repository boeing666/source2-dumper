#pragma once

class CDOTA_Ability_Tusk_Snowball : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x580*/  // sizeof 0x6C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    float32 snowball_windup_radius; // offset 0x590, size 0x4, align 4
    float32 snowball_radius; // offset 0x594, size 0x4, align 4
    float32 snowball_grow_rate; // offset 0x598, size 0x4, align 4
    int32 snowball_damage; // offset 0x59C, size 0x4, align 4
    int32 snowball_damage_bonus; // offset 0x5A0, size 0x4, align 4
    float32 stun_duration; // offset 0x5A4, size 0x4, align 4
    float32 stun_duration_bonus; // offset 0x5A8, size 0x4, align 4
    int32 bonus_damage; // offset 0x5AC, size 0x4, align 4
    float32 bonus_stun; // offset 0x5B0, size 0x4, align 4
    int32 snowball_speed; // offset 0x5B4, size 0x4, align 4
    int32 snowball_speed_bonus; // offset 0x5B8, size 0x4, align 4
    float32 snowball_duration; // offset 0x5BC, size 0x4, align 4
    VectorWS m_vProjectileLocation; // offset 0x5C0, size 0xC, align 4
    char _pad_05CC[0x4]; // offset 0x5CC
    CUtlVector< CHandle< CBaseEntity > > m_hSnowballedUnits; // offset 0x5D0, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x5E8, size 0x4, align 255
    char _pad_05EC[0x4]; // offset 0x5EC
    CountdownTimer ctSnowball; // offset 0x5F0, size 0x18, align 8
    bool m_bSpeakAlly; // offset 0x608, size 0x1, align 1
    bool m_bIsExpired; // offset 0x609, size 0x1, align 1
    bool m_bInWindup; // offset 0x60A, size 0x1, align 1
    char _pad_060B[0x1]; // offset 0x60B
    CHandle< CBaseEntity > m_hPrimaryTarget; // offset 0x60C, size 0x4, align 4
    int32 m_nContainedValidUnits; // offset 0x610, size 0x4, align 4
    bool m_bEndingSnowball; // offset 0x614, size 0x1, align 1
    char _pad_0615[0xA3]; // offset 0x615
    int32 m_nSnowballProjectileHandle; // offset 0x6B8, size 0x4, align 4
    char _pad_06BC[0x4]; // offset 0x6BC
};
