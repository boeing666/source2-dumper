#pragma once

class CBaseCombatCharacter : public CBaseFlex /*0x0*/  // sizeof 0xBA0, align 0x10 [vtable] (server) {MNetworkExcludeByUserGroup MNetworkVarNames}
{
public:
    char _pad_0000[0xAE0]; // offset 0x0
    bool m_bForceServerRagdoll; // offset 0xAE0, size 0x1, align 1
    char _pad_0AE1[0x7]; // offset 0xAE1
    CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // offset 0xAE8, size 0x18, align 8 | MNetworkEnable MNotSaved
    float32 m_impactEnergyScale; // offset 0xB00, size 0x4, align 4
    bool m_bApplyStressDamage; // offset 0xB04, size 0x1, align 1
    bool m_bDeathEventsDispatched; // offset 0xB05, size 0x1, align 1
    char _pad_0B06[0x42]; // offset 0xB06
    CUtlVector< RelationshipOverride_t >* m_pVecRelationships; // offset 0xB48, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_strRelationships; // offset 0xB50, size 0x8, align 8
    Hull_t m_eHull; // offset 0xB58, size 0x4, align 4
    uint32 m_nNavHullIdx; // offset 0xB5C, size 0x4, align 4
    CMovementStatsProperty m_movementStats; // offset 0xB60, size 0x40, align 255
};
