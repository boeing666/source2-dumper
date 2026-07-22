#pragma once

class C_DOTA_Unit_Hero_Wisp : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1D98, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1D80]; // offset 0x0
    ParticleIndex_t m_nAmbientFXIndex; // offset 0x1D80, size 0x4, align 255
    ParticleIndex_t m_nStunnedFXIndex; // offset 0x1D84, size 0x4, align 255
    ParticleIndex_t m_nTalkFXIndex; // offset 0x1D88, size 0x4, align 255
    ParticleIndex_t m_nIllusionFXIndex; // offset 0x1D8C, size 0x4, align 255
    bool m_bParticleHexed; // offset 0x1D90, size 0x1, align 1
    bool m_bParticleStunned; // offset 0x1D91, size 0x1, align 1
    bool m_bDetermineAmbientEffect; // offset 0x1D92, size 0x1, align 1
    char _pad_1D93[0x1]; // offset 0x1D93
    float32 m_flPrevHealth; // offset 0x1D94, size 0x4, align 4
};
