#pragma once

class CTriggerNeutralShield : public CBaseTrigger /*0x0*/  // sizeof 0x910, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecPlayers; // offset 0x8E0, size 0x18, align 8 | MNotSaved
    CUtlVector< CHandle< CBaseEntity > > m_vecNeutrals; // offset 0x8F8, size 0x18, align 8 | MNotSaved
};
