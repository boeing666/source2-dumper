#pragma once

class CPropDoorRotatingBreakable : public CPropDoorRotating /*0x0*/  // sizeof 0x1130, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1108]; // offset 0x0
    bool m_bBreakable; // offset 0x1108, size 0x1, align 1 | MNotSaved
    bool m_isAbleToCloseAreaPortals; // offset 0x1109, size 0x1, align 1 | MNotSaved
    char _pad_110A[0x2]; // offset 0x110A
    int32 m_currentDamageState; // offset 0x110C, size 0x4, align 4 | MNotSaved
    CUtlVector< CUtlSymbolLarge > m_damageStates; // offset 0x1110, size 0x18, align 8 | MNotSaved
    char _pad_1128[0x8]; // offset 0x1128
};
