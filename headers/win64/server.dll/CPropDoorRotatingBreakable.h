#pragma once

class CPropDoorRotatingBreakable : public CPropDoorRotating /*0x0*/  // sizeof 0xE60, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xE40]; // offset 0x0
    bool m_bBreakable; // offset 0xE40, size 0x1, align 1 | MNotSaved
    bool m_isAbleToCloseAreaPortals; // offset 0xE41, size 0x1, align 1 | MNotSaved
    char _pad_0E42[0x2]; // offset 0xE42
    int32 m_currentDamageState; // offset 0xE44, size 0x4, align 4 | MNotSaved
    CUtlVector< CUtlSymbolLarge > m_damageStates; // offset 0xE48, size 0x18, align 8 | MNotSaved
};
