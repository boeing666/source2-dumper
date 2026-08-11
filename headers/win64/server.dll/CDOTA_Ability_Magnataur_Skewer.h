#pragma once

class CDOTA_Ability_Magnataur_Skewer : public CDOTABaseAbility /*0x0*/  // sizeof 0x5C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 skewer_radius; // offset 0x580, size 0x4, align 4
    float32 skewer_speed; // offset 0x584, size 0x4, align 4
    float32 tree_radius; // offset 0x588, size 0x4, align 4
    float32 tree_hit_damage; // offset 0x58C, size 0x4, align 4
    float32 cliff_hit_damage; // offset 0x590, size 0x4, align 4
    int32 terrain_hit_increase_pct; // offset 0x594, size 0x4, align 4
    float32 terrain_hit_cooldown; // offset 0x598, size 0x4, align 4
    int32 m_nProjectileID; // offset 0x59C, size 0x4, align 4
    int32 m_nVisibleTargetCount; // offset 0x5A0, size 0x4, align 4
    char _pad_05A4[0x4]; // offset 0x5A4
    CUtlVector< CHandle< CBaseEntity > > m_hEnemiesSkewered; // offset 0x5A8, size 0x18, align 8
    GameTime_t m_flLastTerrainObstructionHitTime; // offset 0x5C0, size 0x4, align 255
    int32 m_nTargetsHit; // offset 0x5C4, size 0x4, align 4
};
