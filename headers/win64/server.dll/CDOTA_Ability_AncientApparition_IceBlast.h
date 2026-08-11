#pragma once

class CDOTA_Ability_AncientApparition_IceBlast : public CDOTABaseAbility /*0x0*/  // sizeof 0x5F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CountdownTimer m_PathTimer; // offset 0x580, size 0x18, align 8
    VectorWS m_vTarget; // offset 0x598, size 0xC, align 4
    VectorWS m_vStartPos; // offset 0x5A4, size 0xC, align 4
    VectorWS m_vLastTempViewer; // offset 0x5B0, size 0xC, align 4
    int32 m_iTrackerProjectile; // offset 0x5BC, size 0x4, align 4
    float32 path_radius; // offset 0x5C0, size 0x4, align 4
    float32 radius_min; // offset 0x5C4, size 0x4, align 4
    float32 radius_max; // offset 0x5C8, size 0x4, align 4
    float32 radius_grow; // offset 0x5CC, size 0x4, align 4
    float32 frostbite_duration; // offset 0x5D0, size 0x4, align 4
    float32 target_sight_radius; // offset 0x5D4, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hFrostbittenEntities; // offset 0x5D8, size 0x18, align 8
};
