#pragma once

class CDOTA_Item_Tombstone : public CDOTA_Item /*0x0*/  // sizeof 0x958, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x934]; // offset 0x0
    float32 m_flTimer; // offset 0x934, size 0x4, align 4
    CHandle< CDOTA_Item_Tombstone > m_hParent; // offset 0x938, size 0x4, align 4
    CHandle< CDOTA_Item_Tombstone > m_hNextChild; // offset 0x93C, size 0x4, align 4
    VectorWS m_vContainerPosition; // offset 0x940, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x94C, size 0x4, align 255
    ParticleIndex_t m_nFXIndex2; // offset 0x950, size 0x4, align 255
    char _pad_0954[0x4]; // offset 0x954
};
