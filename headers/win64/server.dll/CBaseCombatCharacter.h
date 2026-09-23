#pragma once

class CBaseCombatCharacter : public CBaseAnimGraph /*0x0*/  // sizeof 0xB10, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA40]; // offset 0x0
    bool m_bForceServerRagdoll; // offset 0xA40, size 0x1, align 1
    char _pad_0A41[0x7]; // offset 0xA41
    CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // offset 0xA48, size 0x18, align 8 | MNotSaved
    float32 m_impactEnergyScale; // offset 0xA60, size 0x4, align 4
    bool m_bApplyStressDamage; // offset 0xA64, size 0x1, align 1
    bool m_bDeathEventsDispatched; // offset 0xA65, size 0x1, align 1
    char _pad_0A66[0x42]; // offset 0xA66
    CUtlVector< RelationshipOverride_t > m_vecRelationships; // offset 0xAA8, size 0x18, align 8
    CUtlSymbolLarge m_strRelationships; // offset 0xAC0, size 0x8, align 8
    Hull_t m_eHull; // offset 0xAC8, size 0x4, align 4
    uint32 m_nNavHullIdx; // offset 0xACC, size 0x4, align 4
    CMovementStatsProperty m_movementStats; // offset 0xAD0, size 0x40, align 8
};
