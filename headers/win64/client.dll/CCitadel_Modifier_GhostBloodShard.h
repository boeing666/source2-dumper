#pragma once

class CCitadel_Modifier_GhostBloodShard : public CCitadelModifier /*0x0*/  // sizeof 0x1F8, align 0xFF [vtable] (client) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x130]; // offset 0x0
    float32 m_flMinSlowAmount; // offset 0x130, size 0x4, align 4
    float32 m_flMoveSpeedPenaltyPerStack; // offset 0x134, size 0x4, align 4
    float32 m_flSlowDuration; // offset 0x138, size 0x4, align 4
    char _pad_013C[0xBC]; // offset 0x13C
};
