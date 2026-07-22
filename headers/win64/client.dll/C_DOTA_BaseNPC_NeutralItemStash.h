#pragma once

class C_DOTA_BaseNPC_NeutralItemStash : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1A68, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A30]; // offset 0x0
    CUtlVector< ParticleIndex_t > m_vecNewItemFX; // offset 0x1A30, size 0x18, align 8
    bool m_bHasFoundProps; // offset 0x1A48, size 0x1, align 1
    bool m_bDidHaveNewItems; // offset 0x1A49, size 0x1, align 1
    char _pad_1A4A[0x6]; // offset 0x1A4A
    CUtlVector< CHandle< C_DynamicPropClientside > > m_vecProps; // offset 0x1A50, size 0x18, align 8
};
