#pragma once

class CDOTA_Unit_Hero_Wisp : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2038, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2020]; // offset 0x0
    ParticleIndex_t m_nAmbientFXIndex; // offset 0x2020, size 0x4, align 255
    ParticleIndex_t m_nStunnedFXIndex; // offset 0x2024, size 0x4, align 255
    ParticleIndex_t m_nTalkFXIndex; // offset 0x2028, size 0x4, align 255
    ParticleIndex_t m_nIllusionFXIndex; // offset 0x202C, size 0x4, align 255
    bool m_bParticleHexed; // offset 0x2030, size 0x1, align 1
    bool m_bParticleStunned; // offset 0x2031, size 0x1, align 1
    bool m_bDetermineAmbientEffect; // offset 0x2032, size 0x1, align 1
    char _pad_2033[0x1]; // offset 0x2033
    float32 m_flPrevHealth; // offset 0x2034, size 0x4, align 4
};
