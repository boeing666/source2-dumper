#pragma once

class CDOTA_Item_Tombstone : public CDOTA_Item /*0x0*/  // sizeof 0x950, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x92C]; // offset 0x0
    float32 m_flTimer; // offset 0x92C, size 0x4, align 4
    CHandle< CDOTA_Item_Tombstone > m_hParent; // offset 0x930, size 0x4, align 4
    CHandle< CDOTA_Item_Tombstone > m_hNextChild; // offset 0x934, size 0x4, align 4
    VectorWS m_vContainerPosition; // offset 0x938, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x944, size 0x4, align 255
    ParticleIndex_t m_nFXIndex2; // offset 0x948, size 0x4, align 255
    char _pad_094C[0x4]; // offset 0x94C
};
