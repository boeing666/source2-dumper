#pragma once

class CBaseCombatCharacter : public CBaseAnimatingOverlay /*0x0*/  // sizeof 0xB40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA70]; // offset 0x0
    bool m_bForceServerRagdoll; // offset 0xA70, size 0x1, align 1
    char _pad_0A71[0x7]; // offset 0xA71
    CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // offset 0xA78, size 0x18, align 8 | MNotSaved
    float32 m_impactEnergyScale; // offset 0xA90, size 0x4, align 4
    bool m_bApplyStressDamage; // offset 0xA94, size 0x1, align 1
    bool m_bDeathEventsDispatched; // offset 0xA95, size 0x1, align 1
    char _pad_0A96[0x42]; // offset 0xA96
    CUtlVector< RelationshipOverride_t > m_vecRelationships; // offset 0xAD8, size 0x18, align 8
    CUtlSymbolLarge m_strRelationships; // offset 0xAF0, size 0x8, align 8
    Hull_t m_eHull; // offset 0xAF8, size 0x4, align 4
    uint32 m_nNavHullIdx; // offset 0xAFC, size 0x4, align 4
    CMovementStatsProperty m_movementStats; // offset 0xB00, size 0x40, align 8
};
