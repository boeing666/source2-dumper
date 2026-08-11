#pragma once

class CRagdollManager : public CBaseEntity /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    int8 m_iCurrentMaxRagdollCount; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x3]; // offset 0x789
    int32 m_iMaxRagdollCount; // offset 0x78C, size 0x4, align 4
    bool m_bSaveImportant; // offset 0x790, size 0x1, align 1
    bool m_bCanTakeDamage; // offset 0x791, size 0x1, align 1
    char _pad_0792[0x6]; // offset 0x792
};
