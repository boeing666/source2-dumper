#pragma once

class CDOTA_Modifier_VoidSpirit_Dissimilate_Phase : public CDOTA_Buff /*0x0*/  // sizeof 0x1B50, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    VectorWS m_vFirstPortalPos; // offset 0x1AA8, size 0xC, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
    CUtlVector< VectorWS > m_vecDestinations; // offset 0x1AB8, size 0x18, align 8
    CUtlVector< ParticleIndex_t > m_vecDestinationParticles; // offset 0x1AD0, size 0x18, align 8
    CUtlVector< ParticleIndex_t > m_vecDestinationParticles_EnemyTeam; // offset 0x1AE8, size 0x18, align 8
    int32 m_nCurrentDestinationIndex; // offset 0x1B00, size 0x4, align 4
    int32 m_nClosestIndexPosToClick; // offset 0x1B04, size 0x4, align 4
    int32 m_flPortalHeightOffset; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
    char* m_szAlliesPortalFX; // offset 0x1B10, size 0x8, align 8
    char* m_szEnemiesPortalFX; // offset 0x1B18, size 0x8, align 8
    float32 m_flPortalRadius; // offset 0x1B20, size 0x4, align 4
    float32 m_flPortalPadding; // offset 0x1B24, size 0x4, align 4
    float32 m_flFinalImpactDamageRadius; // offset 0x1B28, size 0x4, align 4
    float32 m_flFinalImpactFXRadius; // offset 0x1B2C, size 0x4, align 4
    float32 destination_fx_radius; // offset 0x1B30, size 0x4, align 4
    float32 damage_radius; // offset 0x1B34, size 0x4, align 4
    int32 portals_per_ring; // offset 0x1B38, size 0x4, align 4
    int32 angle_per_ring_portal; // offset 0x1B3C, size 0x4, align 4
    float32 first_ring_distance_offset; // offset 0x1B40, size 0x4, align 4
    float32 debuff_duration; // offset 0x1B44, size 0x4, align 4
    int32 aether_remnant_count; // offset 0x1B48, size 0x4, align 4
    float32 artifice_extra_offset; // offset 0x1B4C, size 0x4, align 4
};
