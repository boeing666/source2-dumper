#pragma once

class CSoundOpvarSetPointEntity : public CSoundOpvarSetPointBase /*0x0*/  // sizeof 0x918, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    CEntityIOOutput m_OnEnter; // offset 0x828, size 0x18, align 255
    CEntityIOOutput m_OnExit; // offset 0x840, size 0x18, align 255
    bool m_bAutoDisable; // offset 0x858, size 0x1, align 1
    char _pad_0859[0x43]; // offset 0x859
    float32 m_flDistanceMin; // offset 0x89C, size 0x4, align 4
    float32 m_flDistanceMax; // offset 0x8A0, size 0x4, align 4
    float32 m_flDistanceMapMin; // offset 0x8A4, size 0x4, align 4
    float32 m_flDistanceMapMax; // offset 0x8A8, size 0x4, align 4
    float32 m_flOcclusionRadius; // offset 0x8AC, size 0x4, align 4
    float32 m_flOcclusionMin; // offset 0x8B0, size 0x4, align 4
    float32 m_flOcclusionMax; // offset 0x8B4, size 0x4, align 4
    float32 m_flValSetOnDisable; // offset 0x8B8, size 0x4, align 4
    bool m_bSetValueOnDisable; // offset 0x8BC, size 0x1, align 1
    bool m_bReloading; // offset 0x8BD, size 0x1, align 1 | MNotSaved
    char _pad_08BE[0x2]; // offset 0x8BE
    int32 m_nSimulationMode; // offset 0x8C0, size 0x4, align 4
    int32 m_nVisibilitySamples; // offset 0x8C4, size 0x4, align 4
    Vector m_vDynamicProxyPoint; // offset 0x8C8, size 0xC, align 4
    float32 m_flDynamicMaximumOcclusion; // offset 0x8D4, size 0x4, align 4
    CEntityHandle m_hDynamicEntity; // offset 0x8D8, size 0x4, align 4
    char _pad_08DC[0x4]; // offset 0x8DC
    CUtlSymbolLarge m_iszDynamicEntityName; // offset 0x8E0, size 0x8, align 8
    float32 m_flPathingDistanceNormFactor; // offset 0x8E8, size 0x4, align 4 | MNotSaved
    VectorWS m_vPathingSourcePos; // offset 0x8EC, size 0xC, align 4 | MNotSaved
    VectorWS m_vPathingListenerPos; // offset 0x8F8, size 0xC, align 4 | MNotSaved
    Vector m_vPathingDirection; // offset 0x904, size 0xC, align 4 | MNotSaved
    int32 m_nPathingSourceIndex; // offset 0x910, size 0x4, align 4 | MNotSaved
    char _pad_0914[0x4]; // offset 0x914
};
