#pragma once

class CDOTA_Modifier_DeathProphet_SpiritCollector : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecDeadHeroes; // offset 0x1A78, size 0x18, align 8
};
