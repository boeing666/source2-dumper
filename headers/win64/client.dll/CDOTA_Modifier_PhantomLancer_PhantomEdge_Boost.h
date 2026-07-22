#pragma once

class CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_speed; // offset 0x1A58, size 0x4, align 4
    float32 agility_duration; // offset 0x1A5C, size 0x4, align 4
    bool m_bGiveAgility; // offset 0x1A60, size 0x1, align 1
    char _pad_1A61[0x3]; // offset 0x1A61
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A64, size 0x4, align 4
    int32 bonus_agility; // offset 0x1A68, size 0x4, align 4
    float32 illusion_spawn_radius; // offset 0x1A6C, size 0x4, align 4
    float32 illusion_spawn_travel_distance; // offset 0x1A70, size 0x4, align 4
    float32 evasion; // offset 0x1A74, size 0x4, align 4
    float32 m_flDistanceAccumulator; // offset 0x1A78, size 0x4, align 4
    VectorWS m_vPreviousLocation; // offset 0x1A7C, size 0xC, align 4
};
