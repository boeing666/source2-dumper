#pragma once

class CDOTA_Modifier_Hoodwink_Decoy_Invisibility : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A64]; // offset 0x0
    int32 movement_speed; // offset 0x1A64, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_hEntitiesAffected; // offset 0x1A68, size 0x18, align 8
};
