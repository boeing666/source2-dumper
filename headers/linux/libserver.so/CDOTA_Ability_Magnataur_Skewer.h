#pragma once

class CDOTA_Ability_Magnataur_Skewer : public CDOTABaseAbility /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 skewer_radius; // offset 0x85C, size 0x4, align 4
    float32 skewer_speed; // offset 0x860, size 0x4, align 4
    float32 tree_radius; // offset 0x864, size 0x4, align 4
    float32 tree_hit_damage; // offset 0x868, size 0x4, align 4
    float32 cliff_hit_damage; // offset 0x86C, size 0x4, align 4
    int32 terrain_hit_increase_pct; // offset 0x870, size 0x4, align 4
    float32 terrain_hit_cooldown; // offset 0x874, size 0x4, align 4
    int32 m_nProjectileID; // offset 0x878, size 0x4, align 4
    int32 m_nVisibleTargetCount; // offset 0x87C, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_hEnemiesSkewered; // offset 0x880, size 0x18, align 8
    GameTime_t m_flLastTerrainObstructionHitTime; // offset 0x898, size 0x4, align 255
    int32 m_nTargetsHit; // offset 0x89C, size 0x4, align 4
};
