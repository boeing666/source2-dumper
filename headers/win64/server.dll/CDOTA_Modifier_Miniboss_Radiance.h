#pragma once

class CDOTA_Modifier_Miniboss_Radiance : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 aura_radius; // offset 0x1A78, size 0x4, align 4
    float32 attack_timer_duration; // offset 0x1A7C, size 0x4, align 4
    CountdownTimer m_LastAttackedTimer; // offset 0x1A80, size 0x18, align 8
};
