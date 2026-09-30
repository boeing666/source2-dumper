#pragma once

class CPropDoorRotatingBreakable : public CPropDoorRotating /*0x0*/  // sizeof 0x1010, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xFF0]; // offset 0x0
    bool m_bBreakable; // offset 0xFF0, size 0x1, align 1 | MNotSaved
    bool m_isAbleToCloseAreaPortals; // offset 0xFF1, size 0x1, align 1 | MNotSaved
    char _pad_0FF2[0x2]; // offset 0xFF2
    int32 m_currentDamageState; // offset 0xFF4, size 0x4, align 4 | MNotSaved
    CUtlVector< CUtlSymbolLarge > m_damageStates; // offset 0xFF8, size 0x18, align 8 | MNotSaved
};
