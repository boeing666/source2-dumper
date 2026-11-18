#pragma once

class CDOTA_Unit_Hero_Wisp : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x23A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2390]; // offset 0x0
    ParticleIndex_t m_nAmbientFXIndex; // offset 0x2390, size 0x4, align 255
    ParticleIndex_t m_nStunnedFXIndex; // offset 0x2394, size 0x4, align 255
    ParticleIndex_t m_nTalkFXIndex; // offset 0x2398, size 0x4, align 255
    ParticleIndex_t m_nIllusionFXIndex; // offset 0x239C, size 0x4, align 255
    bool m_bParticleHexed; // offset 0x23A0, size 0x1, align 1
    bool m_bParticleStunned; // offset 0x23A1, size 0x1, align 1
    bool m_bDetermineAmbientEffect; // offset 0x23A2, size 0x1, align 1
    char _pad_23A3[0x1]; // offset 0x23A3
    float32 m_flPrevHealth; // offset 0x23A4, size 0x4, align 4
};
