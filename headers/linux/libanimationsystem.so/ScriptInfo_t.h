#pragma once

struct ScriptInfo_t  // sizeof 0x58, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
    CUtlString m_code; // offset 0x0, size 0x8, align 8
    CUtlVector< CAnimParamHandle > m_paramsModified; // offset 0x8, size 0x18, align 8
    CUtlVector< int32 > m_proxyReadParams; // offset 0x20, size 0x18, align 8
    CUtlVector< int32 > m_proxyWriteParams; // offset 0x38, size 0x18, align 8
    AnimScriptType m_eScriptType; // offset 0x50, size 0x2, align 2
    char _pad_0052[0x6]; // offset 0x52
};
