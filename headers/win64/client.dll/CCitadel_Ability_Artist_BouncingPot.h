#pragma once

class CCitadel_Ability_Artist_BouncingPot : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1F68, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecGroundAuras; // offset 0x16D8, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitUnits; // offset 0x16F0, size 0x18, align 8
    ShotID_t m_tInitialShotID; // offset 0x1708, size 0x4, align 255
    VectorWS m_vLaunchPosition; // offset 0x170C, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x1718, size 0xC, align 4
    char _pad_1724[0x844]; // offset 0x1724
};
