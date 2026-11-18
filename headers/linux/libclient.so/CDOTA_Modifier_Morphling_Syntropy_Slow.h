#pragma once

class CDOTA_Modifier_Morphling_Syntropy_Slow : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 movement_slow_max; // offset 0x1AF8, size 0x4, align 4
    float32 movement_slow_min; // offset 0x1AFC, size 0x4, align 4
    float32 attack_slow_max; // offset 0x1B00, size 0x4, align 4
    float32 attack_slow_min; // offset 0x1B04, size 0x4, align 4
    float32 m_flMovementSlow; // offset 0x1B08, size 0x4, align 4
    float32 m_flAttackSlow; // offset 0x1B0C, size 0x4, align 4
};
