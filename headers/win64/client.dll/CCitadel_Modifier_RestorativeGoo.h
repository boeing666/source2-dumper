#pragma once

class CCitadel_Modifier_RestorativeGoo : public CCitadelModifier /*0x0*/  // sizeof 0xA48, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    GameTime_t m_flEarliestBreakoutTime; // offset 0x130, size 0x4, align 255
    float32 m_flTotalPendingHeal; // offset 0x134, size 0x4, align 4
    char _pad_0138[0x8F0]; // offset 0x138
    CHandle< C_Citadel_RestorativeGooCube > m_hGooCube; // offset 0xA28, size 0x4, align 4
    float32 m_flBreakoutPercentage; // offset 0xA2C, size 0x4, align 4
    char _pad_0A30[0x18]; // offset 0xA30
};
