#pragma once

class CSoundOpvarSetPointEntity : public CSoundOpvarSetPointBase /*0x0*/  // sizeof 0x630, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x540]; // offset 0x0
    CEntityIOOutput m_OnEnter; // offset 0x540, size 0x18, align 255
    CEntityIOOutput m_OnExit; // offset 0x558, size 0x18, align 255
    bool m_bAutoDisable; // offset 0x570, size 0x1, align 1
    char _pad_0571[0x43]; // offset 0x571
    float32 m_flDistanceMin; // offset 0x5B4, size 0x4, align 4
    float32 m_flDistanceMax; // offset 0x5B8, size 0x4, align 4
    float32 m_flDistanceMapMin; // offset 0x5BC, size 0x4, align 4
    float32 m_flDistanceMapMax; // offset 0x5C0, size 0x4, align 4
    float32 m_flOcclusionRadius; // offset 0x5C4, size 0x4, align 4
    float32 m_flOcclusionMin; // offset 0x5C8, size 0x4, align 4
    float32 m_flOcclusionMax; // offset 0x5CC, size 0x4, align 4
    float32 m_flValSetOnDisable; // offset 0x5D0, size 0x4, align 4
    bool m_bSetValueOnDisable; // offset 0x5D4, size 0x1, align 1
    bool m_bReloading; // offset 0x5D5, size 0x1, align 1 | MNotSaved
    char _pad_05D6[0x2]; // offset 0x5D6
    int32 m_nSimulationMode; // offset 0x5D8, size 0x4, align 4
    int32 m_nVisibilitySamples; // offset 0x5DC, size 0x4, align 4
    Vector m_vDynamicProxyPoint; // offset 0x5E0, size 0xC, align 4
    float32 m_flDynamicMaximumOcclusion; // offset 0x5EC, size 0x4, align 4
    CEntityHandle m_hDynamicEntity; // offset 0x5F0, size 0x4, align 4
    char _pad_05F4[0x4]; // offset 0x5F4
    CUtlSymbolLarge m_iszDynamicEntityName; // offset 0x5F8, size 0x8, align 8
    float32 m_flPathingDistanceNormFactor; // offset 0x600, size 0x4, align 4 | MNotSaved
    VectorWS m_vPathingSourcePos; // offset 0x604, size 0xC, align 4 | MNotSaved
    VectorWS m_vPathingListenerPos; // offset 0x610, size 0xC, align 4 | MNotSaved
    Vector m_vPathingDirection; // offset 0x61C, size 0xC, align 4 | MNotSaved
    int32 m_nPathingSourceIndex; // offset 0x628, size 0x4, align 4 | MNotSaved
    char _pad_062C[0x4]; // offset 0x62C
};
