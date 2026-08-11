#pragma once

class CDOTA_Ability_Mars_Spear : public CDOTABaseAbility /*0x0*/  // sizeof 0x5E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // offset 0x580, size 0x18, align 8
    char _pad_0598[0x14]; // offset 0x598
    int32 damage; // offset 0x5AC, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > hImpaledTargetList; // offset 0x5B0, size 0x18, align 8
    int32 m_nTargetsImpaled; // offset 0x5C8, size 0x4, align 4
    int32 m_nMaxImpaleTargets; // offset 0x5CC, size 0x4, align 4
    bool m_bHadBulwarkEnabled; // offset 0x5D0, size 0x1, align 1
    char _pad_05D1[0x3]; // offset 0x5D1
    VectorWS m_vLastTrailThinkerLocation; // offset 0x5D4, size 0xC, align 4
    bool bHasStartedBurning; // offset 0x5E0, size 0x1, align 1
    char _pad_05E1[0x7]; // offset 0x5E1
};
