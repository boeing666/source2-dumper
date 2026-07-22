#pragma once

class CBaseCombatCharacter : public CBaseAnimatingOverlay /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x798]; // offset 0x0
    bool m_bForceServerRagdoll; // offset 0x798, size 0x1, align 1
    char _pad_0799[0x7]; // offset 0x799
    CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // offset 0x7A0, size 0x18, align 8 | MNotSaved
    float32 m_impactEnergyScale; // offset 0x7B8, size 0x4, align 4
    bool m_bApplyStressDamage; // offset 0x7BC, size 0x1, align 1
    bool m_bDeathEventsDispatched; // offset 0x7BD, size 0x1, align 1
    char _pad_07BE[0x42]; // offset 0x7BE
    CUtlVector< RelationshipOverride_t > m_vecRelationships; // offset 0x800, size 0x18, align 8
    CUtlSymbolLarge m_strRelationships; // offset 0x818, size 0x8, align 8
    Hull_t m_eHull; // offset 0x820, size 0x4, align 4
    uint32 m_nNavHullIdx; // offset 0x824, size 0x4, align 4
    CMovementStatsProperty m_movementStats; // offset 0x828, size 0x40, align 8
};
