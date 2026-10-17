#pragma once

class CPulse_TempVarBankDefinition  // sizeof 0x28, align 0x8 (pulse_runtime_lib) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CPulse_TempVarInfo > m_TempVars; // offset 0x0, size 0x18, align 8
    char _pad_0018[0x10]; // offset 0x18
};
