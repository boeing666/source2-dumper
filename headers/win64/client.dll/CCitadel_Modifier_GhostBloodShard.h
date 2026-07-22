#pragma once

class CCitadel_Modifier_GhostBloodShard : public CCitadelModifier /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    float32 m_flMinSlowAmount; // offset 0xC0, size 0x4, align 4
    float32 m_flMoveSpeedPenaltyPerStack; // offset 0xC4, size 0x4, align 4
    float32 m_flSlowDuration; // offset 0xC8, size 0x4, align 4
    char _pad_00CC[0x8C]; // offset 0xCC
};
