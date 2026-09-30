#pragma once

class CCitadel_Ability_Necro_ZombieWall : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1F68, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16DC]; // offset 0x0
    GameTime_t m_tWallDeployFinishTime; // offset 0x16DC, size 0x4, align 255
    char _pad_16E0[0x30]; // offset 0x16E0
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitUnits; // offset 0x1710, size 0x18, align 8
    char _pad_1728[0x840]; // offset 0x1728
};
