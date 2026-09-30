#pragma once

class CTriggerNeutralShield : public CBaseTrigger /*0x0*/  // sizeof 0xA20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9F0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecPlayers; // offset 0x9F0, size 0x18, align 8 | MNotSaved
    CUtlVector< CHandle< CBaseEntity > > m_vecNeutrals; // offset 0xA08, size 0x18, align 8 | MNotSaved
};
