#pragma once

class C_PortraitWorldUnit : public C_BaseCombatCharacter /*0x0*/  // sizeof 0x10F0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xEE8]; // offset 0x0
    bool m_bSuppressIntroEffects; // offset 0xEE8, size 0x1, align 1
    bool m_bIsAlternateLoadout; // offset 0xEE9, size 0x1, align 1
    bool m_bSpawnBackgroundModels; // offset 0xEEA, size 0x1, align 1
    bool m_bAnimateCloth; // offset 0xEEB, size 0x1, align 1
    bool m_bDeferredPortrait; // offset 0xEEC, size 0x1, align 1
    bool m_bShowParticleAssetModifiers; // offset 0xEED, size 0x1, align 1
    bool m_bIgnorePortraitInfo; // offset 0xEEE, size 0x1, align 1
    char _pad_0EEF[0x1]; // offset 0xEEF
    CUtlSymbolLarge m_BodyGroup; // offset 0xEF0, size 0x8, align 8
    float32 m_flStartingAnimationCycle; // offset 0xEF8, size 0x4, align 4
    float32 m_flRareLoadoutAnimChance; // offset 0xEFC, size 0x4, align 4
    char _pad_0F00[0x10]; // offset 0xF00
    CitadelPortraitEnvironmentType_t m_environment; // offset 0xF10, size 0x4, align 4
    StartupBehavior_t m_nStartupBehavior; // offset 0xF14, size 0x4, align 4
    char _pad_0F18[0x170]; // offset 0xF18
    CUtlSymbolLarge m_cameraName; // offset 0x1088, size 0x8, align 8
    char _pad_1090[0x30]; // offset 0x1090
    ParticleIndex_t m_nPortraitParticle; // offset 0x10C0, size 0x4, align 255
    ParticleIndex_t m_nAmbientParticle; // offset 0x10C4, size 0x4, align 255
    HeroID_t m_heroID; // offset 0x10C8, size 0x4, align 255
    char _pad_10CC[0x4]; // offset 0x10CC
    CUtlSymbolLarge m_strGraphBaseState; // offset 0x10D0, size 0x8, align 8
    CUtlSymbolLarge m_sceneName; // offset 0x10D8, size 0x8, align 8
    int32 m_nThinksUntilPresent; // offset 0x10E0, size 0x4, align 4
    char _pad_10E4[0xC]; // offset 0x10E4
};
