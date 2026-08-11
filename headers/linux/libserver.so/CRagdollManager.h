#pragma once

class CRagdollManager : public CBaseEntity /*0x0*/  // sizeof 0x788, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    int8 m_iCurrentMaxRagdollCount; // offset 0x778, size 0x1, align 1
    char _pad_0779[0x3]; // offset 0x779
    int32 m_iMaxRagdollCount; // offset 0x77C, size 0x4, align 4
    bool m_bSaveImportant; // offset 0x780, size 0x1, align 1
    bool m_bCanTakeDamage; // offset 0x781, size 0x1, align 1
    char _pad_0782[0x6]; // offset 0x782
};
