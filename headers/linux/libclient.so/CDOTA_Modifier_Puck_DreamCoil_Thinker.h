#pragma once

class CDOTA_Modifier_Puck_DreamCoil_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_hLinkedEntities; // offset 0x1A78, size 0x18, align 8
    float32 coil_radius; // offset 0x1A90, size 0x4, align 4
    float32 coil_break_radius; // offset 0x1A94, size 0x4, align 4
    float32 coil_initial_damage; // offset 0x1A98, size 0x4, align 4
    float32 coil_stun_duration; // offset 0x1A9C, size 0x4, align 4
    float32 coil_duration; // offset 0x1AA0, size 0x4, align 4
    float32 coil_break_damage; // offset 0x1AA4, size 0x4, align 4
    bool pierces_debuff_immunity; // offset 0x1AA8, size 0x1, align 1
    char _pad_1AA9[0x7]; // offset 0x1AA9
    CUtlVector< ParticleIndex_t > m_FXIndex; // offset 0x1AB0, size 0x18, align 8
};
