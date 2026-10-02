#pragma once

class CPropDoorRotatingBreakable : public CPropDoorRotating /*0x0*/  // sizeof 0x1060, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1040]; // offset 0x0
    bool m_bBreakable; // offset 0x1040, size 0x1, align 1 | MNotSaved
    bool m_isAbleToCloseAreaPortals; // offset 0x1041, size 0x1, align 1 | MNotSaved
    char _pad_1042[0x2]; // offset 0x1042
    int32 m_currentDamageState; // offset 0x1044, size 0x4, align 4 | MNotSaved
    CUtlVector< CUtlSymbolLarge > m_damageStates; // offset 0x1048, size 0x18, align 8 | MNotSaved
};
