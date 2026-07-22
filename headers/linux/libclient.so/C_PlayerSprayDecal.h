#pragma once

class C_PlayerSprayDecal : public C_ModelPointEntity /*0x0*/  // sizeof 0x1048, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF38]; // offset 0x0
    int32 m_nUniqueID; // offset 0xF38, size 0x4, align 4
    uint32 m_unAccountID; // offset 0xF3C, size 0x4, align 4
    uint32 m_unTraceID; // offset 0xF40, size 0x4, align 4
    uint32 m_rtGcTime; // offset 0xF44, size 0x4, align 4
    VectorWS m_vecEndPos; // offset 0xF48, size 0xC, align 4
    VectorWS m_vecStart; // offset 0xF54, size 0xC, align 4
    Vector m_vecLeft; // offset 0xF60, size 0xC, align 4
    Vector m_vecNormal; // offset 0xF6C, size 0xC, align 4
    int32 m_nPlayer; // offset 0xF78, size 0x4, align 4
    int32 m_nEntity; // offset 0xF7C, size 0x4, align 4
    int32 m_nHitbox; // offset 0xF80, size 0x4, align 4
    float32 m_flCreationTime; // offset 0xF84, size 0x4, align 4
    int32 m_nTintID; // offset 0xF88, size 0x4, align 4
    uint8 m_nVersion; // offset 0xF8C, size 0x1, align 1
    uint8[128] m_ubSignature; // offset 0xF8D, size 0x80, align 1
    char _pad_100D[0xB]; // offset 0x100D
    CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // offset 0x1018, size 0x30, align 255
};
