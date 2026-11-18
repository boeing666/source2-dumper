#pragma once

class CFuncBrush : public CBaseModelEntity /*0x0*/  // sizeof 0xBB8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB9C]; // offset 0x0
    BrushSolidities_e m_iSolidity; // offset 0xB9C, size 0x4, align 4
    int32 m_iDisabled; // offset 0xBA0, size 0x4, align 4
    bool m_bSolidBsp; // offset 0xBA4, size 0x1, align 1
    char _pad_0BA5[0x3]; // offset 0xBA5
    CUtlSymbolLarge m_iszExcludedClass; // offset 0xBA8, size 0x8, align 8
    bool m_bInvertExclusion; // offset 0xBB0, size 0x1, align 1
    bool m_bScriptedMovement; // offset 0xBB1, size 0x1, align 1
    char _pad_0BB2[0x6]; // offset 0xBB2
};
