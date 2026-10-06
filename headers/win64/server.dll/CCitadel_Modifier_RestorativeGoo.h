#pragma once

class CCitadel_Modifier_RestorativeGoo : public CCitadelModifier /*0x0*/  // sizeof 0xA60, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    GameTime_t m_flEarliestBreakoutTime; // offset 0x148, size 0x4, align 255
    float32 m_flTotalPendingHeal; // offset 0x14C, size 0x4, align 4
    char _pad_0150[0x8F0]; // offset 0x150
    CHandle< CCitadel_RestorativeGooCube > m_hGooCube; // offset 0xA40, size 0x4, align 4
    float32 m_flBreakoutPercentage; // offset 0xA44, size 0x4, align 4
    char _pad_0A48[0x18]; // offset 0xA48
};
