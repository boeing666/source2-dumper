#pragma once

class C_DOTA_Item_MeteorHammer : public C_DOTA_Item /*0x0*/  // sizeof 0x778, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x760]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x760, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x764, size 0x4, align 255
    VectorWS m_vecCastPosition; // offset 0x768, size 0xC, align 4
    char _pad_0774[0x4]; // offset 0x774
};
