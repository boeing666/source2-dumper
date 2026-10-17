#pragma once

class CDOTA_Item_Trusty_Shovel : public C_DOTA_Item /*0x0*/  // sizeof 0x778, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x760]; // offset 0x0
    VectorWS m_vChannelPos; // offset 0x760, size 0xC, align 4
    bool m_bIsUnderwater; // offset 0x76C, size 0x1, align 1
    char _pad_076D[0x3]; // offset 0x76D
    ParticleIndex_t m_nPhaseStartFXIndex; // offset 0x770, size 0x4, align 255
    char _pad_0774[0x4]; // offset 0x774
};
