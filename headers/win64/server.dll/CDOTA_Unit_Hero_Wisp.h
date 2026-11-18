#pragma once

class CDOTA_Unit_Hero_Wisp : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x20C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x20B0]; // offset 0x0
    ParticleIndex_t m_nAmbientFXIndex; // offset 0x20B0, size 0x4, align 255
    ParticleIndex_t m_nStunnedFXIndex; // offset 0x20B4, size 0x4, align 255
    ParticleIndex_t m_nTalkFXIndex; // offset 0x20B8, size 0x4, align 255
    ParticleIndex_t m_nIllusionFXIndex; // offset 0x20BC, size 0x4, align 255
    bool m_bParticleHexed; // offset 0x20C0, size 0x1, align 1
    bool m_bParticleStunned; // offset 0x20C1, size 0x1, align 1
    bool m_bDetermineAmbientEffect; // offset 0x20C2, size 0x1, align 1
    char _pad_20C3[0x1]; // offset 0x20C3
    float32 m_flPrevHealth; // offset 0x20C4, size 0x4, align 4
};
