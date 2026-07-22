#pragma once

class C_DOTA_Item_Tombstone : public C_DOTA_Item /*0x0*/  // sizeof 0x8D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8CC]; // offset 0x0
    float32 m_flTimer; // offset 0x8CC, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x8D0, size 0x4, align 255
    ParticleIndex_t m_nFXIndex2; // offset 0x8D4, size 0x4, align 255
};
