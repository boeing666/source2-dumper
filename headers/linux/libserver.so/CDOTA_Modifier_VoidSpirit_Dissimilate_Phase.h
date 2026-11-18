#pragma once

class CDOTA_Modifier_VoidSpirit_Dissimilate_Phase : public CDOTA_Buff /*0x0*/  // sizeof 0x1BA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    VectorWS m_vFirstPortalPos; // offset 0x1AF8, size 0xC, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
    CUtlVector< VectorWS > m_vecDestinations; // offset 0x1B08, size 0x18, align 8
    CUtlVector< ParticleIndex_t > m_vecDestinationParticles; // offset 0x1B20, size 0x18, align 8
    CUtlVector< ParticleIndex_t > m_vecDestinationParticles_EnemyTeam; // offset 0x1B38, size 0x18, align 8
    int32 m_nCurrentDestinationIndex; // offset 0x1B50, size 0x4, align 4
    int32 m_nClosestIndexPosToClick; // offset 0x1B54, size 0x4, align 4
    int32 m_flPortalHeightOffset; // offset 0x1B58, size 0x4, align 4
    char _pad_1B5C[0x4]; // offset 0x1B5C
    char* m_szAlliesPortalFX; // offset 0x1B60, size 0x8, align 8
    char* m_szEnemiesPortalFX; // offset 0x1B68, size 0x8, align 8
    float32 m_flPortalRadius; // offset 0x1B70, size 0x4, align 4
    float32 m_flPortalPadding; // offset 0x1B74, size 0x4, align 4
    float32 m_flFinalImpactDamageRadius; // offset 0x1B78, size 0x4, align 4
    float32 m_flFinalImpactFXRadius; // offset 0x1B7C, size 0x4, align 4
    float32 destination_fx_radius; // offset 0x1B80, size 0x4, align 4
    float32 damage_radius; // offset 0x1B84, size 0x4, align 4
    int32 portals_per_ring; // offset 0x1B88, size 0x4, align 4
    int32 angle_per_ring_portal; // offset 0x1B8C, size 0x4, align 4
    float32 first_ring_distance_offset; // offset 0x1B90, size 0x4, align 4
    float32 debuff_duration; // offset 0x1B94, size 0x4, align 4
    int32 aether_remnant_count; // offset 0x1B98, size 0x4, align 4
    float32 artifice_extra_offset; // offset 0x1B9C, size 0x4, align 4
};
