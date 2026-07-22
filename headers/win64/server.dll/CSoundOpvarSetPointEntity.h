#pragma once

class CSoundOpvarSetPointEntity : public CSoundOpvarSetPointBase /*0x0*/  // sizeof 0x618, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x548]; // offset 0x0
    CEntityIOOutput m_OnEnter; // offset 0x548, size 0x18, align 255
    CEntityIOOutput m_OnExit; // offset 0x560, size 0x18, align 255
    bool m_bAutoDisable; // offset 0x578, size 0x1, align 1
    char _pad_0579[0x23]; // offset 0x579
    float32 m_flDistanceMin; // offset 0x59C, size 0x4, align 4
    float32 m_flDistanceMax; // offset 0x5A0, size 0x4, align 4
    float32 m_flDistanceMapMin; // offset 0x5A4, size 0x4, align 4
    float32 m_flDistanceMapMax; // offset 0x5A8, size 0x4, align 4
    float32 m_flOcclusionRadius; // offset 0x5AC, size 0x4, align 4
    float32 m_flOcclusionMin; // offset 0x5B0, size 0x4, align 4
    float32 m_flOcclusionMax; // offset 0x5B4, size 0x4, align 4
    float32 m_flValSetOnDisable; // offset 0x5B8, size 0x4, align 4
    bool m_bSetValueOnDisable; // offset 0x5BC, size 0x1, align 1
    bool m_bReloading; // offset 0x5BD, size 0x1, align 1 | MNotSaved
    char _pad_05BE[0x2]; // offset 0x5BE
    int32 m_nSimulationMode; // offset 0x5C0, size 0x4, align 4
    int32 m_nVisibilitySamples; // offset 0x5C4, size 0x4, align 4
    Vector m_vDynamicProxyPoint; // offset 0x5C8, size 0xC, align 4
    float32 m_flDynamicMaximumOcclusion; // offset 0x5D4, size 0x4, align 4
    CEntityHandle m_hDynamicEntity; // offset 0x5D8, size 0x4, align 4
    char _pad_05DC[0x4]; // offset 0x5DC
    CUtlSymbolLarge m_iszDynamicEntityName; // offset 0x5E0, size 0x8, align 8
    float32 m_flPathingDistanceNormFactor; // offset 0x5E8, size 0x4, align 4 | MNotSaved
    Vector m_vPathingSourcePos; // offset 0x5EC, size 0xC, align 4 | MNotSaved
    Vector m_vPathingListenerPos; // offset 0x5F8, size 0xC, align 4 | MNotSaved
    Vector m_vPathingDirection; // offset 0x604, size 0xC, align 4 | MNotSaved
    int32 m_nPathingSourceIndex; // offset 0x610, size 0x4, align 4 | MNotSaved
    char _pad_0614[0x4]; // offset 0x614
};
