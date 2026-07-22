#pragma once

class CDOTABehaviorAbilityChannel  // sizeof 0x88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x60]; // offset 0x0
    CountdownTimer m_timer; // offset 0x60, size 0x18, align 8
    float32 m_flAbilityChannelDuration; // offset 0x78, size 0x4, align 4
    CHandle< CBaseEntity > m_hAbility; // offset 0x7C, size 0x4, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x80, size 0x4, align 4
    bool m_bCompletedChanneling; // offset 0x84, size 0x1, align 1
    char _pad_0085[0x3]; // offset 0x85
};
