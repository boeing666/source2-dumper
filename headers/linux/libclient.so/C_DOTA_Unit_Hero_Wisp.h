#pragma once

class C_DOTA_Unit_Hero_Wisp : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2028, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x200C]; // offset 0x0
    ParticleIndex_t m_nAmbientFXIndex; // offset 0x200C, size 0x4, align 255
    ParticleIndex_t m_nStunnedFXIndex; // offset 0x2010, size 0x4, align 255
    ParticleIndex_t m_nTalkFXIndex; // offset 0x2014, size 0x4, align 255
    ParticleIndex_t m_nIllusionFXIndex; // offset 0x2018, size 0x4, align 255
    bool m_bParticleHexed; // offset 0x201C, size 0x1, align 1
    bool m_bParticleStunned; // offset 0x201D, size 0x1, align 1
    bool m_bDetermineAmbientEffect; // offset 0x201E, size 0x1, align 1
    char _pad_201F[0x1]; // offset 0x201F
    float32 m_flPrevHealth; // offset 0x2020, size 0x4, align 4
    char _pad_2024[0x4]; // offset 0x2024
};
