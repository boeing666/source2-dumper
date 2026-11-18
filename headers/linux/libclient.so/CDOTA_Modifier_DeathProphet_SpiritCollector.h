#pragma once

class CDOTA_Modifier_DeathProphet_SpiritCollector : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecDeadHeroes; // offset 0x1AF8, size 0x18, align 8
};
