#pragma once

class CBaseCombatCharacter : public CBaseAnimGraph /*0x0*/  // sizeof 0xD10, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC40]; // offset 0x0
    bool m_bForceServerRagdoll; // offset 0xC40, size 0x1, align 1
    char _pad_0C41[0x7]; // offset 0xC41
    CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // offset 0xC48, size 0x18, align 8 | MNotSaved
    float32 m_impactEnergyScale; // offset 0xC60, size 0x4, align 4
    bool m_bApplyStressDamage; // offset 0xC64, size 0x1, align 1
    bool m_bDeathEventsDispatched; // offset 0xC65, size 0x1, align 1
    char _pad_0C66[0x42]; // offset 0xC66
    CUtlVector< RelationshipOverride_t > m_vecRelationships; // offset 0xCA8, size 0x18, align 8
    CUtlSymbolLarge m_strRelationships; // offset 0xCC0, size 0x8, align 8
    Hull_t m_eHull; // offset 0xCC8, size 0x4, align 4
    uint32 m_nNavHullIdx; // offset 0xCCC, size 0x4, align 4
    CMovementStatsProperty m_movementStats; // offset 0xCD0, size 0x40, align 8
};
