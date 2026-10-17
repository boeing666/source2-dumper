#pragma once

class CDOTA_Unit_Hero_Phoenix : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2028, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2020]; // offset 0x0
    ParticleIndex_t m_nFXAmbientSpirits; // offset 0x2020, size 0x4, align 255
    bool m_bDetermineAmbientEffect; // offset 0x2024, size 0x1, align 1
    char _pad_2025[0x3]; // offset 0x2025
};
