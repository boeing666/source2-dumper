#pragma once

class CCitadel_Ability_Necro_ZombieWall : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1828, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x11DC]; // offset 0x0
    GameTime_t m_tWallDeployFinishTime; // offset 0x11DC, size 0x4, align 255 | MNetworkEnable
    char _pad_11E0[0x30]; // offset 0x11E0
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitUnits; // offset 0x1210, size 0x18, align 8
    char _pad_1228[0x600]; // offset 0x1228
};
