#pragma once

class CAI_Relationship : public CBaseEntity /*0x0*/  // sizeof 0x4F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CUtlSymbolLarge m_iszSubject; // offset 0x4B0, size 0x8, align 8
    CUtlSymbolLarge m_iszSubjectClass; // offset 0x4B8, size 0x8, align 8
    Class_T m_nSubjectClassifyAs; // offset 0x4C0, size 0x4, align 4
    char _pad_04C4[0x4]; // offset 0x4C4
    CUtlSymbolLarge m_iszTargetClass; // offset 0x4C8, size 0x8, align 8
    Class_T m_nTargetClassifyAs; // offset 0x4D0, size 0x4, align 4
    int32 m_iDisposition; // offset 0x4D4, size 0x4, align 4
    int32 m_iRank; // offset 0x4D8, size 0x4, align 4
    bool m_fStartActive; // offset 0x4DC, size 0x1, align 1
    bool m_bIsActive; // offset 0x4DD, size 0x1, align 1
    char _pad_04DE[0x2]; // offset 0x4DE
    int32 m_iPreviousDisposition; // offset 0x4E0, size 0x4, align 4
    float32 m_flRadius; // offset 0x4E4, size 0x4, align 4
    int32 m_iPreviousRank; // offset 0x4E8, size 0x4, align 4
    bool m_bReciprocal; // offset 0x4EC, size 0x1, align 1
    char _pad_04ED[0x3]; // offset 0x4ED
};
