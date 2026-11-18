#pragma once

class CDOTA_Unit_Broodmother_Web : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1A38, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1A28]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x1A28, size 0x4, align 255
    VectorWS m_vecOrigin; // offset 0x1A2C, size 0xC, align 4
};
