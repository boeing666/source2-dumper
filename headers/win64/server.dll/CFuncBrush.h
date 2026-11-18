#pragma once

class CFuncBrush : public CBaseModelEntity /*0x0*/  // sizeof 0x8D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    BrushSolidities_e m_iSolidity; // offset 0x8B8, size 0x4, align 4
    int32 m_iDisabled; // offset 0x8BC, size 0x4, align 4
    bool m_bSolidBsp; // offset 0x8C0, size 0x1, align 1
    char _pad_08C1[0x7]; // offset 0x8C1
    CUtlSymbolLarge m_iszExcludedClass; // offset 0x8C8, size 0x8, align 8
    bool m_bInvertExclusion; // offset 0x8D0, size 0x1, align 1
    bool m_bScriptedMovement; // offset 0x8D1, size 0x1, align 1
    char _pad_08D2[0x6]; // offset 0x8D2
};
