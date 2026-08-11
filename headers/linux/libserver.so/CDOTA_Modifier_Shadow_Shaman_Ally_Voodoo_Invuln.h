#pragma once

class CDOTA_Modifier_Shadow_Shaman_Ally_Voodoo_Invuln : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecIllusions; // offset 0x1A78, size 0x18, align 8
    float32 hex_duration; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
};
