#pragma once

class CDOTA_BaseNPC_Building : public CDOTA_BaseNPC /*0x0*/  // sizeof 0x19B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18A0]; // offset 0x0
    int32 m_iDamageLevel; // offset 0x18A0, size 0x4, align 4
    char _pad_18A4[0x4]; // offset 0x18A4
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndex; // offset 0x18A8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndexDestruction; // offset 0x18B0, size 0x8, align 8
    QAngle m_angInitialAngles; // offset 0x18B8, size 0xC, align 4
    HSequence m_hHeroStatueSequence; // offset 0x18C4, size 0x4, align 255
    HSequence m_hConstantLayerSequence; // offset 0x18C8, size 0x4, align 255
    float32 m_fHeroStatueCycle; // offset 0x18CC, size 0x4, align 4
    int32 m_iHeroStatueStatusEffectIndex; // offset 0x18D0, size 0x4, align 4
    bool m_bHeroStatue; // offset 0x18D4, size 0x1, align 1
    bool m_bBattleCup; // offset 0x18D5, size 0x1, align 1
    char[32] m_HeroStatueInscription; // offset 0x18D6, size 0x20, align 1
    char _pad_18F6[0x2]; // offset 0x18F6
    PlayerID_t m_iHeroStatueOwnerPlayerID; // offset 0x18F8, size 0x4, align 255
    Color m_ParticleTintColor; // offset 0x18FC, size 0x4, align 1
    CGameSoundEventName m_sDestroySnd; // offset 0x1900, size 0x8, align 8
    CGameSoundEventName m_sDmgLvl1Snd; // offset 0x1908, size 0x8, align 8
    CGameSoundEventName m_sDmgLvl2Snd; // offset 0x1910, size 0x8, align 8
    CUtlSymbolLarge m_iszLinkedUnit; // offset 0x1918, size 0x8, align 8
    CUtlSymbolLarge m_iszAmbientEffectName; // offset 0x1920, size 0x8, align 8
    CUtlSymbolLarge m_iszDestructionEffectName; // offset 0x1928, size 0x8, align 8
    CUtlSymbolLarge m_iszDamageModelLevel1; // offset 0x1930, size 0x8, align 8
    CUtlSymbolLarge m_iszDamageModelLevel2; // offset 0x1938, size 0x8, align 8
    CUtlSymbolLarge m_iszDamageEffectLevel1; // offset 0x1940, size 0x8, align 8
    CUtlSymbolLarge m_iszDamageEffectLevel2; // offset 0x1948, size 0x8, align 8
    float32 m_flDamageThresholdLevel1; // offset 0x1950, size 0x4, align 4
    float32 m_flDamageThresholdLevel2; // offset 0x1954, size 0x4, align 4
    bool m_bVulnerableOnCreepSpawn; // offset 0x1958, size 0x1, align 1
    bool m_bHasOverriddenDestructionEffect; // offset 0x1959, size 0x1, align 1
    char _pad_195A[0x2]; // offset 0x195A
    int32 m_iUpgradeIdentifier; // offset 0x195C, size 0x4, align 4
    int32 m_iInvulnCount; // offset 0x1960, size 0x4, align 4
    int32 m_iPlayerOwner; // offset 0x1964, size 0x4, align 4
    bool m_bIsDireSide; // offset 0x1968, size 0x1, align 1
    char _pad_1969[0x3]; // offset 0x1969
    DOTA_LANE m_Lane; // offset 0x196C, size 0x4, align 4
    float32[2] m_fAmountAlongLane; // offset 0x1970, size 0x8, align 4
    Vector m_vOverrideInitialAngles; // offset 0x1978, size 0xC, align 4
    Vector m_vOverrideInitialAnglesBG; // offset 0x1984, size 0xC, align 4
    int32 m_nOverrideInitialAngles; // offset 0x1990, size 0x4, align 4
    char _pad_1994[0x4]; // offset 0x1994
    CountdownTimer m_IdleRareAnimationTime; // offset 0x1998, size 0x18, align 8
    FowCustomTeams_t m_nFoWTeam; // offset 0x19B0, size 0x4, align 4
    char _pad_19B4[0x4]; // offset 0x19B4
};
