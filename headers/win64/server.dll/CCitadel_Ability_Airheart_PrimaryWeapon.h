#pragma once

class CCitadel_Ability_Airheart_PrimaryWeapon : public CCitadel_Ability_PrimaryWeapon /*0x0*/  // sizeof 0x1348, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1198]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecStuckTargets; // offset 0x1198, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vecBombsInWorld; // offset 0x11B0, size 0x18, align 8
    char _pad_11C8[0x180]; // offset 0x11C8
};
