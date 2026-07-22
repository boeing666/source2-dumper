#pragma once

class CDOTA_Modifier_Primalbeast_Trample : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 effect_radius; // offset 0x1A58, size 0x4, align 4
    VectorWS vLastPos; // offset 0x1A5C, size 0xC, align 4
    float32 flCurrentDistance; // offset 0x1A68, size 0x4, align 4
    int32 step_distance; // offset 0x1A6C, size 0x4, align 4
    int32 bonus_magic_resistance; // offset 0x1A70, size 0x4, align 4
    bool m_bIsUnslowable; // offset 0x1A74, size 0x1, align 1
    char _pad_1A75[0x3]; // offset 0x1A75
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A78, size 0x18, align 8
};
