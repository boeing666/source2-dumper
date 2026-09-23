#pragma once

class CPropDoorRotatingBreakable : public CPropDoorRotating /*0x0*/  // sizeof 0x1210, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x11E8]; // offset 0x0
    bool m_bBreakable; // offset 0x11E8, size 0x1, align 1 | MNotSaved
    bool m_isAbleToCloseAreaPortals; // offset 0x11E9, size 0x1, align 1 | MNotSaved
    char _pad_11EA[0x2]; // offset 0x11EA
    int32 m_currentDamageState; // offset 0x11EC, size 0x4, align 4 | MNotSaved
    CUtlVector< CUtlSymbolLarge > m_damageStates; // offset 0x11F0, size 0x18, align 8 | MNotSaved
    char _pad_1208[0x8]; // offset 0x1208
};
