#pragma once

class C_DOTA_Item_MeteorHammer : public C_DOTA_Item /*0x0*/  // sizeof 0x770, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x758]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x758, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x75C, size 0x4, align 255
    VectorWS m_vecCastPosition; // offset 0x760, size 0xC, align 4
    char _pad_076C[0x4]; // offset 0x76C
};
