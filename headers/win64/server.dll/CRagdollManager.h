#pragma once

class CRagdollManager : public CBaseEntity /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    int8 m_iCurrentMaxRagdollCount; // offset 0x4A8, size 0x1, align 1
    char _pad_04A9[0x3]; // offset 0x4A9
    int32 m_iMaxRagdollCount; // offset 0x4AC, size 0x4, align 4
    bool m_bSaveImportant; // offset 0x4B0, size 0x1, align 1
    bool m_bCanTakeDamage; // offset 0x4B1, size 0x1, align 1
    char _pad_04B2[0x6]; // offset 0x4B2
};
