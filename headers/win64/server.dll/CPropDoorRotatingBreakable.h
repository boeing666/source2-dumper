#pragma once

class CPropDoorRotatingBreakable : public CPropDoorRotating /*0x0*/  // sizeof 0xF50, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xF30]; // offset 0x0
    bool m_bBreakable; // offset 0xF30, size 0x1, align 1 | MNotSaved
    bool m_isAbleToCloseAreaPortals; // offset 0xF31, size 0x1, align 1 | MNotSaved
    char _pad_0F32[0x2]; // offset 0xF32
    int32 m_currentDamageState; // offset 0xF34, size 0x4, align 4 | MNotSaved
    CUtlVector< CUtlSymbolLarge > m_damageStates; // offset 0xF38, size 0x18, align 8 | MNotSaved
};
