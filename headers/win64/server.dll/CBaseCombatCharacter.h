#pragma once

class CBaseCombatCharacter : public CBaseAnimGraph /*0x0*/  // sizeof 0xA30, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x960]; // offset 0x0
    bool m_bForceServerRagdoll; // offset 0x960, size 0x1, align 1
    char _pad_0961[0x7]; // offset 0x961
    CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // offset 0x968, size 0x18, align 8 | MNotSaved
    float32 m_impactEnergyScale; // offset 0x980, size 0x4, align 4
    bool m_bApplyStressDamage; // offset 0x984, size 0x1, align 1
    bool m_bDeathEventsDispatched; // offset 0x985, size 0x1, align 1
    char _pad_0986[0x42]; // offset 0x986
    CUtlVector< RelationshipOverride_t > m_vecRelationships; // offset 0x9C8, size 0x18, align 8
    CUtlSymbolLarge m_strRelationships; // offset 0x9E0, size 0x8, align 8
    Hull_t m_eHull; // offset 0x9E8, size 0x4, align 4
    uint32 m_nNavHullIdx; // offset 0x9EC, size 0x4, align 4
    CMovementStatsProperty m_movementStats; // offset 0x9F0, size 0x40, align 8
};
