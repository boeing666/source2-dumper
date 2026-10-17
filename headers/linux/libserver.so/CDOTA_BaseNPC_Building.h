#pragma once

class CDOTA_BaseNPC_Building : public CDOTA_BaseNPC /*0x0*/  // sizeof 0x1D90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1C78]; // offset 0x0
    int32 m_iDamageLevel; // offset 0x1C78, size 0x4, align 4
    char _pad_1C7C[0x4]; // offset 0x1C7C
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndex; // offset 0x1C80, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndexDestruction; // offset 0x1C88, size 0x8, align 8
    QAngle m_angInitialAngles; // offset 0x1C90, size 0xC, align 4
    HSequence m_hHeroStatueSequence; // offset 0x1C9C, size 0x4, align 255
    HSequence m_hConstantLayerSequence; // offset 0x1CA0, size 0x4, align 255
    float32 m_fHeroStatueCycle; // offset 0x1CA4, size 0x4, align 4
    int32 m_iHeroStatueStatusEffectIndex; // offset 0x1CA8, size 0x4, align 4
    bool m_bHeroStatue; // offset 0x1CAC, size 0x1, align 1
    bool m_bBattleCup; // offset 0x1CAD, size 0x1, align 1
    char[32] m_HeroStatueInscription; // offset 0x1CAE, size 0x20, align 1
    char _pad_1CCE[0x2]; // offset 0x1CCE
    PlayerID_t m_iHeroStatueOwnerPlayerID; // offset 0x1CD0, size 0x4, align 255
    Color m_ParticleTintColor; // offset 0x1CD4, size 0x4, align 4
    CGameSoundEventName m_sDestroySnd; // offset 0x1CD8, size 0x8, align 8
    CGameSoundEventName m_sDmgLvl1Snd; // offset 0x1CE0, size 0x8, align 8
    CGameSoundEventName m_sDmgLvl2Snd; // offset 0x1CE8, size 0x8, align 8
    CUtlSymbolLarge m_iszLinkedUnit; // offset 0x1CF0, size 0x8, align 8
    CUtlSymbolLarge m_iszAmbientEffectName; // offset 0x1CF8, size 0x8, align 8
    CUtlSymbolLarge m_iszDestructionEffectName; // offset 0x1D00, size 0x8, align 8
    CUtlSymbolLarge m_iszDamageModelLevel1; // offset 0x1D08, size 0x8, align 8
    CUtlSymbolLarge m_iszDamageModelLevel2; // offset 0x1D10, size 0x8, align 8
    CUtlSymbolLarge m_iszDamageEffectLevel1; // offset 0x1D18, size 0x8, align 8
    CUtlSymbolLarge m_iszDamageEffectLevel2; // offset 0x1D20, size 0x8, align 8
    float32 m_flDamageThresholdLevel1; // offset 0x1D28, size 0x4, align 4
    float32 m_flDamageThresholdLevel2; // offset 0x1D2C, size 0x4, align 4
    bool m_bVulnerableOnCreepSpawn; // offset 0x1D30, size 0x1, align 1
    bool m_bHasOverriddenDestructionEffect; // offset 0x1D31, size 0x1, align 1
    char _pad_1D32[0x2]; // offset 0x1D32
    int32 m_iUpgradeIdentifier; // offset 0x1D34, size 0x4, align 4
    int32 m_iInvulnCount; // offset 0x1D38, size 0x4, align 4
    int32 m_iPlayerOwner; // offset 0x1D3C, size 0x4, align 4
    bool m_bIsDireSide; // offset 0x1D40, size 0x1, align 1
    char _pad_1D41[0x3]; // offset 0x1D41
    DOTA_LANE m_Lane; // offset 0x1D44, size 0x4, align 4
    float32[2] m_fAmountAlongLane; // offset 0x1D48, size 0x8, align 4
    Vector m_vOverrideInitialAngles; // offset 0x1D50, size 0xC, align 4
    Vector m_vOverrideInitialAnglesBG; // offset 0x1D5C, size 0xC, align 4
    int32 m_nOverrideInitialAngles; // offset 0x1D68, size 0x4, align 4
    char _pad_1D6C[0x4]; // offset 0x1D6C
    CountdownTimer m_IdleRareAnimationTime; // offset 0x1D70, size 0x18, align 8
    FowCustomTeams_t m_nFoWTeam; // offset 0x1D88, size 0x4, align 4
    char _pad_1D8C[0x4]; // offset 0x1D8C
};
