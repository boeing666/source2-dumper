#pragma once

class C_DOTA_Ability_Kez_RaptorDance : public C_DOTA_Ability_Kez_BaseAbility /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    float32 radius; // offset 0x828, size 0x4, align 4
    int32 invulnerable; // offset 0x82C, size 0x4, align 4
    int32 strikes; // offset 0x830, size 0x4, align 4
    float32 strike_interval; // offset 0x834, size 0x4, align 4
    int32 m_nStrikesLeft; // offset 0x838, size 0x4, align 4
    bool m_bChannelFinished; // offset 0x83C, size 0x1, align 1
    bool m_bHitAnyTarget; // offset 0x83D, size 0x1, align 1
    char _pad_083E[0x2]; // offset 0x83E
    GameTime_t m_NextStrikeTime; // offset 0x840, size 0x4, align 255
    ParticleIndex_t m_nChannelParticle; // offset 0x844, size 0x4, align 255
    char _pad_0848[0x18]; // offset 0x848
};
