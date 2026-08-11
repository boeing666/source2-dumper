#pragma once

class CDOTA_Modifier_Courier_Passive_Bonus : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecTriggers; // offset 0x1A78, size 0x18, align 8
};
