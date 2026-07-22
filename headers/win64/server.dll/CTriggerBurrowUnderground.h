#pragma once

class CTriggerBurrowUnderground : public CBaseTrigger /*0x0*/  // sizeof 0x8F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_pTouchedEntities; // offset 0x8E0, size 0x18, align 8
};
