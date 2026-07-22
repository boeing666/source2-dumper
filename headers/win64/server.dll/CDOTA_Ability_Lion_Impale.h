#pragma once

class CDOTA_Ability_Lion_Impale : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 width; // offset 0x580, size 0x4, align 4
    float32 duration; // offset 0x584, size 0x4, align 4
    int32 speed; // offset 0x588, size 0x4, align 4
    float32 length_buffer; // offset 0x58C, size 0x4, align 4
    float32 range; // offset 0x590, size 0x4, align 4
    int32 pierces_immunity; // offset 0x594, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x598, size 0x18, align 8
};
