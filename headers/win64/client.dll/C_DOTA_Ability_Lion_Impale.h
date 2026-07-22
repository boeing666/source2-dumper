#pragma once

class C_DOTA_Ability_Lion_Impale : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 width; // offset 0x6A8, size 0x4, align 4
    float32 duration; // offset 0x6AC, size 0x4, align 4
    int32 speed; // offset 0x6B0, size 0x4, align 4
    float32 length_buffer; // offset 0x6B4, size 0x4, align 4
    float32 range; // offset 0x6B8, size 0x4, align 4
    int32 pierces_immunity; // offset 0x6BC, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_hHitEntities; // offset 0x6C0, size 0x18, align 8
};
