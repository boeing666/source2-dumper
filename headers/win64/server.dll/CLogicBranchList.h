#pragma once

class CLogicBranchList : public CLogicalEntity /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CUtlSymbolLarge[16] m_nLogicBranchNames; // offset 0x4A8, size 0x80, align 8
    CUtlVector< CHandle< CBaseEntity > > m_LogicBranchList; // offset 0x528, size 0x18, align 8
    CLogicBranchList::LogicBranchListenerLastState_t m_eLastState; // offset 0x540, size 0x4, align 4
    char _pad_0544[0x4]; // offset 0x544
    CEntityIOOutput m_OnAllTrue; // offset 0x548, size 0x18, align 255
    CEntityIOOutput m_OnAllFalse; // offset 0x560, size 0x18, align 255
    CEntityIOOutput m_OnMixed; // offset 0x578, size 0x18, align 255
};
