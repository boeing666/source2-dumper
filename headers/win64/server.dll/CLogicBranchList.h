#pragma once

class CLogicBranchList : public CLogicalEntity /*0x0*/  // sizeof 0x588, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CUtlSymbolLarge[16] m_nLogicBranchNames; // offset 0x4A0, size 0x80, align 8
    CUtlVector< CHandle< CBaseEntity > > m_LogicBranchList; // offset 0x520, size 0x18, align 8
    CLogicBranchList::LogicBranchListenerLastState_t m_eLastState; // offset 0x538, size 0x4, align 4
    char _pad_053C[0x4]; // offset 0x53C
    CEntityIOOutput m_OnAllTrue; // offset 0x540, size 0x18, align 255
    CEntityIOOutput m_OnAllFalse; // offset 0x558, size 0x18, align 255
    CEntityIOOutput m_OnMixed; // offset 0x570, size 0x18, align 255
};
