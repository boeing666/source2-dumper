#pragma once

class CDOTA_Ability_Lion_Impale : public CDOTABaseAbility /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 width; // offset 0x85C, size 0x4, align 4
    float32 duration; // offset 0x860, size 0x4, align 4
    int32 speed; // offset 0x864, size 0x4, align 4
    float32 length_buffer; // offset 0x868, size 0x4, align 4
    float32 range; // offset 0x86C, size 0x4, align 4
    int32 pierces_immunity; // offset 0x870, size 0x4, align 4
    char _pad_0874[0x4]; // offset 0x874
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x878, size 0x18, align 8
};
