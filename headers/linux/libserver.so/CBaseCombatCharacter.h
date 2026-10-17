#pragma once

class CBaseCombatCharacter : public CBaseAnimatingOverlay /*0x0*/  // sizeof 0xC20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB50]; // offset 0x0
    bool m_bForceServerRagdoll; // offset 0xB50, size 0x1, align 1
    char _pad_0B51[0x7]; // offset 0xB51
    CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // offset 0xB58, size 0x18, align 8 | MNotSaved
    float32 m_impactEnergyScale; // offset 0xB70, size 0x4, align 4
    bool m_bApplyStressDamage; // offset 0xB74, size 0x1, align 1
    bool m_bDeathEventsDispatched; // offset 0xB75, size 0x1, align 1
    char _pad_0B76[0x42]; // offset 0xB76
    CUtlVector< RelationshipOverride_t > m_vecRelationships; // offset 0xBB8, size 0x18, align 8
    CUtlSymbolLarge m_strRelationships; // offset 0xBD0, size 0x8, align 8
    Hull_t m_eHull; // offset 0xBD8, size 0x4, align 4
    uint32 m_nNavHullIdx; // offset 0xBDC, size 0x4, align 4
    CMovementStatsProperty m_movementStats; // offset 0xBE0, size 0x40, align 8
};
