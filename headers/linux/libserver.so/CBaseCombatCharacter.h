#pragma once

class CBaseCombatCharacter : public CBaseAnimGraph /*0x0*/  // sizeof 0xDF0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD20]; // offset 0x0
    bool m_bForceServerRagdoll; // offset 0xD20, size 0x1, align 1
    char _pad_0D21[0x7]; // offset 0xD21
    CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // offset 0xD28, size 0x18, align 8 | MNotSaved
    float32 m_impactEnergyScale; // offset 0xD40, size 0x4, align 4
    bool m_bApplyStressDamage; // offset 0xD44, size 0x1, align 1
    bool m_bDeathEventsDispatched; // offset 0xD45, size 0x1, align 1
    char _pad_0D46[0x42]; // offset 0xD46
    CUtlVector< RelationshipOverride_t > m_vecRelationships; // offset 0xD88, size 0x18, align 8
    CUtlSymbolLarge m_strRelationships; // offset 0xDA0, size 0x8, align 8
    Hull_t m_eHull; // offset 0xDA8, size 0x4, align 4
    uint32 m_nNavHullIdx; // offset 0xDAC, size 0x4, align 4
    CMovementStatsProperty m_movementStats; // offset 0xDB0, size 0x40, align 8
};
