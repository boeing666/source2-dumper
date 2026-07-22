#pragma once

class CDOTA_Ability_Dazzle_ShadowWave : public CDOTABaseAbility /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hHitEntities; // offset 0x860, size 0x18, align 8
    float32 bounce_radius; // offset 0x878, size 0x4, align 4
    float32 damage_radius; // offset 0x87C, size 0x4, align 4
    int32 damage; // offset 0x880, size 0x4, align 4
    int32 max_targets; // offset 0x884, size 0x4, align 4
    float32 scepter_heal_pct; // offset 0x888, size 0x4, align 4
    char _pad_088C[0x4]; // offset 0x88C
};
