#pragma once

class CDOTA_Item_Trusty_Shovel : public CDOTA_Item /*0x0*/  // sizeof 0x948, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x92C]; // offset 0x0
    VectorWS m_vChannelPos; // offset 0x92C, size 0xC, align 4
    bool m_bIsUnderwater; // offset 0x938, size 0x1, align 1
    char _pad_0939[0x3]; // offset 0x939
    ParticleIndex_t m_nPhaseStartFXIndex; // offset 0x93C, size 0x4, align 255
    char _pad_0940[0x8]; // offset 0x940
};
