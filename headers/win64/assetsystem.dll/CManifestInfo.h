#pragma once

class CManifestInfo  // sizeof 0x40, align 0x8 (toolutils2) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_Name; // offset 0x0, size 0x8, align 8
    CUtlString m_Group; // offset 0x8, size 0x8, align 8
    CUtlString m_Mod; // offset 0x10, size 0x8, align 8
    CUtlString m_SourceFile; // offset 0x18, size 0x8, align 8
    int32 m_nSourceLine; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
    CUtlVector< CUtlString > m_Resources; // offset 0x28, size 0x18, align 8
};
