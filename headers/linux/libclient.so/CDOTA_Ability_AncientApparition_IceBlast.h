#pragma once

class CDOTA_Ability_AncientApparition_IceBlast : public C_DOTABaseAbility /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    CountdownTimer m_PathTimer; // offset 0x828, size 0x18, align 8
    VectorWS m_vTarget; // offset 0x840, size 0xC, align 4
    VectorWS m_vStartPos; // offset 0x84C, size 0xC, align 4
    VectorWS m_vLastTempViewer; // offset 0x858, size 0xC, align 4
    int32 m_iTrackerProjectile; // offset 0x864, size 0x4, align 4
    float32 path_radius; // offset 0x868, size 0x4, align 4
    float32 radius_min; // offset 0x86C, size 0x4, align 4
    float32 radius_max; // offset 0x870, size 0x4, align 4
    float32 radius_grow; // offset 0x874, size 0x4, align 4
    float32 frostbite_duration; // offset 0x878, size 0x4, align 4
    float32 target_sight_radius; // offset 0x87C, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_hFrostbittenEntities; // offset 0x880, size 0x18, align 8
};
