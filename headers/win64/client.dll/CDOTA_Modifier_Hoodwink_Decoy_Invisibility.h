#pragma once

class CDOTA_Modifier_Hoodwink_Decoy_Invisibility : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AB8]; // offset 0x0
    int32 movement_speed; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
    CUtlVector< CHandle< C_BaseEntity > > m_hEntitiesAffected; // offset 0x1AC0, size 0x18, align 8
};
