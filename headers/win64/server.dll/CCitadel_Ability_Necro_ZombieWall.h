#pragma once

class CCitadel_Ability_Necro_ZombieWall : public CCitadelBaseAbility /*0x0*/  // sizeof 0x15C0, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF74]; // offset 0x0
    GameTime_t m_tWallDeployFinishTime; // offset 0xF74, size 0x4, align 255 | MNetworkEnable
    char _pad_0F78[0x30]; // offset 0xF78
    CUtlVector< CHandle< CBaseEntity > > m_vecHitUnits; // offset 0xFA8, size 0x18, align 8
    char _pad_0FC0[0x600]; // offset 0xFC0
};
