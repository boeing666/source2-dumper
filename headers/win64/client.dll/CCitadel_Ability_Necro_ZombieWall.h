#pragma once

class CCitadel_Ability_Necro_ZombieWall : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1F70, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    GameTime_t m_tWallDeployFinishTime; // offset 0x16E0, size 0x4, align 255
    char _pad_16E4[0x34]; // offset 0x16E4
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitUnits; // offset 0x1718, size 0x18, align 8
    char _pad_1730[0x840]; // offset 0x1730
};
