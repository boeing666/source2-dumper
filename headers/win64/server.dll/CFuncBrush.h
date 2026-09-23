#pragma once

class CFuncBrush : public CBaseModelEntity /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    BrushSolidities_e m_iSolidity; // offset 0x850, size 0x4, align 4
    int32 m_iDisabled; // offset 0x854, size 0x4, align 4
    bool m_bSolidBsp; // offset 0x858, size 0x1, align 1
    char _pad_0859[0x7]; // offset 0x859
    CUtlSymbolLarge m_iszExcludedClass; // offset 0x860, size 0x8, align 8
    bool m_bInvertExclusion; // offset 0x868, size 0x1, align 1
    bool m_bScriptedMovement; // offset 0x869, size 0x1, align 1
    char _pad_086A[0x6]; // offset 0x86A
};
