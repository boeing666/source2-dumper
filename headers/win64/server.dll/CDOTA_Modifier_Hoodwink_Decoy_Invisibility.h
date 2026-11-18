#pragma once

class CDOTA_Modifier_Hoodwink_Decoy_Invisibility : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1B08]; // offset 0x0
    int32 movement_speed; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
    CUtlVector< CHandle< CBaseEntity > > m_hEntitiesAffected; // offset 0x1B10, size 0x18, align 8
};
