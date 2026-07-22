#pragma once

class C_DOTA_SimpleObstruction : public C_BaseEntity /*0x0*/  // sizeof 0x600, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    bool m_bEnabled; // offset 0x5F0, size 0x1, align 1
    bool m_bBlockFoW; // offset 0x5F1, size 0x1, align 1
    bool m_bBlockNav; // offset 0x5F2, size 0x1, align 1
    char _pad_05F3[0x1]; // offset 0x5F3
    uint32 m_unOccluderID; // offset 0x5F4, size 0x4, align 4
    bool m_bBlockingGridNav; // offset 0x5F8, size 0x1, align 1
    bool m_bPrevEnabled; // offset 0x5F9, size 0x1, align 1
    char _pad_05FA[0x6]; // offset 0x5FA
};
