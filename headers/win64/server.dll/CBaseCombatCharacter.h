#pragma once

class CBaseCombatCharacter : public CBaseAnimatingOverlay /*0x0*/  // sizeof 0x9A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8D8]; // offset 0x0
    bool m_bForceServerRagdoll; // offset 0x8D8, size 0x1, align 1
    char _pad_08D9[0x7]; // offset 0x8D9
    CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // offset 0x8E0, size 0x18, align 8 | MNotSaved
    float32 m_impactEnergyScale; // offset 0x8F8, size 0x4, align 4
    bool m_bApplyStressDamage; // offset 0x8FC, size 0x1, align 1
    bool m_bDeathEventsDispatched; // offset 0x8FD, size 0x1, align 1
    char _pad_08FE[0x42]; // offset 0x8FE
    CUtlVector< RelationshipOverride_t > m_vecRelationships; // offset 0x940, size 0x18, align 8
    CUtlSymbolLarge m_strRelationships; // offset 0x958, size 0x8, align 8
    Hull_t m_eHull; // offset 0x960, size 0x4, align 4
    uint32 m_nNavHullIdx; // offset 0x964, size 0x4, align 4
    CMovementStatsProperty m_movementStats; // offset 0x968, size 0x40, align 8
};
