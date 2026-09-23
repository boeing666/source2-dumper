#pragma once

class C_PlayerSprayDecal : public C_ModelPointEntity /*0x0*/  // sizeof 0x11A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    int32 m_nUniqueID; // offset 0x1098, size 0x4, align 4
    uint32 m_unAccountID; // offset 0x109C, size 0x4, align 4
    uint32 m_unTraceID; // offset 0x10A0, size 0x4, align 4
    uint32 m_rtGcTime; // offset 0x10A4, size 0x4, align 4
    VectorWS m_vecEndPos; // offset 0x10A8, size 0xC, align 4
    VectorWS m_vecStart; // offset 0x10B4, size 0xC, align 4
    Vector m_vecLeft; // offset 0x10C0, size 0xC, align 4
    Vector m_vecNormal; // offset 0x10CC, size 0xC, align 4
    int32 m_nPlayer; // offset 0x10D8, size 0x4, align 4
    int32 m_nEntity; // offset 0x10DC, size 0x4, align 4
    int32 m_nHitbox; // offset 0x10E0, size 0x4, align 4
    float32 m_flCreationTime; // offset 0x10E4, size 0x4, align 4
    int32 m_nTintID; // offset 0x10E8, size 0x4, align 4
    uint8 m_nVersion; // offset 0x10EC, size 0x1, align 1
    uint8[128] m_ubSignature; // offset 0x10ED, size 0x80, align 1
    char _pad_116D[0xB]; // offset 0x116D
    CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // offset 0x1178, size 0x30, align 255
};
