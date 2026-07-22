#pragma once

class C_DOTA_Ability_Kez_RaptorDance : public C_DOTA_Ability_Kez_BaseAbility /*0x0*/  // sizeof 0x6E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6B0]; // offset 0x0
    float32 radius; // offset 0x6B0, size 0x4, align 4
    int32 invulnerable; // offset 0x6B4, size 0x4, align 4
    int32 strikes; // offset 0x6B8, size 0x4, align 4
    float32 strike_interval; // offset 0x6BC, size 0x4, align 4
    int32 m_nStrikesLeft; // offset 0x6C0, size 0x4, align 4
    bool m_bChannelFinished; // offset 0x6C4, size 0x1, align 1
    bool m_bHitAnyTarget; // offset 0x6C5, size 0x1, align 1
    char _pad_06C6[0x2]; // offset 0x6C6
    GameTime_t m_NextStrikeTime; // offset 0x6C8, size 0x4, align 255
    ParticleIndex_t m_nChannelParticle; // offset 0x6CC, size 0x4, align 255
    char _pad_06D0[0x18]; // offset 0x6D0
};
