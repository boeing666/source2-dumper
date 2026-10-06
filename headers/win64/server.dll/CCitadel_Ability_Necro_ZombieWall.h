#pragma once

class CCitadel_Ability_Necro_ZombieWall : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1D30, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    GameTime_t m_tWallDeployFinishTime; // offset 0x14A0, size 0x4, align 255
    char _pad_14A4[0x34]; // offset 0x14A4
    CUtlVector< CHandle< CBaseEntity > > m_vecHitUnits; // offset 0x14D8, size 0x18, align 8
    char _pad_14F0[0x840]; // offset 0x14F0
};
