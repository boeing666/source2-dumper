#pragma once

class CCitadel_Modifier_RestorativeGoo : public CCitadelModifier /*0x0*/  // sizeof 0x778, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    GameTime_t m_flEarliestBreakoutTime; // offset 0xD0, size 0x4, align 255
    float32 m_flTotalPendingHeal; // offset 0xD4, size 0x4, align 4
    char _pad_00D8[0x680]; // offset 0xD8
    CHandle< CCitadel_RestorativeGooCube > m_hGooCube; // offset 0x758, size 0x4, align 4
    float32 m_flBreakoutPercentage; // offset 0x75C, size 0x4, align 4
    char _pad_0760[0x18]; // offset 0x760
};
