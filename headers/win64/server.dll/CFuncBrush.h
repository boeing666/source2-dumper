#pragma once

class CFuncBrush : public CBaseModelEntity /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    BrushSolidities_e m_iSolidity; // offset 0x878, size 0x4, align 4
    int32 m_iDisabled; // offset 0x87C, size 0x4, align 4
    bool m_bSolidBsp; // offset 0x880, size 0x1, align 1
    char _pad_0881[0x7]; // offset 0x881
    CUtlSymbolLarge m_iszExcludedClass; // offset 0x888, size 0x8, align 8
    bool m_bInvertExclusion; // offset 0x890, size 0x1, align 1
    bool m_bScriptedMovement; // offset 0x891, size 0x1, align 1
    char _pad_0892[0x6]; // offset 0x892
};
