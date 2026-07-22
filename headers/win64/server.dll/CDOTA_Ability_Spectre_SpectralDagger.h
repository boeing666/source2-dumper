#pragma once

class CDOTA_Ability_Spectre_SpectralDagger : public CDOTABaseAbility /*0x0*/  // sizeof 0x5D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 dagger_path_duration; // offset 0x580, size 0x4, align 4
    float32 hero_path_duration; // offset 0x584, size 0x4, align 4
    float32 m_fCreateInterval; // offset 0x588, size 0x4, align 4
    GameTime_t m_fLastCreate; // offset 0x58C, size 0x4, align 255
    VectorWS m_vecLastPosition; // offset 0x590, size 0xC, align 4
    bool m_bIsTrackingProjectile; // offset 0x59C, size 0x1, align 1
    char _pad_059D[0x3]; // offset 0x59D
    CUtlVector< CHandle< CBaseEntity > > m_hTrackingProjectileHits; // offset 0x5A0, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_hUnitsHit; // offset 0x5B8, size 0x18, align 8
    bool m_bIsThinkHit; // offset 0x5D0, size 0x1, align 1
    char _pad_05D1[0x3]; // offset 0x5D1
    CHandle< CBaseEntity > m_hTrackingTarget; // offset 0x5D4, size 0x4, align 4
};
