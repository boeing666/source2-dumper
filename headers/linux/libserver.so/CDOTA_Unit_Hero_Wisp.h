#pragma once

class CDOTA_Unit_Hero_Wisp : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x21F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x21D8]; // offset 0x0
    ParticleIndex_t m_nAmbientFXIndex; // offset 0x21D8, size 0x4, align 255
    ParticleIndex_t m_nStunnedFXIndex; // offset 0x21DC, size 0x4, align 255
    ParticleIndex_t m_nTalkFXIndex; // offset 0x21E0, size 0x4, align 255
    ParticleIndex_t m_nIllusionFXIndex; // offset 0x21E4, size 0x4, align 255
    bool m_bParticleHexed; // offset 0x21E8, size 0x1, align 1
    bool m_bParticleStunned; // offset 0x21E9, size 0x1, align 1
    bool m_bDetermineAmbientEffect; // offset 0x21EA, size 0x1, align 1
    char _pad_21EB[0x1]; // offset 0x21EB
    float32 m_flPrevHealth; // offset 0x21EC, size 0x4, align 4
};
