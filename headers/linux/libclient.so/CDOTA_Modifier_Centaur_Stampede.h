#pragma once

class CDOTA_Modifier_Centaur_Stampede : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 radius; // offset 0x1A58, size 0x4, align 4
    int32 damage_reduction; // offset 0x1A5C, size 0x4, align 4
    int32 has_flying_movement; // offset 0x1A60, size 0x4, align 4
    char _pad_1A64[0x4]; // offset 0x1A64
    CUtlVector< CHandle< C_BaseEntity > > m_hEntitiesAffected; // offset 0x1A68, size 0x18, align 8
};
