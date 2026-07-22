#pragma once

class C_DOTA_Unit_Hero_Wisp : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F20, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1F04]; // offset 0x0
    ParticleIndex_t m_nAmbientFXIndex; // offset 0x1F04, size 0x4, align 255
    ParticleIndex_t m_nStunnedFXIndex; // offset 0x1F08, size 0x4, align 255
    ParticleIndex_t m_nTalkFXIndex; // offset 0x1F0C, size 0x4, align 255
    ParticleIndex_t m_nIllusionFXIndex; // offset 0x1F10, size 0x4, align 255
    bool m_bParticleHexed; // offset 0x1F14, size 0x1, align 1
    bool m_bParticleStunned; // offset 0x1F15, size 0x1, align 1
    bool m_bDetermineAmbientEffect; // offset 0x1F16, size 0x1, align 1
    char _pad_1F17[0x1]; // offset 0x1F17
    float32 m_flPrevHealth; // offset 0x1F18, size 0x4, align 4
    char _pad_1F1C[0x4]; // offset 0x1F1C
};
