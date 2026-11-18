#pragma once

class CDOTA_Modifier_VoidSpirit_AetherRemnant_Unit : public CDOTA_Buff /*0x0*/  // sizeof 0x1BB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    Vector m_vFacingDir; // offset 0x1AF8, size 0xC, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
    CUtlVector< CHandle< C_BaseEntity > > m_hWatchPathThinkers; // offset 0x1B08, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hShardWatchPathThinkers; // offset 0x1B20, size 0x18, align 8
    ParticleIndex_t m_nBeamFXIndex; // offset 0x1B38, size 0x4, align 255
    ParticleIndex_t m_nShardBeamFXIndex; // offset 0x1B3C, size 0x4, align 255
    ParticleIndex_t m_nHeroFXIndex; // offset 0x1B40, size 0x4, align 255
    char _pad_1B44[0x4]; // offset 0x1B44
    CUtlVector< int32 > m_nViewerIDs; // offset 0x1B48, size 0x18, align 8
    int32 m_nViewerTeam; // offset 0x1B60, size 0x4, align 4
    float32 remnant_watch_distance; // offset 0x1B64, size 0x4, align 4
    float32 remnant_watch_radius; // offset 0x1B68, size 0x4, align 4
    float32 duration; // offset 0x1B6C, size 0x4, align 4
    float32 watch_path_vision_radius; // offset 0x1B70, size 0x4, align 4
    float32 impact_damage; // offset 0x1B74, size 0x4, align 4
    float32 pull_duration; // offset 0x1B78, size 0x4, align 4
    float32 activation_delay; // offset 0x1B7C, size 0x4, align 4
    bool m_bPiercesCreeps; // offset 0x1B80, size 0x1, align 1
    char _pad_1B81[0x7]; // offset 0x1B81
    CUtlVector< CHandle< C_BaseEntity > > m_hAlreadyHit; // offset 0x1B88, size 0x18, align 8
    bool bIsArtifice; // offset 0x1BA0, size 0x1, align 1
    char _pad_1BA1[0x3]; // offset 0x1BA1
    float32 artifice_duration_override; // offset 0x1BA4, size 0x4, align 4
    float32 artifice_pct_effectiveness; // offset 0x1BA8, size 0x4, align 4
    bool m_bActivated; // offset 0x1BAC, size 0x1, align 1
    char _pad_1BAD[0x3]; // offset 0x1BAD
    float32 m_flRotation; // offset 0x1BB0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPartnerRemnant; // offset 0x1BB4, size 0x4, align 4
};
