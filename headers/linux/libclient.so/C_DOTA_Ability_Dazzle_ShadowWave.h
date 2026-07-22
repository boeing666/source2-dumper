#pragma once

class C_DOTA_Ability_Dazzle_ShadowWave : public C_DOTABaseAbility /*0x0*/  // sizeof 0x858, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_hHitEntities; // offset 0x828, size 0x18, align 8
    float32 bounce_radius; // offset 0x840, size 0x4, align 4
    float32 damage_radius; // offset 0x844, size 0x4, align 4
    int32 damage; // offset 0x848, size 0x4, align 4
    int32 max_targets; // offset 0x84C, size 0x4, align 4
    float32 scepter_heal_pct; // offset 0x850, size 0x4, align 4
    char _pad_0854[0x4]; // offset 0x854
};
