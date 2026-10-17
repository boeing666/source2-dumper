#pragma once

class CDOTA_Modifier_Puck_DreamCoil_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_hLinkedEntities; // offset 0x1AA8, size 0x18, align 8
    float32 coil_radius; // offset 0x1AC0, size 0x4, align 4
    float32 coil_break_radius; // offset 0x1AC4, size 0x4, align 4
    float32 coil_initial_damage; // offset 0x1AC8, size 0x4, align 4
    float32 coil_stun_duration; // offset 0x1ACC, size 0x4, align 4
    float32 coil_duration; // offset 0x1AD0, size 0x4, align 4
    float32 coil_break_damage; // offset 0x1AD4, size 0x4, align 4
    bool pierces_debuff_immunity; // offset 0x1AD8, size 0x1, align 1
    char _pad_1AD9[0x7]; // offset 0x1AD9
    CUtlVector< ParticleIndex_t > m_FXIndex; // offset 0x1AE0, size 0x18, align 8
};
