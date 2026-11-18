#pragma once

class CDOTA_Modifier_Puck_DreamCoil_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B48, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hLinkedEntities; // offset 0x1AF8, size 0x18, align 8
    float32 coil_radius; // offset 0x1B10, size 0x4, align 4
    float32 coil_break_radius; // offset 0x1B14, size 0x4, align 4
    float32 coil_initial_damage; // offset 0x1B18, size 0x4, align 4
    float32 coil_stun_duration; // offset 0x1B1C, size 0x4, align 4
    float32 coil_duration; // offset 0x1B20, size 0x4, align 4
    float32 coil_break_damage; // offset 0x1B24, size 0x4, align 4
    bool pierces_debuff_immunity; // offset 0x1B28, size 0x1, align 1
    char _pad_1B29[0x7]; // offset 0x1B29
    CUtlVector< ParticleIndex_t > m_FXIndex; // offset 0x1B30, size 0x18, align 8
};
