#pragma once

class CDOTA_BaseNPC_Building : public CDOTA_BaseNPC /*0x0*/  // sizeof 0x1E20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1D0C]; // offset 0x0
    int32 m_iDamageLevel; // offset 0x1D0C, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndex; // offset 0x1D10, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndexDestruction; // offset 0x1D18, size 0x8, align 8
    QAngle m_angInitialAngles; // offset 0x1D20, size 0xC, align 4
    HSequence m_hHeroStatueSequence; // offset 0x1D2C, size 0x4, align 255
    HSequence m_hConstantLayerSequence; // offset 0x1D30, size 0x4, align 255
    float32 m_fHeroStatueCycle; // offset 0x1D34, size 0x4, align 4
    int32 m_iHeroStatueStatusEffectIndex; // offset 0x1D38, size 0x4, align 4
    bool m_bHeroStatue; // offset 0x1D3C, size 0x1, align 1
    bool m_bBattleCup; // offset 0x1D3D, size 0x1, align 1
    char[32] m_HeroStatueInscription; // offset 0x1D3E, size 0x20, align 1
    char _pad_1D5E[0x2]; // offset 0x1D5E
    PlayerID_t m_iHeroStatueOwnerPlayerID; // offset 0x1D60, size 0x4, align 255
    Color m_ParticleTintColor; // offset 0x1D64, size 0x4, align 4
    CGameSoundEventName m_sDestroySnd; // offset 0x1D68, size 0x8, align 8
    CGameSoundEventName m_sDmgLvl1Snd; // offset 0x1D70, size 0x8, align 8
    CGameSoundEventName m_sDmgLvl2Snd; // offset 0x1D78, size 0x8, align 8
    CUtlSymbolLarge m_iszLinkedUnit; // offset 0x1D80, size 0x8, align 8
    CUtlSymbolLarge m_iszAmbientEffectName; // offset 0x1D88, size 0x8, align 8
    CUtlSymbolLarge m_iszDestructionEffectName; // offset 0x1D90, size 0x8, align 8
    CUtlSymbolLarge m_iszDamageModelLevel1; // offset 0x1D98, size 0x8, align 8
    CUtlSymbolLarge m_iszDamageModelLevel2; // offset 0x1DA0, size 0x8, align 8
    CUtlSymbolLarge m_iszDamageEffectLevel1; // offset 0x1DA8, size 0x8, align 8
    CUtlSymbolLarge m_iszDamageEffectLevel2; // offset 0x1DB0, size 0x8, align 8
    float32 m_flDamageThresholdLevel1; // offset 0x1DB8, size 0x4, align 4
    float32 m_flDamageThresholdLevel2; // offset 0x1DBC, size 0x4, align 4
    bool m_bVulnerableOnCreepSpawn; // offset 0x1DC0, size 0x1, align 1
    bool m_bHasOverriddenDestructionEffect; // offset 0x1DC1, size 0x1, align 1
    char _pad_1DC2[0x2]; // offset 0x1DC2
    int32 m_iUpgradeIdentifier; // offset 0x1DC4, size 0x4, align 4
    int32 m_iInvulnCount; // offset 0x1DC8, size 0x4, align 4
    int32 m_iPlayerOwner; // offset 0x1DCC, size 0x4, align 4
    bool m_bIsDireSide; // offset 0x1DD0, size 0x1, align 1
    char _pad_1DD1[0x3]; // offset 0x1DD1
    DOTA_LANE m_Lane; // offset 0x1DD4, size 0x4, align 4
    float32[2] m_fAmountAlongLane; // offset 0x1DD8, size 0x8, align 4
    Vector m_vOverrideInitialAngles; // offset 0x1DE0, size 0xC, align 4
    Vector m_vOverrideInitialAnglesBG; // offset 0x1DEC, size 0xC, align 4
    int32 m_nOverrideInitialAngles; // offset 0x1DF8, size 0x4, align 4
    char _pad_1DFC[0x4]; // offset 0x1DFC
    CountdownTimer m_IdleRareAnimationTime; // offset 0x1E00, size 0x18, align 8
    FowCustomTeams_t m_nFoWTeam; // offset 0x1E18, size 0x4, align 4
    char _pad_1E1C[0x4]; // offset 0x1E1C
};
