#pragma once

class CBaseCombatCharacter : public CBaseAnimatingOverlay /*0x0*/  // sizeof 0xC88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBB8]; // offset 0x0
    bool m_bForceServerRagdoll; // offset 0xBB8, size 0x1, align 1
    char _pad_0BB9[0x7]; // offset 0xBB9
    CNetworkUtlVectorBase< CHandle< CEconWearable > > m_hMyWearables; // offset 0xBC0, size 0x18, align 8 | MNotSaved
    float32 m_impactEnergyScale; // offset 0xBD8, size 0x4, align 4
    bool m_bApplyStressDamage; // offset 0xBDC, size 0x1, align 1
    bool m_bDeathEventsDispatched; // offset 0xBDD, size 0x1, align 1
    char _pad_0BDE[0x42]; // offset 0xBDE
    CUtlVector< RelationshipOverride_t > m_vecRelationships; // offset 0xC20, size 0x18, align 8
    CUtlSymbolLarge m_strRelationships; // offset 0xC38, size 0x8, align 8
    Hull_t m_eHull; // offset 0xC40, size 0x4, align 4
    uint32 m_nNavHullIdx; // offset 0xC44, size 0x4, align 4
    CMovementStatsProperty m_movementStats; // offset 0xC48, size 0x40, align 8
};
