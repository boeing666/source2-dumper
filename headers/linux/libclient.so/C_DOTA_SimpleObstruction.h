#pragma once

class C_DOTA_SimpleObstruction : public C_BaseEntity /*0x0*/  // sizeof 0x778, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    bool m_bEnabled; // offset 0x76C, size 0x1, align 1
    bool m_bBlockFoW; // offset 0x76D, size 0x1, align 1
    bool m_bBlockNav; // offset 0x76E, size 0x1, align 1
    char _pad_076F[0x1]; // offset 0x76F
    uint32 m_unOccluderID; // offset 0x770, size 0x4, align 4
    bool m_bBlockingGridNav; // offset 0x774, size 0x1, align 1
    bool m_bPrevEnabled; // offset 0x775, size 0x1, align 1
    char _pad_0776[0x2]; // offset 0x776
};
