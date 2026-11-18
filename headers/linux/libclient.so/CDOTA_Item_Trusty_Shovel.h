#pragma once

class CDOTA_Item_Trusty_Shovel : public C_DOTA_Item /*0x0*/  // sizeof 0x8F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8DC]; // offset 0x0
    VectorWS m_vChannelPos; // offset 0x8DC, size 0xC, align 4
    bool m_bIsUnderwater; // offset 0x8E8, size 0x1, align 1
    char _pad_08E9[0x3]; // offset 0x8E9
    ParticleIndex_t m_nPhaseStartFXIndex; // offset 0x8EC, size 0x4, align 255
    char _pad_08F0[0x8]; // offset 0x8F0
};
