#pragma once

class CDOTA_Item_Trusty_Shovel : public C_DOTA_Item /*0x0*/  // sizeof 0x770, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x758]; // offset 0x0
    VectorWS m_vChannelPos; // offset 0x758, size 0xC, align 4
    bool m_bIsUnderwater; // offset 0x764, size 0x1, align 1
    char _pad_0765[0x3]; // offset 0x765
    ParticleIndex_t m_nPhaseStartFXIndex; // offset 0x768, size 0x4, align 255
    char _pad_076C[0x4]; // offset 0x76C
};
