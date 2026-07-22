#pragma once

class CDOTA_BaseNPC_Building : public CDOTA_BaseNPC /*0x0*/  // sizeof 0x1C98, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1B80]; // offset 0x0
    int32 m_iDamageLevel; // offset 0x1B80, size 0x4, align 4
    char _pad_1B84[0x4]; // offset 0x1B84
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndex; // offset 0x1B88, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndexDestruction; // offset 0x1B90, size 0x8, align 8
    QAngle m_angInitialAngles; // offset 0x1B98, size 0xC, align 4
    HSequence m_hHeroStatueSequence; // offset 0x1BA4, size 0x4, align 255
    HSequence m_hConstantLayerSequence; // offset 0x1BA8, size 0x4, align 255
    float32 m_fHeroStatueCycle; // offset 0x1BAC, size 0x4, align 4
    int32 m_iHeroStatueStatusEffectIndex; // offset 0x1BB0, size 0x4, align 4
    bool m_bHeroStatue; // offset 0x1BB4, size 0x1, align 1
    bool m_bBattleCup; // offset 0x1BB5, size 0x1, align 1
    char[32] m_HeroStatueInscription; // offset 0x1BB6, size 0x20, align 1
    char _pad_1BD6[0x2]; // offset 0x1BD6
    PlayerID_t m_iHeroStatueOwnerPlayerID; // offset 0x1BD8, size 0x4, align 255
    Color m_ParticleTintColor; // offset 0x1BDC, size 0x4, align 1
    CGameSoundEventName m_sDestroySnd; // offset 0x1BE0, size 0x8, align 8
    CGameSoundEventName m_sDmgLvl1Snd; // offset 0x1BE8, size 0x8, align 8
    CGameSoundEventName m_sDmgLvl2Snd; // offset 0x1BF0, size 0x8, align 8
    CUtlSymbolLarge m_iszLinkedUnit; // offset 0x1BF8, size 0x8, align 8
    CUtlSymbolLarge m_iszAmbientEffectName; // offset 0x1C00, size 0x8, align 8
    CUtlSymbolLarge m_iszDestructionEffectName; // offset 0x1C08, size 0x8, align 8
    CUtlSymbolLarge m_iszDamageModelLevel1; // offset 0x1C10, size 0x8, align 8
    CUtlSymbolLarge m_iszDamageModelLevel2; // offset 0x1C18, size 0x8, align 8
    CUtlSymbolLarge m_iszDamageEffectLevel1; // offset 0x1C20, size 0x8, align 8
    CUtlSymbolLarge m_iszDamageEffectLevel2; // offset 0x1C28, size 0x8, align 8
    float32 m_flDamageThresholdLevel1; // offset 0x1C30, size 0x4, align 4
    float32 m_flDamageThresholdLevel2; // offset 0x1C34, size 0x4, align 4
    bool m_bVulnerableOnCreepSpawn; // offset 0x1C38, size 0x1, align 1
    bool m_bHasOverriddenDestructionEffect; // offset 0x1C39, size 0x1, align 1
    char _pad_1C3A[0x2]; // offset 0x1C3A
    int32 m_iUpgradeIdentifier; // offset 0x1C3C, size 0x4, align 4
    int32 m_iInvulnCount; // offset 0x1C40, size 0x4, align 4
    int32 m_iPlayerOwner; // offset 0x1C44, size 0x4, align 4
    bool m_bIsDireSide; // offset 0x1C48, size 0x1, align 1
    char _pad_1C49[0x3]; // offset 0x1C49
    DOTA_LANE m_Lane; // offset 0x1C4C, size 0x4, align 4
    float32[2] m_fAmountAlongLane; // offset 0x1C50, size 0x8, align 4
    Vector m_vOverrideInitialAngles; // offset 0x1C58, size 0xC, align 4
    Vector m_vOverrideInitialAnglesBG; // offset 0x1C64, size 0xC, align 4
    int32 m_nOverrideInitialAngles; // offset 0x1C70, size 0x4, align 4
    char _pad_1C74[0x4]; // offset 0x1C74
    CountdownTimer m_IdleRareAnimationTime; // offset 0x1C78, size 0x18, align 8
    FowCustomTeams_t m_nFoWTeam; // offset 0x1C90, size 0x4, align 4
    char _pad_1C94[0x4]; // offset 0x1C94
};
