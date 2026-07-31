#pragma once

class C_PortraitWorldUnit : public C_DOTA_BaseNPC /*0x0*/  // sizeof 0x1F20, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1B40]; // offset 0x0
    CEntityIOOutput m_OutputAnimOver; // offset 0x1B40, size 0x18, align 255
    bool m_bSuppressIntroEffects; // offset 0x1B58, size 0x1, align 1
    bool m_bIsAlternateLoadout; // offset 0x1B59, size 0x1, align 1
    bool m_bSkipBackgroundEntities; // offset 0x1B5A, size 0x1, align 1
    bool m_bSpawnBackgroundModels; // offset 0x1B5B, size 0x1, align 1
    bool m_bDeferredPortrait; // offset 0x1B5C, size 0x1, align 1
    bool m_bShowParticleAssetModifiers; // offset 0x1B5D, size 0x1, align 1
    bool m_bIgnorePortraitInfo; // offset 0x1B5E, size 0x1, align 1
    bool m_bFlyingCourier; // offset 0x1B5F, size 0x1, align 1
    bool m_bDisableDefaultModifiers; // offset 0x1B60, size 0x1, align 1
    char _pad_1B61[0x3]; // offset 0x1B61
    int32 m_nEffigyStatusEffect; // offset 0x1B64, size 0x4, align 4
    CUtlSymbolLarge m_effigySequenceName; // offset 0x1B68, size 0x8, align 8
    float32 m_flStartingAnimationCycle; // offset 0x1B70, size 0x4, align 4
    float32 m_flAnimationPlaybackSpeed; // offset 0x1B74, size 0x4, align 4
    float32 m_flRareLoadoutAnimChance; // offset 0x1B78, size 0x4, align 4
    bool m_bSetDefaultActivityOnSequenceFinished; // offset 0x1B7C, size 0x1, align 1
    char _pad_1B7D[0x3]; // offset 0x1B7D
    CUtlVector< CUtlSymbolLarge > m_vecActivityModifiers; // offset 0x1B80, size 0x18, align 8
    DOTAPortraitEnvironmentType_t m_environment; // offset 0x1B98, size 0x4, align 4
    char _pad_1B9C[0x4]; // offset 0x1B9C
    StartupBehavior_t m_nStartupBehavior; // offset 0x1BA0, size 0x4, align 4
    char _pad_1BA4[0x1E4]; // offset 0x1BA4
    CUtlSymbolLarge m_cameraName; // offset 0x1D88, size 0x8, align 8
    char _pad_1D90[0x50]; // offset 0x1D90
    ParticleIndex_t m_nPortraitParticle; // offset 0x1DE0, size 0x4, align 255
    int32 m_nCourierType; // offset 0x1DE4, size 0x4, align 4
    char _pad_1DE8[0x138]; // offset 0x1DE8
};
