#pragma once

class C_DOTA_BaseNPC_NeutralItemStash : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1BF0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1BB8]; // offset 0x0
    CUtlVector< ParticleIndex_t > m_vecNewItemFX; // offset 0x1BB8, size 0x18, align 8
    bool m_bHasFoundProps; // offset 0x1BD0, size 0x1, align 1
    bool m_bDidHaveNewItems; // offset 0x1BD1, size 0x1, align 1
    char _pad_1BD2[0x6]; // offset 0x1BD2
    CUtlVector< CHandle< C_DynamicPropClientside > > m_vecProps; // offset 0x1BD8, size 0x18, align 8
};
