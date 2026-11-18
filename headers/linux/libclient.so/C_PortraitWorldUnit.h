#pragma once

class C_PortraitWorldUnit : public C_DOTA_BaseNPC /*0x0*/  // sizeof 0x20B0, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1CD0]; // offset 0x0
    CEntityIOOutput m_OutputAnimOver; // offset 0x1CD0, size 0x18, align 255
    bool m_bSuppressIntroEffects; // offset 0x1CE8, size 0x1, align 1
    bool m_bIsAlternateLoadout; // offset 0x1CE9, size 0x1, align 1
    bool m_bSkipBackgroundEntities; // offset 0x1CEA, size 0x1, align 1
    bool m_bSpawnBackgroundModels; // offset 0x1CEB, size 0x1, align 1
    bool m_bDeferredPortrait; // offset 0x1CEC, size 0x1, align 1
    bool m_bShowParticleAssetModifiers; // offset 0x1CED, size 0x1, align 1
    bool m_bIgnorePortraitInfo; // offset 0x1CEE, size 0x1, align 1
    bool m_bFlyingCourier; // offset 0x1CEF, size 0x1, align 1
    bool m_bDisableDefaultModifiers; // offset 0x1CF0, size 0x1, align 1
    char _pad_1CF1[0x3]; // offset 0x1CF1
    int32 m_nEffigyStatusEffect; // offset 0x1CF4, size 0x4, align 4
    CUtlSymbolLarge m_effigySequenceName; // offset 0x1CF8, size 0x8, align 8
    float32 m_flStartingAnimationCycle; // offset 0x1D00, size 0x4, align 4
    float32 m_flAnimationPlaybackSpeed; // offset 0x1D04, size 0x4, align 4
    float32 m_flRareLoadoutAnimChance; // offset 0x1D08, size 0x4, align 4
    bool m_bSetDefaultActivityOnSequenceFinished; // offset 0x1D0C, size 0x1, align 1
    char _pad_1D0D[0x3]; // offset 0x1D0D
    CUtlVector< CUtlSymbolLarge > m_vecActivityModifiers; // offset 0x1D10, size 0x18, align 8
    DOTAPortraitEnvironmentType_t m_environment; // offset 0x1D28, size 0x4, align 4
    char _pad_1D2C[0x4]; // offset 0x1D2C
    StartupBehavior_t m_nStartupBehavior; // offset 0x1D30, size 0x4, align 4
    char _pad_1D34[0x1E4]; // offset 0x1D34
    CUtlSymbolLarge m_cameraName; // offset 0x1F18, size 0x8, align 8
    char _pad_1F20[0x50]; // offset 0x1F20
    ParticleIndex_t m_nPortraitParticle; // offset 0x1F70, size 0x4, align 255
    int32 m_nCourierType; // offset 0x1F74, size 0x4, align 4
    char _pad_1F78[0x138]; // offset 0x1F78
};
