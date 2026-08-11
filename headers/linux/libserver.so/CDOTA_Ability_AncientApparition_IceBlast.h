#pragma once

class CDOTA_Ability_AncientApparition_IceBlast : public CDOTABaseAbility /*0x0*/  // sizeof 0x8D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CountdownTimer m_PathTimer; // offset 0x860, size 0x18, align 8
    VectorWS m_vTarget; // offset 0x878, size 0xC, align 4
    VectorWS m_vStartPos; // offset 0x884, size 0xC, align 4
    VectorWS m_vLastTempViewer; // offset 0x890, size 0xC, align 4
    int32 m_iTrackerProjectile; // offset 0x89C, size 0x4, align 4
    float32 path_radius; // offset 0x8A0, size 0x4, align 4
    float32 radius_min; // offset 0x8A4, size 0x4, align 4
    float32 radius_max; // offset 0x8A8, size 0x4, align 4
    float32 radius_grow; // offset 0x8AC, size 0x4, align 4
    float32 frostbite_duration; // offset 0x8B0, size 0x4, align 4
    float32 target_sight_radius; // offset 0x8B4, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hFrostbittenEntities; // offset 0x8B8, size 0x18, align 8
};
