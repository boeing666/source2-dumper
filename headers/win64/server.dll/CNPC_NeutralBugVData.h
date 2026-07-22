#pragma once

class CNPC_NeutralBugVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x220, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
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
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // offset 0x60, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathParticle; // offset 0x140, size 0xE0, align 8
};
