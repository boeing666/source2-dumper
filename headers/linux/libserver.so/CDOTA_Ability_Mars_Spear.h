#pragma once

class CDOTA_Ability_Mars_Spear : public CDOTABaseAbility /*0x0*/  // sizeof 0x8C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // offset 0x860, size 0x18, align 8
    char _pad_0878[0x14]; // offset 0x878
    int32 damage; // offset 0x88C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > hImpaledTargetList; // offset 0x890, size 0x18, align 8
    int32 m_nTargetsImpaled; // offset 0x8A8, size 0x4, align 4
    int32 m_nMaxImpaleTargets; // offset 0x8AC, size 0x4, align 4
    bool m_bHadBulwarkEnabled; // offset 0x8B0, size 0x1, align 1
    char _pad_08B1[0x3]; // offset 0x8B1
    VectorWS m_vLastTrailThinkerLocation; // offset 0x8B4, size 0xC, align 4
    bool bHasStartedBurning; // offset 0x8C0, size 0x1, align 1
    char _pad_08C1[0x7]; // offset 0x8C1
};
