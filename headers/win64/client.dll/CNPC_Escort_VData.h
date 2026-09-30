#pragma once

class CNPC_Escort_VData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0xD30, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataOverlayType}
{
public:
    char _pad_0000[0xC30]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSpawnParticle; // offset 0xC30, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription
    float32 m_flEscortFriendlyHeroSlowMoveSearchRadius; // offset 0xD10, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flEscortFriendlyHeroFastMoveSearchRadius; // offset 0xD14, size 0x4, align 4 | MPropertyDescription
    float32 m_flEscortEnemyObjectiveSearchRadius; // offset 0xD18, size 0x4, align 4 | MPropertyDescription
    float32 m_flEscortEnemySlowWalkRadius; // offset 0xD1C, size 0x4, align 4 | MPropertyDescription
    float32 m_flCloseEnoughToNode; // offset 0xD20, size 0x4, align 4 | MPropertyDescription
    float32 m_flCatchUpSpeed; // offset 0xD24, size 0x4, align 4 | MPropertyDescription
    float32 m_flActivateDelay; // offset 0xD28, size 0x4, align 4 | MPropertyDescription
    char _pad_0D2C[0x4]; // offset 0xD2C
};
