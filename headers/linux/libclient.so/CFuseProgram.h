#pragma once

class CFuseProgram  // sizeof 0x50, align 0x8 (mathlib_extended) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< uint8 > m_programBuffer; // offset 0x0, size 0x18, align 8
    CUtlVector< FuseVariableIndex_t > m_variablesRead; // offset 0x18, size 0x18, align 8
    CUtlVector< FuseVariableIndex_t > m_variablesWritten; // offset 0x30, size 0x18, align 8
    int32 m_nMaxTempVarsUsed; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x4]; // offset 0x4C
};
