#pragma once

class CLogicBranchList : public CLogicalEntity /*0x0*/  // sizeof 0x580, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CUtlSymbolLarge[16] m_nLogicBranchNames; // offset 0x498, size 0x80, align 8
    CUtlVector< CHandle< CBaseEntity > > m_LogicBranchList; // offset 0x518, size 0x18, align 8
    CLogicBranchList::LogicBranchListenerLastState_t m_eLastState; // offset 0x530, size 0x4, align 4
    char _pad_0534[0x4]; // offset 0x534
    CEntityIOOutput m_OnAllTrue; // offset 0x538, size 0x18, align 255
    CEntityIOOutput m_OnAllFalse; // offset 0x550, size 0x18, align 255
    CEntityIOOutput m_OnMixed; // offset 0x568, size 0x18, align 255
};
