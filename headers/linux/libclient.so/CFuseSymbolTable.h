#pragma once

class CFuseSymbolTable  // sizeof 0xB0, align 0x8 (mathlib_extended) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< ConstantInfo_t > m_constants; // offset 0x0, size 0x18, align 8
    CUtlVector< VariableInfo_t > m_variables; // offset 0x18, size 0x18, align 8
    CUtlVector< FunctionInfo_t > m_functions; // offset 0x30, size 0x18, align 8
    CUtlHashtable< CUtlStringToken, int32 > m_constantMap; // offset 0x48, size 0x20, align 8
    CUtlHashtable< CUtlStringToken, int32 > m_variableMap; // offset 0x68, size 0x20, align 8
    CUtlHashtable< CUtlStringToken, int32 > m_functionMap; // offset 0x88, size 0x20, align 8
    char _pad_00A8[0x8]; // offset 0xA8
};
