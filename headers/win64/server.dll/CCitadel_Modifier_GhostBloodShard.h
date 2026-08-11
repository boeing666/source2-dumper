#pragma once

class CCitadel_Modifier_GhostBloodShard : public CCitadelModifier /*0x0*/  // sizeof 0x2E8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x250]; // offset 0x0
    float32 m_flMinSlowAmount; // offset 0x250, size 0x4, align 4
    float32 m_flMoveSpeedPenaltyPerStack; // offset 0x254, size 0x4, align 4
    float32 m_flSlowDuration; // offset 0x258, size 0x4, align 4
    char _pad_025C[0x8C]; // offset 0x25C
};
