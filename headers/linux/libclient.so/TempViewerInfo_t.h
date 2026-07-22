#pragma once

struct TempViewerInfo_t  // sizeof 0x50, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    int32 m_nGridX; // offset 0x30, size 0x4, align 4
    int32 m_nGridY; // offset 0x34, size 0x4, align 4
    int32 m_nRadius; // offset 0x38, size 0x4, align 4
    int8 m_nViewerType; // offset 0x3C, size 0x1, align 1
    bool m_bObstructedVision; // offset 0x3D, size 0x1, align 1
    bool m_bValid; // offset 0x3E, size 0x1, align 1
    bool m_bDirty; // offset 0x3F, size 0x1, align 1
    GameTime_t flEndTime; // offset 0x40, size 0x4, align 255
    int32 nFoWID; // offset 0x44, size 0x4, align 4
    CHandle< C_BaseEntity > hOwner; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x4]; // offset 0x4C
};
