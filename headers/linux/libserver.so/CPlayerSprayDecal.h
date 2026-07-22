#pragma once

class CPlayerSprayDecal : public CModelPointEntity /*0x0*/  // sizeof 0xB28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA4C]; // offset 0x0
    int32 m_nUniqueID; // offset 0xA4C, size 0x4, align 4
    uint32 m_unAccountID; // offset 0xA50, size 0x4, align 4
    uint32 m_unTraceID; // offset 0xA54, size 0x4, align 4
    uint32 m_rtGcTime; // offset 0xA58, size 0x4, align 4
    VectorWS m_vecEndPos; // offset 0xA5C, size 0xC, align 4
    VectorWS m_vecStart; // offset 0xA68, size 0xC, align 4
    Vector m_vecLeft; // offset 0xA74, size 0xC, align 4
    Vector m_vecNormal; // offset 0xA80, size 0xC, align 4
    int32 m_nPlayer; // offset 0xA8C, size 0x4, align 4
    int32 m_nEntity; // offset 0xA90, size 0x4, align 4
    int32 m_nHitbox; // offset 0xA94, size 0x4, align 4
    float32 m_flCreationTime; // offset 0xA98, size 0x4, align 4
    int32 m_nTintID; // offset 0xA9C, size 0x4, align 4
    uint8 m_nVersion; // offset 0xAA0, size 0x1, align 1
    uint8[128] m_ubSignature; // offset 0xAA1, size 0x80, align 1
    char _pad_0B21[0x7]; // offset 0xB21
};
