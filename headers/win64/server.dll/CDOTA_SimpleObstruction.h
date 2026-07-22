#pragma once

class CDOTA_SimpleObstruction : public CBaseEntity /*0x0*/  // sizeof 0x4C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    bool m_bEnabled; // offset 0x4B0, size 0x1, align 1
    bool m_bBlockFoW; // offset 0x4B1, size 0x1, align 1
    bool m_bBlockNav; // offset 0x4B2, size 0x1, align 1
    char _pad_04B3[0x1]; // offset 0x4B3
    uint32 m_unOccluderID; // offset 0x4B4, size 0x4, align 4
    bool m_bBlockingGridNav; // offset 0x4B8, size 0x1, align 1
    char _pad_04B9[0x7]; // offset 0x4B9
};
