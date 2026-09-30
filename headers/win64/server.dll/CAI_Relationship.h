#pragma once

class CAI_Relationship : public CBaseEntity /*0x0*/  // sizeof 0x500, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4C0]; // offset 0x0
    CUtlSymbolLarge m_iszSubject; // offset 0x4C0, size 0x8, align 8
    CUtlSymbolLarge m_iszSubjectClass; // offset 0x4C8, size 0x8, align 8
    Class_T m_nSubjectClassifyAs; // offset 0x4D0, size 0x4, align 4
    char _pad_04D4[0x4]; // offset 0x4D4
    CUtlSymbolLarge m_iszTargetClass; // offset 0x4D8, size 0x8, align 8
    Class_T m_nTargetClassifyAs; // offset 0x4E0, size 0x4, align 4
    int32 m_iDisposition; // offset 0x4E4, size 0x4, align 4
    int32 m_iRank; // offset 0x4E8, size 0x4, align 4
    bool m_fStartActive; // offset 0x4EC, size 0x1, align 1
    bool m_bIsActive; // offset 0x4ED, size 0x1, align 1
    char _pad_04EE[0x2]; // offset 0x4EE
    int32 m_iPreviousDisposition; // offset 0x4F0, size 0x4, align 4
    float32 m_flRadius; // offset 0x4F4, size 0x4, align 4
    int32 m_iPreviousRank; // offset 0x4F8, size 0x4, align 4
    bool m_bReciprocal; // offset 0x4FC, size 0x1, align 1
    char _pad_04FD[0x3]; // offset 0x4FD
};
