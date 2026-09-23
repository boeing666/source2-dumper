#pragma once

class CPlayerSprayDecal : public CModelPointEntity /*0x0*/  // sizeof 0x928, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    int32 m_nUniqueID; // offset 0x850, size 0x4, align 4
    uint32 m_unAccountID; // offset 0x854, size 0x4, align 4
    uint32 m_unTraceID; // offset 0x858, size 0x4, align 4
    uint32 m_rtGcTime; // offset 0x85C, size 0x4, align 4
    VectorWS m_vecEndPos; // offset 0x860, size 0xC, align 4
    VectorWS m_vecStart; // offset 0x86C, size 0xC, align 4
    Vector m_vecLeft; // offset 0x878, size 0xC, align 4
    Vector m_vecNormal; // offset 0x884, size 0xC, align 4
    int32 m_nPlayer; // offset 0x890, size 0x4, align 4
    int32 m_nEntity; // offset 0x894, size 0x4, align 4
    int32 m_nHitbox; // offset 0x898, size 0x4, align 4
    float32 m_flCreationTime; // offset 0x89C, size 0x4, align 4
    int32 m_nTintID; // offset 0x8A0, size 0x4, align 4
    uint8 m_nVersion; // offset 0x8A4, size 0x1, align 1
    uint8[128] m_ubSignature; // offset 0x8A5, size 0x80, align 1
    char _pad_0925[0x3]; // offset 0x925
};
