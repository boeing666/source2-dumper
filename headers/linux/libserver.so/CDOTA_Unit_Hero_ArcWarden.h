#pragma once

class CDOTA_Unit_Hero_ArcWarden : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x21F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x21E0]; // offset 0x0
    ParticleIndex_t m_nTalkFXIndex; // offset 0x21E0, size 0x4, align 255
    ParticleIndex_t m_nFXDeath; // offset 0x21E4, size 0x4, align 255
    ParticleIndex_t m_nTempestFX; // offset 0x21E8, size 0x4, align 255
    char _pad_21EC[0x4]; // offset 0x21EC
};
