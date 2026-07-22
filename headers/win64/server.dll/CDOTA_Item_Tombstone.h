#pragma once

class CDOTA_Item_Tombstone : public CDOTA_Item /*0x0*/  // sizeof 0x678, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x658]; // offset 0x0
    float32 m_flTimer; // offset 0x658, size 0x4, align 4
    CHandle< CDOTA_Item_Tombstone > m_hParent; // offset 0x65C, size 0x4, align 4
    CHandle< CDOTA_Item_Tombstone > m_hNextChild; // offset 0x660, size 0x4, align 4
    VectorWS m_vContainerPosition; // offset 0x664, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x670, size 0x4, align 255
    ParticleIndex_t m_nFXIndex2; // offset 0x674, size 0x4, align 255
};
