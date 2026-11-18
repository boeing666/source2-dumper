#pragma once

class CDOTA_Modifier_Miniboss_Radiance : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 aura_radius; // offset 0x1AF8, size 0x4, align 4
    float32 attack_timer_duration; // offset 0x1AFC, size 0x4, align 4
    CountdownTimer m_LastAttackedTimer; // offset 0x1B00, size 0x18, align 8
};
