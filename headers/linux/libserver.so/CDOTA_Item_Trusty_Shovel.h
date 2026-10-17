#pragma once

class CDOTA_Item_Trusty_Shovel : public CDOTA_Item /*0x0*/  // sizeof 0x950, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x934]; // offset 0x0
    VectorWS m_vChannelPos; // offset 0x934, size 0xC, align 4
    bool m_bIsUnderwater; // offset 0x940, size 0x1, align 1
    char _pad_0941[0x3]; // offset 0x941
    ParticleIndex_t m_nPhaseStartFXIndex; // offset 0x944, size 0x4, align 255
    char _pad_0948[0x8]; // offset 0x948
};
