#pragma once

class CDOTA_Modifier_PhantomLancer_PhantomEdge_Boost : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_speed; // offset 0x1A78, size 0x4, align 4
    float32 agility_duration; // offset 0x1A7C, size 0x4, align 4
    bool m_bGiveAgility; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x3]; // offset 0x1A81
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A84, size 0x4, align 4
    int32 bonus_agility; // offset 0x1A88, size 0x4, align 4
    float32 illusion_spawn_radius; // offset 0x1A8C, size 0x4, align 4
    float32 illusion_spawn_travel_distance; // offset 0x1A90, size 0x4, align 4
    float32 evasion; // offset 0x1A94, size 0x4, align 4
    float32 m_flDistanceAccumulator; // offset 0x1A98, size 0x4, align 4
    VectorWS m_vPreviousLocation; // offset 0x1A9C, size 0xC, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x1AA8, size 0x18, align 8
};
