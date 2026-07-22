#pragma once

class CPlayerSprayDecal : public CModelPointEntity /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    int32 m_nUniqueID; // offset 0x770, size 0x4, align 4
    uint32 m_unAccountID; // offset 0x774, size 0x4, align 4
    uint32 m_unTraceID; // offset 0x778, size 0x4, align 4
    uint32 m_rtGcTime; // offset 0x77C, size 0x4, align 4
    VectorWS m_vecEndPos; // offset 0x780, size 0xC, align 4
    VectorWS m_vecStart; // offset 0x78C, size 0xC, align 4
    Vector m_vecLeft; // offset 0x798, size 0xC, align 4
    Vector m_vecNormal; // offset 0x7A4, size 0xC, align 4
    int32 m_nPlayer; // offset 0x7B0, size 0x4, align 4
    int32 m_nEntity; // offset 0x7B4, size 0x4, align 4
    int32 m_nHitbox; // offset 0x7B8, size 0x4, align 4
    float32 m_flCreationTime; // offset 0x7BC, size 0x4, align 4
    int32 m_nTintID; // offset 0x7C0, size 0x4, align 4
    uint8 m_nVersion; // offset 0x7C4, size 0x1, align 1
    uint8[128] m_ubSignature; // offset 0x7C5, size 0x80, align 1
    char _pad_0845[0x3]; // offset 0x845
};
