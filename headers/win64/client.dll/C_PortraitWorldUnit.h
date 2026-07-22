#pragma once

class C_PortraitWorldUnit : public C_DOTA_BaseNPC /*0x0*/  // sizeof 0x1DF0, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x19B0]; // offset 0x0
    CEntityIOOutput m_OutputAnimOver; // offset 0x19B0, size 0x18, align 255
    bool m_bSuppressIntroEffects; // offset 0x19C8, size 0x1, align 1
    bool m_bIsAlternateLoadout; // offset 0x19C9, size 0x1, align 1
    bool m_bSkipBackgroundEntities; // offset 0x19CA, size 0x1, align 1
    bool m_bSpawnBackgroundModels; // offset 0x19CB, size 0x1, align 1
    bool m_bDeferredPortrait; // offset 0x19CC, size 0x1, align 1
    bool m_bShowParticleAssetModifiers; // offset 0x19CD, size 0x1, align 1
    bool m_bIgnorePortraitInfo; // offset 0x19CE, size 0x1, align 1
    bool m_bFlyingCourier; // offset 0x19CF, size 0x1, align 1
    bool m_bDisableDefaultModifiers; // offset 0x19D0, size 0x1, align 1
    char _pad_19D1[0x3]; // offset 0x19D1
    int32 m_nEffigyStatusEffect; // offset 0x19D4, size 0x4, align 4
    CUtlSymbolLarge m_effigySequenceName; // offset 0x19D8, size 0x8, align 8
    float32 m_flStartingAnimationCycle; // offset 0x19E0, size 0x4, align 4
    float32 m_flAnimationPlaybackSpeed; // offset 0x19E4, size 0x4, align 4
    float32 m_flRareLoadoutAnimChance; // offset 0x19E8, size 0x4, align 4
    bool m_bSetDefaultActivityOnSequenceFinished; // offset 0x19EC, size 0x1, align 1
    char _pad_19ED[0x3]; // offset 0x19ED
    CUtlVector< CUtlSymbolLarge > m_vecActivityModifiers; // offset 0x19F0, size 0x18, align 8
    DOTAPortraitEnvironmentType_t m_environment; // offset 0x1A08, size 0x4, align 4
    char _pad_1A0C[0x4]; // offset 0x1A0C
    StartupBehavior_t m_nStartupBehavior; // offset 0x1A10, size 0x4, align 4
    char _pad_1A14[0x1E4]; // offset 0x1A14
    CUtlSymbolLarge m_cameraName; // offset 0x1BF8, size 0x8, align 8
    char _pad_1C00[0x50]; // offset 0x1C00
    ParticleIndex_t m_nPortraitParticle; // offset 0x1C50, size 0x4, align 255
    int32 m_nCourierType; // offset 0x1C54, size 0x4, align 4
    char _pad_1C58[0x198]; // offset 0x1C58
};
