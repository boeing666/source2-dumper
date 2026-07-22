#pragma once

class CDOTA_Modifier_Puck_DreamCoil_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_hLinkedEntities; // offset 0x1A58, size 0x18, align 8
    float32 coil_radius; // offset 0x1A70, size 0x4, align 4
    float32 coil_break_radius; // offset 0x1A74, size 0x4, align 4
    float32 coil_initial_damage; // offset 0x1A78, size 0x4, align 4
    float32 coil_stun_duration; // offset 0x1A7C, size 0x4, align 4
    float32 coil_duration; // offset 0x1A80, size 0x4, align 4
    float32 coil_break_damage; // offset 0x1A84, size 0x4, align 4
    bool pierces_debuff_immunity; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x7]; // offset 0x1A89
    CUtlVector< ParticleIndex_t > m_FXIndex; // offset 0x1A90, size 0x18, align 8
};
