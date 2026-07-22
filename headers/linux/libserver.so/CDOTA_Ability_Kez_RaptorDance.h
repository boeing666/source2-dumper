#pragma once

class CDOTA_Ability_Kez_RaptorDance : public CDOTA_Ability_Kez_BaseAbility /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 radius; // offset 0x85C, size 0x4, align 4
    int32 invulnerable; // offset 0x860, size 0x4, align 4
    int32 strikes; // offset 0x864, size 0x4, align 4
    float32 strike_interval; // offset 0x868, size 0x4, align 4
    int32 m_nStrikesLeft; // offset 0x86C, size 0x4, align 4
    bool m_bChannelFinished; // offset 0x870, size 0x1, align 1
    bool m_bHitAnyTarget; // offset 0x871, size 0x1, align 1
    char _pad_0872[0x2]; // offset 0x872
    GameTime_t m_NextStrikeTime; // offset 0x874, size 0x4, align 255
    ParticleIndex_t m_nChannelParticle; // offset 0x878, size 0x4, align 255
    char _pad_087C[0x14]; // offset 0x87C
};
