#pragma once

class CFuncBrush : public CBaseModelEntity /*0x0*/  // sizeof 0xA70, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA54]; // offset 0x0
    BrushSolidities_e m_iSolidity; // offset 0xA54, size 0x4, align 4
    int32 m_iDisabled; // offset 0xA58, size 0x4, align 4
    bool m_bSolidBsp; // offset 0xA5C, size 0x1, align 1
    char _pad_0A5D[0x3]; // offset 0xA5D
    CUtlSymbolLarge m_iszExcludedClass; // offset 0xA60, size 0x8, align 8
    bool m_bInvertExclusion; // offset 0xA68, size 0x1, align 1
    bool m_bScriptedMovement; // offset 0xA69, size 0x1, align 1
    char _pad_0A6A[0x6]; // offset 0xA6A
};
