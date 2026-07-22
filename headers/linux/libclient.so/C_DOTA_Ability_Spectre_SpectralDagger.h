#pragma once

class C_DOTA_Ability_Spectre_SpectralDagger : public C_DOTABaseAbility /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 dagger_path_duration; // offset 0x824, size 0x4, align 4
    float32 hero_path_duration; // offset 0x828, size 0x4, align 4
    float32 m_fCreateInterval; // offset 0x82C, size 0x4, align 4
    GameTime_t m_fLastCreate; // offset 0x830, size 0x4, align 255
    VectorWS m_vecLastPosition; // offset 0x834, size 0xC, align 4
    bool m_bIsTrackingProjectile; // offset 0x840, size 0x1, align 1
    char _pad_0841[0x7]; // offset 0x841
    CUtlVector< CHandle< C_BaseEntity > > m_hTrackingProjectileHits; // offset 0x848, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hUnitsHit; // offset 0x860, size 0x18, align 8
    bool m_bIsThinkHit; // offset 0x878, size 0x1, align 1
    char _pad_0879[0x3]; // offset 0x879
    CHandle< C_BaseEntity > m_hTrackingTarget; // offset 0x87C, size 0x4, align 4
};
