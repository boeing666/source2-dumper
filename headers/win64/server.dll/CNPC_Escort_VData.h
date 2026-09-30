#pragma once

class CNPC_Escort_VData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0xD50, align 0x8 [vtable] (server) {MGetKV3ClassDefaults MVDataOverlayType}
{
public:
    char _pad_0000[0xC50]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSpawnParticle; // offset 0xC50, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription
    float32 m_flEscortFriendlyHeroSlowMoveSearchRadius; // offset 0xD30, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flEscortFriendlyHeroFastMoveSearchRadius; // offset 0xD34, size 0x4, align 4 | MPropertyDescription
    float32 m_flEscortEnemyObjectiveSearchRadius; // offset 0xD38, size 0x4, align 4 | MPropertyDescription
    float32 m_flEscortEnemySlowWalkRadius; // offset 0xD3C, size 0x4, align 4 | MPropertyDescription
    float32 m_flCloseEnoughToNode; // offset 0xD40, size 0x4, align 4 | MPropertyDescription
    float32 m_flCatchUpSpeed; // offset 0xD44, size 0x4, align 4 | MPropertyDescription
    float32 m_flActivateDelay; // offset 0xD48, size 0x4, align 4 | MPropertyDescription
    char _pad_0D4C[0x4]; // offset 0xD4C
};
