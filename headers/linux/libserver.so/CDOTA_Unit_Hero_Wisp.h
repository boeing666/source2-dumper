#pragma once

class CDOTA_Unit_Hero_Wisp : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2310, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x22F8]; // offset 0x0
    ParticleIndex_t m_nAmbientFXIndex; // offset 0x22F8, size 0x4, align 255
    ParticleIndex_t m_nStunnedFXIndex; // offset 0x22FC, size 0x4, align 255
    ParticleIndex_t m_nTalkFXIndex; // offset 0x2300, size 0x4, align 255
    ParticleIndex_t m_nIllusionFXIndex; // offset 0x2304, size 0x4, align 255
    bool m_bParticleHexed; // offset 0x2308, size 0x1, align 1
    bool m_bParticleStunned; // offset 0x2309, size 0x1, align 1
    bool m_bDetermineAmbientEffect; // offset 0x230A, size 0x1, align 1
    char _pad_230B[0x1]; // offset 0x230B
    float32 m_flPrevHealth; // offset 0x230C, size 0x4, align 4
};
