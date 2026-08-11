#pragma once

class CRagdollManager : public CBaseEntity /*0x0*/  // sizeof 0x4A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    int8 m_iCurrentMaxRagdollCount; // offset 0x498, size 0x1, align 1
    char _pad_0499[0x3]; // offset 0x499
    int32 m_iMaxRagdollCount; // offset 0x49C, size 0x4, align 4
    bool m_bSaveImportant; // offset 0x4A0, size 0x1, align 1
    bool m_bCanTakeDamage; // offset 0x4A1, size 0x1, align 1
    char _pad_04A2[0x6]; // offset 0x4A2
};
