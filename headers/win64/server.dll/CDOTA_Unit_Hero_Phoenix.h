#pragma once

class CDOTA_Unit_Hero_Phoenix : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1F00]; // offset 0x0
    ParticleIndex_t m_nFXAmbientSpirits; // offset 0x1F00, size 0x4, align 255
    bool m_bDetermineAmbientEffect; // offset 0x1F04, size 0x1, align 1
    char _pad_1F05[0x3]; // offset 0x1F05
};
