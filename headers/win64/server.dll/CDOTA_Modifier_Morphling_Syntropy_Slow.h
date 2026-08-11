#pragma once

class CDOTA_Modifier_Morphling_Syntropy_Slow : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 movement_slow_max; // offset 0x1A78, size 0x4, align 4
    float32 movement_slow_min; // offset 0x1A7C, size 0x4, align 4
    float32 attack_slow_max; // offset 0x1A80, size 0x4, align 4
    float32 attack_slow_min; // offset 0x1A84, size 0x4, align 4
    float32 m_flMovementSlow; // offset 0x1A88, size 0x4, align 4
    float32 m_flAttackSlow; // offset 0x1A8C, size 0x4, align 4
};
