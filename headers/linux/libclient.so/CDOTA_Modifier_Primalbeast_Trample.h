#pragma once

class CDOTA_Modifier_Primalbeast_Trample : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 effect_radius; // offset 0x1AF8, size 0x4, align 4
    VectorWS vLastPos; // offset 0x1AFC, size 0xC, align 4
    float32 flCurrentDistance; // offset 0x1B08, size 0x4, align 4
    int32 step_distance; // offset 0x1B0C, size 0x4, align 4
    int32 bonus_magic_resistance; // offset 0x1B10, size 0x4, align 4
    bool m_bIsUnslowable; // offset 0x1B14, size 0x1, align 1
    char _pad_1B15[0x3]; // offset 0x1B15
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1B18, size 0x18, align 8
};
