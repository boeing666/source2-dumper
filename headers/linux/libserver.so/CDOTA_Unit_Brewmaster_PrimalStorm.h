#pragma once

class CDOTA_Unit_Brewmaster_PrimalStorm : public CDOTA_BaseNPC_Creep /*0x0*/  // sizeof 0x1D40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1D38]; // offset 0x0
    ParticleIndex_t m_nFXStormAmbient1; // offset 0x1D38, size 0x4, align 255
    ParticleIndex_t m_nFXStormAmbient2; // offset 0x1D3C, size 0x4, align 255
};
