#pragma once

class CPlayerSprayDecal : public CModelPointEntity /*0x0*/  // sizeof 0xC08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB2C]; // offset 0x0
    int32 m_nUniqueID; // offset 0xB2C, size 0x4, align 4
    uint32 m_unAccountID; // offset 0xB30, size 0x4, align 4
    uint32 m_unTraceID; // offset 0xB34, size 0x4, align 4
    uint32 m_rtGcTime; // offset 0xB38, size 0x4, align 4
    VectorWS m_vecEndPos; // offset 0xB3C, size 0xC, align 4
    VectorWS m_vecStart; // offset 0xB48, size 0xC, align 4
    Vector m_vecLeft; // offset 0xB54, size 0xC, align 4
    Vector m_vecNormal; // offset 0xB60, size 0xC, align 4
    int32 m_nPlayer; // offset 0xB6C, size 0x4, align 4
    int32 m_nEntity; // offset 0xB70, size 0x4, align 4
    int32 m_nHitbox; // offset 0xB74, size 0x4, align 4
    float32 m_flCreationTime; // offset 0xB78, size 0x4, align 4
    int32 m_nTintID; // offset 0xB7C, size 0x4, align 4
    uint8 m_nVersion; // offset 0xB80, size 0x1, align 1
    uint8[128] m_ubSignature; // offset 0xB81, size 0x80, align 1
    char _pad_0C01[0x7]; // offset 0xC01
};
