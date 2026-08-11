#pragma once

class CRagdollManager : public CBaseEntity /*0x0*/  // sizeof 0x4B0, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    int8 m_iCurrentMaxRagdollCount; // offset 0x4A0, size 0x1, align 1 | MNetworkEnable
    char _pad_04A1[0x3]; // offset 0x4A1
    int32 m_iMaxRagdollCount; // offset 0x4A4, size 0x4, align 4
    bool m_bSaveImportant; // offset 0x4A8, size 0x1, align 1
    bool m_bCanTakeDamage; // offset 0x4A9, size 0x1, align 1
    char _pad_04AA[0x6]; // offset 0x4AA
};
