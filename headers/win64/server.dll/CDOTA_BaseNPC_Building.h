#pragma once

class CDOTA_BaseNPC_Building : public CDOTA_BaseNPC /*0x0*/  // sizeof 0x1AB0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1998]; // offset 0x0
    int32 m_iDamageLevel; // offset 0x1998, size 0x4, align 4
    char _pad_199C[0x4]; // offset 0x199C
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndex; // offset 0x19A0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndexDestruction; // offset 0x19A8, size 0x8, align 8
    QAngle m_angInitialAngles; // offset 0x19B0, size 0xC, align 4
    HSequence m_hHeroStatueSequence; // offset 0x19BC, size 0x4, align 255
    HSequence m_hConstantLayerSequence; // offset 0x19C0, size 0x4, align 255
    float32 m_fHeroStatueCycle; // offset 0x19C4, size 0x4, align 4
    int32 m_iHeroStatueStatusEffectIndex; // offset 0x19C8, size 0x4, align 4
    bool m_bHeroStatue; // offset 0x19CC, size 0x1, align 1
    bool m_bBattleCup; // offset 0x19CD, size 0x1, align 1
    char[32] m_HeroStatueInscription; // offset 0x19CE, size 0x20, align 1
    char _pad_19EE[0x2]; // offset 0x19EE
    PlayerID_t m_iHeroStatueOwnerPlayerID; // offset 0x19F0, size 0x4, align 255
    Color m_ParticleTintColor; // offset 0x19F4, size 0x4, align 4
    CGameSoundEventName m_sDestroySnd; // offset 0x19F8, size 0x8, align 8
    CGameSoundEventName m_sDmgLvl1Snd; // offset 0x1A00, size 0x8, align 8
    CGameSoundEventName m_sDmgLvl2Snd; // offset 0x1A08, size 0x8, align 8
    CUtlSymbolLarge m_iszLinkedUnit; // offset 0x1A10, size 0x8, align 8
    CUtlSymbolLarge m_iszAmbientEffectName; // offset 0x1A18, size 0x8, align 8
    CUtlSymbolLarge m_iszDestructionEffectName; // offset 0x1A20, size 0x8, align 8
    CUtlSymbolLarge m_iszDamageModelLevel1; // offset 0x1A28, size 0x8, align 8
    CUtlSymbolLarge m_iszDamageModelLevel2; // offset 0x1A30, size 0x8, align 8
    CUtlSymbolLarge m_iszDamageEffectLevel1; // offset 0x1A38, size 0x8, align 8
    CUtlSymbolLarge m_iszDamageEffectLevel2; // offset 0x1A40, size 0x8, align 8
    float32 m_flDamageThresholdLevel1; // offset 0x1A48, size 0x4, align 4
    float32 m_flDamageThresholdLevel2; // offset 0x1A4C, size 0x4, align 4
    bool m_bVulnerableOnCreepSpawn; // offset 0x1A50, size 0x1, align 1
    bool m_bHasOverriddenDestructionEffect; // offset 0x1A51, size 0x1, align 1
    char _pad_1A52[0x2]; // offset 0x1A52
    int32 m_iUpgradeIdentifier; // offset 0x1A54, size 0x4, align 4
    int32 m_iInvulnCount; // offset 0x1A58, size 0x4, align 4
    int32 m_iPlayerOwner; // offset 0x1A5C, size 0x4, align 4
    bool m_bIsDireSide; // offset 0x1A60, size 0x1, align 1
    char _pad_1A61[0x3]; // offset 0x1A61
    DOTA_LANE m_Lane; // offset 0x1A64, size 0x4, align 4
    float32[2] m_fAmountAlongLane; // offset 0x1A68, size 0x8, align 4
    Vector m_vOverrideInitialAngles; // offset 0x1A70, size 0xC, align 4
    Vector m_vOverrideInitialAnglesBG; // offset 0x1A7C, size 0xC, align 4
    int32 m_nOverrideInitialAngles; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
    CountdownTimer m_IdleRareAnimationTime; // offset 0x1A90, size 0x18, align 8
    FowCustomTeams_t m_nFoWTeam; // offset 0x1AA8, size 0x4, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
};
