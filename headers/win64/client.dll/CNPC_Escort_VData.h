#pragma once

class CNPC_Escort_VData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0x1448, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataOverlayType}
{
public:
    char _pad_0000[0x1348]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strSpawnParticle; // offset 0x1348, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription
    float32 m_flEscortFriendlyHeroSlowMoveSearchRadius; // offset 0x1428, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flEscortFriendlyHeroFastMoveSearchRadius; // offset 0x142C, size 0x4, align 4 | MPropertyDescription
    float32 m_flEscortEnemyObjectiveSearchRadius; // offset 0x1430, size 0x4, align 4 | MPropertyDescription
    float32 m_flEscortEnemySlowWalkRadius; // offset 0x1434, size 0x4, align 4 | MPropertyDescription
    float32 m_flCloseEnoughToNode; // offset 0x1438, size 0x4, align 4 | MPropertyDescription
    float32 m_flCatchUpSpeed; // offset 0x143C, size 0x4, align 4 | MPropertyDescription
    float32 m_flActivateDelay; // offset 0x1440, size 0x4, align 4 | MPropertyDescription
    char _pad_1444[0x4]; // offset 0x1444
};
