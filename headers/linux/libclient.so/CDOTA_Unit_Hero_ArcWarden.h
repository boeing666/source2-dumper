#pragma once

class CDOTA_Unit_Hero_ArcWarden : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F10, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1F04]; // offset 0x0
    ParticleIndex_t m_nTalkFXIndex; // offset 0x1F04, size 0x4, align 255
    ParticleIndex_t m_nFXDeath; // offset 0x1F08, size 0x4, align 255
    ParticleIndex_t m_nTempestFX; // offset 0x1F0C, size 0x4, align 255
};
