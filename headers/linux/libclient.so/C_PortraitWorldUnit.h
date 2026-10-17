#pragma once

class C_PortraitWorldUnit : public C_DOTA_BaseNPC /*0x0*/  // sizeof 0x2020, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1C40]; // offset 0x0
    CEntityIOOutput m_OutputAnimOver; // offset 0x1C40, size 0x18, align 255
    bool m_bSuppressIntroEffects; // offset 0x1C58, size 0x1, align 1
    bool m_bIsAlternateLoadout; // offset 0x1C59, size 0x1, align 1
    bool m_bSkipBackgroundEntities; // offset 0x1C5A, size 0x1, align 1
    bool m_bSpawnBackgroundModels; // offset 0x1C5B, size 0x1, align 1
    bool m_bDeferredPortrait; // offset 0x1C5C, size 0x1, align 1
    bool m_bShowParticleAssetModifiers; // offset 0x1C5D, size 0x1, align 1
    bool m_bIgnorePortraitInfo; // offset 0x1C5E, size 0x1, align 1
    bool m_bFlyingCourier; // offset 0x1C5F, size 0x1, align 1
    bool m_bDisableDefaultModifiers; // offset 0x1C60, size 0x1, align 1
    char _pad_1C61[0x3]; // offset 0x1C61
    int32 m_nEffigyStatusEffect; // offset 0x1C64, size 0x4, align 4
    CUtlSymbolLarge m_effigySequenceName; // offset 0x1C68, size 0x8, align 8
    float32 m_flStartingAnimationCycle; // offset 0x1C70, size 0x4, align 4
    float32 m_flAnimationPlaybackSpeed; // offset 0x1C74, size 0x4, align 4
    float32 m_flRareLoadoutAnimChance; // offset 0x1C78, size 0x4, align 4
    bool m_bSetDefaultActivityOnSequenceFinished; // offset 0x1C7C, size 0x1, align 1
    char _pad_1C7D[0x3]; // offset 0x1C7D
    CUtlVector< CUtlSymbolLarge > m_vecActivityModifiers; // offset 0x1C80, size 0x18, align 8
    DOTAPortraitEnvironmentType_t m_environment; // offset 0x1C98, size 0x4, align 4
    char _pad_1C9C[0x4]; // offset 0x1C9C
    StartupBehavior_t m_nStartupBehavior; // offset 0x1CA0, size 0x4, align 4
    char _pad_1CA4[0x1E4]; // offset 0x1CA4
    CUtlSymbolLarge m_cameraName; // offset 0x1E88, size 0x8, align 8
    char _pad_1E90[0x50]; // offset 0x1E90
    ParticleIndex_t m_nPortraitParticle; // offset 0x1EE0, size 0x4, align 255
    int32 m_nCourierType; // offset 0x1EE4, size 0x4, align 4
    char _pad_1EE8[0x138]; // offset 0x1EE8
};
