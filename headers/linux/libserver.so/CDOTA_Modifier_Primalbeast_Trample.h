#pragma once

class CDOTA_Modifier_Primalbeast_Trample : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 effect_radius; // offset 0x1A78, size 0x4, align 4
    VectorWS vLastPos; // offset 0x1A7C, size 0xC, align 4
    float32 flCurrentDistance; // offset 0x1A88, size 0x4, align 4
    int32 step_distance; // offset 0x1A8C, size 0x4, align 4
    int32 bonus_magic_resistance; // offset 0x1A90, size 0x4, align 4
    bool m_bIsUnslowable; // offset 0x1A94, size 0x1, align 1
    char _pad_1A95[0x3]; // offset 0x1A95
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A98, size 0x18, align 8
};
