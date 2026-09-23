#pragma once

class C_PlayerSprayDecal : public C_ModelPointEntity /*0x0*/  // sizeof 0x1130, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1020]; // offset 0x0
    int32 m_nUniqueID; // offset 0x1020, size 0x4, align 4
    uint32 m_unAccountID; // offset 0x1024, size 0x4, align 4
    uint32 m_unTraceID; // offset 0x1028, size 0x4, align 4
    uint32 m_rtGcTime; // offset 0x102C, size 0x4, align 4
    VectorWS m_vecEndPos; // offset 0x1030, size 0xC, align 4
    VectorWS m_vecStart; // offset 0x103C, size 0xC, align 4
    Vector m_vecLeft; // offset 0x1048, size 0xC, align 4
    Vector m_vecNormal; // offset 0x1054, size 0xC, align 4
    int32 m_nPlayer; // offset 0x1060, size 0x4, align 4
    int32 m_nEntity; // offset 0x1064, size 0x4, align 4
    int32 m_nHitbox; // offset 0x1068, size 0x4, align 4
    float32 m_flCreationTime; // offset 0x106C, size 0x4, align 4
    int32 m_nTintID; // offset 0x1070, size 0x4, align 4
    uint8 m_nVersion; // offset 0x1074, size 0x1, align 1
    uint8[128] m_ubSignature; // offset 0x1075, size 0x80, align 1
    char _pad_10F5[0xB]; // offset 0x10F5
    CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // offset 0x1100, size 0x30, align 255
};
