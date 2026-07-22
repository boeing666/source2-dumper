#pragma once

class CDOTA_Ability_Spectre_SpectralDagger : public CDOTABaseAbility /*0x0*/  // sizeof 0x8B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 dagger_path_duration; // offset 0x85C, size 0x4, align 4
    float32 hero_path_duration; // offset 0x860, size 0x4, align 4
    float32 m_fCreateInterval; // offset 0x864, size 0x4, align 4
    GameTime_t m_fLastCreate; // offset 0x868, size 0x4, align 255
    VectorWS m_vecLastPosition; // offset 0x86C, size 0xC, align 4
    bool m_bIsTrackingProjectile; // offset 0x878, size 0x1, align 1
    char _pad_0879[0x7]; // offset 0x879
    CUtlVector< CHandle< CBaseEntity > > m_hTrackingProjectileHits; // offset 0x880, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hUnitsHit; // offset 0x898, size 0x18, align 8
    bool m_bIsThinkHit; // offset 0x8B0, size 0x1, align 1
    char _pad_08B1[0x3]; // offset 0x8B1
    CHandle< CBaseEntity > m_hTrackingTarget; // offset 0x8B4, size 0x4, align 4
};
