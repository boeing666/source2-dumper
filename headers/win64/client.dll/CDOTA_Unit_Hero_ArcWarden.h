#pragma once

class CDOTA_Unit_Hero_ArcWarden : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1D98, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1D88]; // offset 0x0
    ParticleIndex_t m_nTalkFXIndex; // offset 0x1D88, size 0x4, align 255
    ParticleIndex_t m_nFXDeath; // offset 0x1D8C, size 0x4, align 255
    ParticleIndex_t m_nTempestFX; // offset 0x1D90, size 0x4, align 255
    char _pad_1D94[0x4]; // offset 0x1D94
};
