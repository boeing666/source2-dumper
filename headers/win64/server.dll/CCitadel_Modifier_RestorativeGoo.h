#pragma once

class CCitadel_Modifier_RestorativeGoo : public CCitadelModifier /*0x0*/  // sizeof 0xA58, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    GameTime_t m_flEarliestBreakoutTime; // offset 0x140, size 0x4, align 255
    float32 m_flTotalPendingHeal; // offset 0x144, size 0x4, align 4
    char _pad_0148[0x8F0]; // offset 0x148
    CHandle< CCitadel_RestorativeGooCube > m_hGooCube; // offset 0xA38, size 0x4, align 4
    float32 m_flBreakoutPercentage; // offset 0xA3C, size 0x4, align 4
    char _pad_0A40[0x18]; // offset 0xA40
};
