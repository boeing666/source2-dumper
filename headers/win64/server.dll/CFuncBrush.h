#pragma once

class CFuncBrush : public CBaseModelEntity /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    BrushSolidities_e m_iSolidity; // offset 0x778, size 0x4, align 4
    int32 m_iDisabled; // offset 0x77C, size 0x4, align 4
    bool m_bSolidBsp; // offset 0x780, size 0x1, align 1
    char _pad_0781[0x7]; // offset 0x781
    CUtlSymbolLarge m_iszExcludedClass; // offset 0x788, size 0x8, align 8
    bool m_bInvertExclusion; // offset 0x790, size 0x1, align 1
    bool m_bScriptedMovement; // offset 0x791, size 0x1, align 1
    char _pad_0792[0x6]; // offset 0x792
};
