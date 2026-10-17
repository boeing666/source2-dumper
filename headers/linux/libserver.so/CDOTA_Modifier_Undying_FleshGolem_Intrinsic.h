#pragma once

class CDOTA_Modifier_Undying_FleshGolem_Intrinsic : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vZombies; // offset 0x1AA8, size 0x18, align 8
};
