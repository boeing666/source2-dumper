#pragma once

class CDOTA_Item_Trusty_Shovel : public CDOTA_Item /*0x0*/  // sizeof 0x678, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x660]; // offset 0x0
    VectorWS m_vChannelPos; // offset 0x660, size 0xC, align 4
    bool m_bIsUnderwater; // offset 0x66C, size 0x1, align 1
    char _pad_066D[0x3]; // offset 0x66D
    ParticleIndex_t m_nPhaseStartFXIndex; // offset 0x670, size 0x4, align 255
    char _pad_0674[0x4]; // offset 0x674
};
