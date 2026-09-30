#pragma once

class CBaseCombatCharacter : public CBaseAnimGraph /*0x0*/  // sizeof 0xB60, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    bool m_bForceServerRagdoll; // offset 0xA90, size 0x1, align 1
    char _pad_0A91[0x7]; // offset 0xA91
    CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // offset 0xA98, size 0x18, align 8 | MNotSaved
    float32 m_impactEnergyScale; // offset 0xAB0, size 0x4, align 4
    bool m_bApplyStressDamage; // offset 0xAB4, size 0x1, align 1
    bool m_bDeathEventsDispatched; // offset 0xAB5, size 0x1, align 1
    char _pad_0AB6[0x42]; // offset 0xAB6
    CUtlVector< RelationshipOverride_t > m_vecRelationships; // offset 0xAF8, size 0x18, align 8
    CUtlSymbolLarge m_strRelationships; // offset 0xB10, size 0x8, align 8
    Hull_t m_eHull; // offset 0xB18, size 0x4, align 4
    uint32 m_nNavHullIdx; // offset 0xB1C, size 0x4, align 4
    CMovementStatsProperty m_movementStats; // offset 0xB20, size 0x40, align 8
};
