#pragma once

class CCitadel_Ability_Artist_BouncingPot : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1F70, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecGroundAuras; // offset 0x16E0, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitUnits; // offset 0x16F8, size 0x18, align 8
    ShotID_t m_tInitialShotID; // offset 0x1710, size 0x4, align 255
    VectorWS m_vLaunchPosition; // offset 0x1714, size 0xC, align 4
    QAngle m_qLaunchAngle; // offset 0x1720, size 0xC, align 4
    char _pad_172C[0x844]; // offset 0x172C
};
