#pragma once

class CFuncBrush : public CBaseModelEntity /*0x0*/  // sizeof 0xB48, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB2C]; // offset 0x0
    BrushSolidities_e m_iSolidity; // offset 0xB2C, size 0x4, align 4
    int32 m_iDisabled; // offset 0xB30, size 0x4, align 4
    bool m_bSolidBsp; // offset 0xB34, size 0x1, align 1
    char _pad_0B35[0x3]; // offset 0xB35
    CUtlSymbolLarge m_iszExcludedClass; // offset 0xB38, size 0x8, align 8
    bool m_bInvertExclusion; // offset 0xB40, size 0x1, align 1
    bool m_bScriptedMovement; // offset 0xB41, size 0x1, align 1
    char _pad_0B42[0x6]; // offset 0xB42
};
