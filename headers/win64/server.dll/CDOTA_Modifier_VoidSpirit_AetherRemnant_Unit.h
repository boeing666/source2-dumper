#pragma once

class CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    Vector m_vFacingDir; // offset 0x1A78, size 0xC, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
    CUtlVector< CHandle< CBaseEntity > > m_hWatchPathThinkers; // offset 0x1A88, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hShardWatchPathThinkers; // offset 0x1AA0, size 0x18, align 8
    ParticleIndex_t m_nBeamFXIndex; // offset 0x1AB8, size 0x4, align 255
    ParticleIndex_t m_nShardBeamFXIndex; // offset 0x1ABC, size 0x4, align 255
    ParticleIndex_t m_nHeroFXIndex; // offset 0x1AC0, size 0x4, align 255
    char _pad_1AC4[0x4]; // offset 0x1AC4
    CUtlVector< int32 > m_nViewerIDs; // offset 0x1AC8, size 0x18, align 8
    int32 m_nViewerTeam; // offset 0x1AE0, size 0x4, align 4
    float32 remnant_watch_distance; // offset 0x1AE4, size 0x4, align 4
    float32 remnant_watch_radius; // offset 0x1AE8, size 0x4, align 4
    float32 duration; // offset 0x1AEC, size 0x4, align 4
    float32 watch_path_vision_radius; // offset 0x1AF0, size 0x4, align 4
    float32 impact_damage; // offset 0x1AF4, size 0x4, align 4
    float32 pull_duration; // offset 0x1AF8, size 0x4, align 4
    float32 activation_delay; // offset 0x1AFC, size 0x4, align 4
    bool m_bPiercesCreeps; // offset 0x1B00, size 0x1, align 1
    char _pad_1B01[0x7]; // offset 0x1B01
    CUtlVector< CHandle< CBaseEntity > > m_hAlreadyHit; // offset 0x1B08, size 0x18, align 8
    bool bIsArtifice; // offset 0x1B20, size 0x1, align 1
    char _pad_1B21[0x3]; // offset 0x1B21
    float32 artifice_duration_override; // offset 0x1B24, size 0x4, align 4
    float32 artifice_pct_effectiveness; // offset 0x1B28, size 0x4, align 4
    bool m_bActivated; // offset 0x1B2C, size 0x1, align 1
    char _pad_1B2D[0x3]; // offset 0x1B2D
    float32 m_flRotation; // offset 0x1B30, size 0x4, align 4
    CHandle< CBaseEntity > m_hPartnerRemnant; // offset 0x1B34, size 0x4, align 4
};
