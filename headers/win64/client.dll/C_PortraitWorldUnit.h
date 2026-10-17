#pragma once

class C_PortraitWorldUnit : public C_DOTA_BaseNPC /*0x0*/  // sizeof 0x1EF0, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1AB8]; // offset 0x0
    CEntityIOOutput m_OutputAnimOver; // offset 0x1AB8, size 0x18, align 255
    bool m_bSuppressIntroEffects; // offset 0x1AD0, size 0x1, align 1
    bool m_bIsAlternateLoadout; // offset 0x1AD1, size 0x1, align 1
    bool m_bSkipBackgroundEntities; // offset 0x1AD2, size 0x1, align 1
    bool m_bSpawnBackgroundModels; // offset 0x1AD3, size 0x1, align 1
    bool m_bDeferredPortrait; // offset 0x1AD4, size 0x1, align 1
    bool m_bShowParticleAssetModifiers; // offset 0x1AD5, size 0x1, align 1
    bool m_bIgnorePortraitInfo; // offset 0x1AD6, size 0x1, align 1
    bool m_bFlyingCourier; // offset 0x1AD7, size 0x1, align 1
    bool m_bDisableDefaultModifiers; // offset 0x1AD8, size 0x1, align 1
    char _pad_1AD9[0x3]; // offset 0x1AD9
    int32 m_nEffigyStatusEffect; // offset 0x1ADC, size 0x4, align 4
    CUtlSymbolLarge m_effigySequenceName; // offset 0x1AE0, size 0x8, align 8
    float32 m_flStartingAnimationCycle; // offset 0x1AE8, size 0x4, align 4
    float32 m_flAnimationPlaybackSpeed; // offset 0x1AEC, size 0x4, align 4
    float32 m_flRareLoadoutAnimChance; // offset 0x1AF0, size 0x4, align 4
    bool m_bSetDefaultActivityOnSequenceFinished; // offset 0x1AF4, size 0x1, align 1
    char _pad_1AF5[0x3]; // offset 0x1AF5
    CUtlVector< CUtlSymbolLarge > m_vecActivityModifiers; // offset 0x1AF8, size 0x18, align 8
    DOTAPortraitEnvironmentType_t m_environment; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
    StartupBehavior_t m_nStartupBehavior; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x1E4]; // offset 0x1B1C
    CUtlSymbolLarge m_cameraName; // offset 0x1D00, size 0x8, align 8
    char _pad_1D08[0x50]; // offset 0x1D08
    ParticleIndex_t m_nPortraitParticle; // offset 0x1D58, size 0x4, align 255
    int32 m_nCourierType; // offset 0x1D5C, size 0x4, align 4
    char _pad_1D60[0x190]; // offset 0x1D60
};
