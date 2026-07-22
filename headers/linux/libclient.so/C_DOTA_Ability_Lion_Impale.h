#pragma once

class C_DOTA_Ability_Lion_Impale : public C_DOTABaseAbility /*0x0*/  // sizeof 0x858, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 width; // offset 0x824, size 0x4, align 4
    float32 duration; // offset 0x828, size 0x4, align 4
    int32 speed; // offset 0x82C, size 0x4, align 4
    float32 length_buffer; // offset 0x830, size 0x4, align 4
    float32 range; // offset 0x834, size 0x4, align 4
    int32 pierces_immunity; // offset 0x838, size 0x4, align 4
    char _pad_083C[0x4]; // offset 0x83C
    CUtlVector< CHandle< C_BaseEntity > > m_hHitEntities; // offset 0x840, size 0x18, align 8
};
