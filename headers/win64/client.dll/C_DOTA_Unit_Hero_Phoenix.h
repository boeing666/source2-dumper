#pragma once

class C_DOTA_Unit_Hero_Phoenix : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1D88, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1D80]; // offset 0x0
    ParticleIndex_t m_nFXAmbientSpirits; // offset 0x1D80, size 0x4, align 255
    bool m_bDetermineAmbientEffect; // offset 0x1D84, size 0x1, align 1
    char _pad_1D85[0x3]; // offset 0x1D85
};
