#pragma once

class CCitadel_Modifier_RestorativeGoo : public CCitadelModifier /*0x0*/  // sizeof 0xA50, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    GameTime_t m_flEarliestBreakoutTime; // offset 0x138, size 0x4, align 255
    float32 m_flTotalPendingHeal; // offset 0x13C, size 0x4, align 4
    char _pad_0140[0x8F0]; // offset 0x140
    CHandle< C_Citadel_RestorativeGooCube > m_hGooCube; // offset 0xA30, size 0x4, align 4
    float32 m_flBreakoutPercentage; // offset 0xA34, size 0x4, align 4
    char _pad_0A38[0x18]; // offset 0xA38
};
