#pragma once

class CNPC_NeutralBugVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x2C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    int32 m_iGoldReward; // offset 0x28, size 0x4, align 4
    float32 m_flRadius; // offset 0x2C, size 0x4, align 4
    float32 m_flDropDownRate; // offset 0x30, size 0x4, align 4
    float32 m_flRespawnTime; // offset 0x34, size 0x4, align 4
    float32 m_flRespawnTimeHeroTest; // offset 0x38, size 0x4, align 4
    float32 m_flWaitTimeMax; // offset 0x3C, size 0x4, align 4
    float32 m_flPlayerCheckThink; // offset 0x40, size 0x4, align 4
    float32 m_flPlayerCheckDistanceM; // offset 0x44, size 0x4, align 4
    float32 m_flMaxMoveDistance; // offset 0x48, size 0x4, align 4
    float32 m_flMinMoveDistance; // offset 0x4C, size 0x4, align 4
    float32 m_flMoveSpeedMin; // offset 0x50, size 0x4, align 4
    float32 m_flMoveSpeedMax; // offset 0x54, size 0x4, align 4
    float32 m_flValidDirectionDist; // offset 0x58, size 0x4, align 4
    float32 m_flValidMinDist; // offset 0x5C, size 0x4, align 4
    CSubclassName< 3 > m_sReplacementSubclass; // offset 0x60, size 0x10, align 8
    float32 m_flReplacementChance; // offset 0x70, size 0x4, align 4
    char _pad_0074[0x4]; // offset 0x74
    CSubclassName< 3 > m_sDeathSwarmSubclass; // offset 0x78, size 0x10, align 8
    int32 m_nDeathSwarmCount; // offset 0x88, size 0x4, align 4
    HeroID_t m_DeathSwarmImmuneHeroID; // offset 0x8C, size 0x4, align 255
    float32 m_flDeathSwarmSpawnDistMin; // offset 0x90, size 0x4, align 4 | MPropertyDescription
    float32 m_flDeathSwarmSpawnDistMax; // offset 0x94, size 0x4, align 4
    float32 m_flStepHeight; // offset 0x98, size 0x4, align 4
    float32 m_flChaseLifetime; // offset 0x9C, size 0x4, align 4
    float32 m_flAttachRadius; // offset 0xA0, size 0x4, align 4
    float32 m_flAttachHeight; // offset 0xA4, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_SwarmModifier; // offset 0xA8, size 0x10, align 8
    bool m_bIsRat; // offset 0xB8, size 0x1, align 1 | MPropertyStartGroup
    char _pad_00B9[0x7]; // offset 0xB9
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // offset 0xC0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathParticle; // offset 0x1A0, size 0xE0, align 8
    float32 m_flModelScale; // offset 0x280, size 0x4, align 4
    char _pad_0284[0x4]; // offset 0x284
    CUtlVector< CUtlString > m_vecRunSequences; // offset 0x288, size 0x18, align 8
    CSoundEventName m_strLastHitSound; // offset 0x2A0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strRatAttachSound; // offset 0x2B0, size 0x10, align 8
};
