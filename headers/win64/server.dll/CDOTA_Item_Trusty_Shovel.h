#pragma once

class CDOTA_Item_Trusty_Shovel : public CDOTA_Item /*0x0*/  // sizeof 0x670, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x658]; // offset 0x0
    VectorWS m_vChannelPos; // offset 0x658, size 0xC, align 4
    bool m_bIsUnderwater; // offset 0x664, size 0x1, align 1
    char _pad_0665[0x3]; // offset 0x665
    ParticleIndex_t m_nPhaseStartFXIndex; // offset 0x668, size 0x4, align 255
    char _pad_066C[0x4]; // offset 0x66C
};
