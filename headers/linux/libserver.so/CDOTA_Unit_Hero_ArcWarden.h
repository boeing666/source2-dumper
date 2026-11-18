#pragma once

class CDOTA_Unit_Hero_ArcWarden : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x23A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2390]; // offset 0x0
    ParticleIndex_t m_nTalkFXIndex; // offset 0x2390, size 0x4, align 255
    ParticleIndex_t m_nFXDeath; // offset 0x2394, size 0x4, align 255
    ParticleIndex_t m_nTempestFX; // offset 0x2398, size 0x4, align 255
    char _pad_239C[0x4]; // offset 0x239C
};
