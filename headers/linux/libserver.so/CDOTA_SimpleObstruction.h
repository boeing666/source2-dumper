#pragma once

class CDOTA_SimpleObstruction : public CBaseEntity /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x78C]; // offset 0x0
    bool m_bEnabled; // offset 0x78C, size 0x1, align 1
    bool m_bBlockFoW; // offset 0x78D, size 0x1, align 1
    bool m_bBlockNav; // offset 0x78E, size 0x1, align 1
    char _pad_078F[0x1]; // offset 0x78F
    uint32 m_unOccluderID; // offset 0x790, size 0x4, align 4
    bool m_bBlockingGridNav; // offset 0x794, size 0x1, align 1
    char _pad_0795[0x3]; // offset 0x795
};
