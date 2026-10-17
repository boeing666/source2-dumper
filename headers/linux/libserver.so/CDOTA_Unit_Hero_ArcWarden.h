#pragma once

class CDOTA_Unit_Hero_ArcWarden : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2308, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x22F8]; // offset 0x0
    ParticleIndex_t m_nTalkFXIndex; // offset 0x22F8, size 0x4, align 255
    ParticleIndex_t m_nFXDeath; // offset 0x22FC, size 0x4, align 255
    ParticleIndex_t m_nTempestFX; // offset 0x2300, size 0x4, align 255
    char _pad_2304[0x4]; // offset 0x2304
};
