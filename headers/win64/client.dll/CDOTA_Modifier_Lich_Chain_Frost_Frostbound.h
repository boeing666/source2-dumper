#pragma once

class CDOTA_Modifier_Lich_Chain_Frost_Frostbound : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 jump_range; // offset 0x1A58, size 0x4, align 4
    int32 jumps_remaining; // offset 0x1A5C, size 0x4, align 4
    int32 damage_to_heroes; // offset 0x1A60, size 0x4, align 4
    int32 heroes_killed; // offset 0x1A64, size 0x4, align 4
    bool m_bFoundTarget; // offset 0x1A68, size 0x1, align 1
    char _pad_1A69[0x3]; // offset 0x1A69
    ParticleIndex_t m_nFXIndex; // offset 0x1A6C, size 0x4, align 255
    char _pad_1A70[0x18]; // offset 0x1A70
};
