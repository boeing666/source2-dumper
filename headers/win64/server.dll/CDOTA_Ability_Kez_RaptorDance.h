#pragma once

class CDOTA_Ability_Kez_RaptorDance : public CDOTA_Ability_Kez_BaseAbility /*0x0*/  // sizeof 0x5C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x588]; // offset 0x0
    float32 radius; // offset 0x588, size 0x4, align 4
    int32 invulnerable; // offset 0x58C, size 0x4, align 4
    int32 strikes; // offset 0x590, size 0x4, align 4
    float32 strike_interval; // offset 0x594, size 0x4, align 4
    int32 m_nStrikesLeft; // offset 0x598, size 0x4, align 4
    bool m_bChannelFinished; // offset 0x59C, size 0x1, align 1
    bool m_bHitAnyTarget; // offset 0x59D, size 0x1, align 1
    char _pad_059E[0x2]; // offset 0x59E
    GameTime_t m_NextStrikeTime; // offset 0x5A0, size 0x4, align 255
    ParticleIndex_t m_nChannelParticle; // offset 0x5A4, size 0x4, align 255
    char _pad_05A8[0x18]; // offset 0x5A8
};
