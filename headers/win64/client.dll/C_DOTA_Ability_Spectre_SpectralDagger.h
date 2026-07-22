#pragma once

class C_DOTA_Ability_Spectre_SpectralDagger : public C_DOTABaseAbility /*0x0*/  // sizeof 0x700, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 dagger_path_duration; // offset 0x6A8, size 0x4, align 4
    float32 hero_path_duration; // offset 0x6AC, size 0x4, align 4
    float32 m_fCreateInterval; // offset 0x6B0, size 0x4, align 4
    GameTime_t m_fLastCreate; // offset 0x6B4, size 0x4, align 255
    VectorWS m_vecLastPosition; // offset 0x6B8, size 0xC, align 4
    bool m_bIsTrackingProjectile; // offset 0x6C4, size 0x1, align 1
    char _pad_06C5[0x3]; // offset 0x6C5
    CUtlVector< CHandle< C_BaseEntity > > m_hTrackingProjectileHits; // offset 0x6C8, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_hUnitsHit; // offset 0x6E0, size 0x18, align 8
    bool m_bIsThinkHit; // offset 0x6F8, size 0x1, align 1
    char _pad_06F9[0x3]; // offset 0x6F9
    CHandle< C_BaseEntity > m_hTrackingTarget; // offset 0x6FC, size 0x4, align 4
};
