#pragma once

class CBaseNPCMaker : public CBaseEntity /*0x0*/  // sizeof 0x590, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    int32 m_nMaxNumNPCs; // offset 0x4B0, size 0x4, align 4
    float32 m_flSpawnFrequency; // offset 0x4B4, size 0x4, align 4
    float32 m_flRetryFrequency; // offset 0x4B8, size 0x4, align 4
    int32 m_nHullCheckMode; // offset 0x4BC, size 0x4, align 4
    CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnSpawnNPC; // offset 0x4C0, size 0x20, align 8
    CEntityIOOutput m_OnSpawnedNPCDied; // offset 0x4E0, size 0x18, align 255
    CEntityIOOutput m_OnAllSpawned; // offset 0x4F8, size 0x18, align 255
    CEntityIOOutput m_OnAllSpawnedDead; // offset 0x510, size 0x18, align 255
    CEntityIOOutput m_OnAllLiveChildrenDead; // offset 0x528, size 0x18, align 255
    int32 m_nLiveChildren; // offset 0x540, size 0x4, align 4
    int32 m_nMaxLiveChildren; // offset 0x544, size 0x4, align 4
    int32 m_nMinSpawnDistance; // offset 0x548, size 0x4, align 4
    int32 m_nSpawnThreshold; // offset 0x54C, size 0x4, align 4
    int32 m_nBatchCount; // offset 0x550, size 0x4, align 4
    float32 m_flRadius; // offset 0x554, size 0x4, align 4
    bool m_bDisabled; // offset 0x558, size 0x1, align 1
    bool m_bSpawning; // offset 0x559, size 0x1, align 1
    bool m_bZeroPitchAndRoll; // offset 0x55A, size 0x1, align 1
    char _pad_055B[0x1]; // offset 0x55B
    CHandle< CBaseEntity > m_hIgnoreEntity; // offset 0x55C, size 0x4, align 4
    CUtlSymbolLarge m_iszIgnoreEnt; // offset 0x560, size 0x8, align 8
    CUtlSymbolLarge m_iszDestinationGroup; // offset 0x568, size 0x8, align 8
    CHandle< CNPCSpawnDestination > m_hSpawnEntity; // offset 0x570, size 0x4, align 4
    CHandle< CAI_BaseNPC > m_hSpawnedNPC; // offset 0x574, size 0x4, align 4
    int32 m_nCurrentBatchCount; // offset 0x578, size 0x4, align 4
    CBaseNPCMaker::VisibilityCriterion_t m_CriterionVisibility; // offset 0x57C, size 0x4, align 4
    CBaseNPCMaker::ThreeStateDist_t m_CriterionDistance; // offset 0x580, size 0x4, align 4
    char _pad_0584[0xC]; // offset 0x584
};
