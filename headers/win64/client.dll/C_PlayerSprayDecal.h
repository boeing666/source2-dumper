#pragma once

class C_PlayerSprayDecal : public C_ModelPointEntity /*0x0*/  // sizeof 0x10C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xFB0]; // offset 0x0
    int32 m_nUniqueID; // offset 0xFB0, size 0x4, align 4
    uint32 m_unAccountID; // offset 0xFB4, size 0x4, align 4
    uint32 m_unTraceID; // offset 0xFB8, size 0x4, align 4
    uint32 m_rtGcTime; // offset 0xFBC, size 0x4, align 4
    VectorWS m_vecEndPos; // offset 0xFC0, size 0xC, align 4
    VectorWS m_vecStart; // offset 0xFCC, size 0xC, align 4
    Vector m_vecLeft; // offset 0xFD8, size 0xC, align 4
    Vector m_vecNormal; // offset 0xFE4, size 0xC, align 4
    int32 m_nPlayer; // offset 0xFF0, size 0x4, align 4
    int32 m_nEntity; // offset 0xFF4, size 0x4, align 4
    int32 m_nHitbox; // offset 0xFF8, size 0x4, align 4
    float32 m_flCreationTime; // offset 0xFFC, size 0x4, align 4
    int32 m_nTintID; // offset 0x1000, size 0x4, align 4
    uint8 m_nVersion; // offset 0x1004, size 0x1, align 1
    uint8[128] m_ubSignature; // offset 0x1005, size 0x80, align 1
    char _pad_1085[0xB]; // offset 0x1085
    CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // offset 0x1090, size 0x30, align 255
};
