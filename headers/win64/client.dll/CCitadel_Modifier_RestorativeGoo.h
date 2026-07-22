#pragma once

class CCitadel_Modifier_RestorativeGoo : public CCitadelModifier /*0x0*/  // sizeof 0x768, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    GameTime_t m_flEarliestBreakoutTime; // offset 0xC0, size 0x4, align 255
    float32 m_flTotalPendingHeal; // offset 0xC4, size 0x4, align 4
    char _pad_00C8[0x680]; // offset 0xC8
    CHandle< C_Citadel_RestorativeGooCube > m_hGooCube; // offset 0x748, size 0x4, align 4
    float32 m_flBreakoutPercentage; // offset 0x74C, size 0x4, align 4
    char _pad_0750[0x18]; // offset 0x750
};
