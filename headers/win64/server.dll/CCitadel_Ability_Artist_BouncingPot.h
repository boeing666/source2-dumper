#pragma once

class CCitadel_Ability_Artist_BouncingPot : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1D38, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecGroundAuras; // offset 0x14A8, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecHitUnits; // offset 0x14C0, size 0x18, align 8
    ShotID_t m_tInitialShotID; // offset 0x14D8, size 0x4, align 255
    VectorWS m_vLaunchPosition; // offset 0x14DC, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x14E8, size 0xC, align 4
    char _pad_14F4[0x844]; // offset 0x14F4
};
