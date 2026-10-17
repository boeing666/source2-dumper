#pragma once

class CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit : public CDOTA_Buff /*0x0*/  // sizeof 0x1B68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    Vector m_vFacingDir; // offset 0x1AA8, size 0xC, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
    CUtlVector< CHandle< C_BaseEntity > > m_hWatchPathThinkers; // offset 0x1AB8, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hShardWatchPathThinkers; // offset 0x1AD0, size 0x18, align 8
    ParticleIndex_t m_nBeamFXIndex; // offset 0x1AE8, size 0x4, align 255
    ParticleIndex_t m_nShardBeamFXIndex; // offset 0x1AEC, size 0x4, align 255
    ParticleIndex_t m_nHeroFXIndex; // offset 0x1AF0, size 0x4, align 255
    char _pad_1AF4[0x4]; // offset 0x1AF4
    CUtlVector< int32 > m_nViewerIDs; // offset 0x1AF8, size 0x18, align 8
    int32 m_nViewerTeam; // offset 0x1B10, size 0x4, align 4
    float32 remnant_watch_distance; // offset 0x1B14, size 0x4, align 4
    float32 remnant_watch_radius; // offset 0x1B18, size 0x4, align 4
    float32 duration; // offset 0x1B1C, size 0x4, align 4
    float32 watch_path_vision_radius; // offset 0x1B20, size 0x4, align 4
    float32 impact_damage; // offset 0x1B24, size 0x4, align 4
    float32 pull_duration; // offset 0x1B28, size 0x4, align 4
    float32 activation_delay; // offset 0x1B2C, size 0x4, align 4
    bool m_bPiercesCreeps; // offset 0x1B30, size 0x1, align 1
    char _pad_1B31[0x7]; // offset 0x1B31
    CUtlVector< CHandle< C_BaseEntity > > m_hAlreadyHit; // offset 0x1B38, size 0x18, align 8
    bool bIsArtifice; // offset 0x1B50, size 0x1, align 1
    char _pad_1B51[0x3]; // offset 0x1B51
    float32 artifice_duration_override; // offset 0x1B54, size 0x4, align 4
    float32 artifice_pct_effectiveness; // offset 0x1B58, size 0x4, align 4
    bool m_bActivated; // offset 0x1B5C, size 0x1, align 1
    char _pad_1B5D[0x3]; // offset 0x1B5D
    float32 m_flRotation; // offset 0x1B60, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPartnerRemnant; // offset 0x1B64, size 0x4, align 4
};
