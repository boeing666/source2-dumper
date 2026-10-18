#pragma once

class CExternalToolInfo : public CBaseToolInfo /*0x0*/  // sizeof 0x80, align 0x8 (toolutils2) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CUtlString m_Executable; // offset 0x20, size 0x8, align 8
    CUtlString m_Args; // offset 0x28, size 0x8, align 8
    CUtlString m_ArgsWithLineColumn; // offset 0x30, size 0x8, align 8
    CUtlString m_WorkingDir; // offset 0x38, size 0x8, align 8
    CUtlString m_MatchSystemExecutable; // offset 0x40, size 0x8, align 8
    CUtlVector< CUtlString > m_SupportedExts; // offset 0x48, size 0x18, align 8
    CUtlVector< CUtlString > m_PriorityExts; // offset 0x60, size 0x18, align 8
    bool m_bDebugCommandline; // offset 0x78, size 0x1, align 1
    char _pad_0079[0x7]; // offset 0x79
};
