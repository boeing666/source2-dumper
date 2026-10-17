#pragma once

class CDOTA_Modifier_Primalbeast_Trample : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 effect_radius; // offset 0x1AA8, size 0x4, align 4
    VectorWS vLastPos; // offset 0x1AAC, size 0xC, align 4
    float32 flCurrentDistance; // offset 0x1AB8, size 0x4, align 4
    int32 step_distance; // offset 0x1ABC, size 0x4, align 4
    int32 bonus_magic_resistance; // offset 0x1AC0, size 0x4, align 4
    bool m_bIsUnslowable; // offset 0x1AC4, size 0x1, align 1
    char _pad_1AC5[0x3]; // offset 0x1AC5
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1AC8, size 0x18, align 8
};
