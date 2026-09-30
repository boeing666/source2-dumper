#pragma once

class CTriggerBurrowUnderground : public CBaseTrigger /*0x0*/  // sizeof 0xA08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9F0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_pTouchedEntities; // offset 0x9F0, size 0x18, align 8
};
