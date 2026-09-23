#pragma once

class CSoundOpvarSetDomeEntity : public CSoundOpvarSetPointEntity /*0x0*/  // sizeof 0xA40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x920]; // offset 0x0
    CUtlVector< Vector > m_arDirections; // offset 0x920, size 0x18, align 8 | MNotSaved
    CUtlVector< float32 > m_arOpenness; // offset 0x938, size 0x18, align 8 | MNotSaved
    CUtlVector< int32 > m_arNeighbors; // offset 0x950, size 0x18, align 8 | MNotSaved
    int32 m_nCurrentIndex; // offset 0x968, size 0x4, align 4 | MNotSaved
    char _pad_096C[0x4]; // offset 0x96C
    CUtlVector< int32 > m_arClusterParent; // offset 0x970, size 0x18, align 8 | MNotSaved
    CUtlVector< int32 > m_arClusterSize; // offset 0x988, size 0x18, align 8 | MNotSaved
    CUtlVector< float32 > m_arClusterWeight; // offset 0x9A0, size 0x18, align 8 | MNotSaved
    CUtlVector< Vector > m_arClusterDirSum; // offset 0x9B8, size 0x18, align 8 | MNotSaved
    int32 m_nClusterIndex; // offset 0x9D0, size 0x4, align 4 | MNotSaved
    float32 m_flClusteredOpenness; // offset 0x9D4, size 0x4, align 4 | MNotSaved
    Vector m_vClusterDirection; // offset 0x9D8, size 0xC, align 4 | MNotSaved
    Vector m_vSmoothedOpenDir; // offset 0x9E4, size 0xC, align 4 | MNotSaved
    int32 m_nDirWarmupThinksRemaining; // offset 0x9F0, size 0x4, align 4 | MNotSaved
    VectorWS m_vLastTraceOrigin; // offset 0x9F4, size 0xC, align 4 | MNotSaved
    bool m_bTraceOriginValid; // offset 0xA00, size 0x1, align 1 | MNotSaved
    char _pad_0A01[0x3]; // offset 0xA01
    int32 m_nCatchUpThinksRemaining; // offset 0xA04, size 0x4, align 4 | MNotSaved
    bool m_bDiscontinuityPending; // offset 0xA08, size 0x1, align 1 | MNotSaved
    char _pad_0A09[0x3]; // offset 0xA09
    float32 m_flSmoothedOpenness; // offset 0xA0C, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLastSmoothTime; // offset 0xA10, size 0x4, align 255 | MNotSaved
    float32 m_flSize; // offset 0xA14, size 0x4, align 4
    int32 m_nTotalDirections; // offset 0xA18, size 0x4, align 4
    int32 m_nTracesPerFrame; // offset 0xA1C, size 0x4, align 4
    bool m_bDomeMode; // offset 0xA20, size 0x1, align 1
    bool m_bMultiWall; // offset 0xA21, size 0x1, align 1
    char _pad_0A22[0x2]; // offset 0xA22
    float32 m_flWallTransmission; // offset 0xA24, size 0x4, align 4
    int32 m_nClusterK; // offset 0xA28, size 0x4, align 4
    float32 m_flClusterP; // offset 0xA2C, size 0x4, align 4
    float32 m_flClusterBlend; // offset 0xA30, size 0x4, align 4
    float32 m_flOpennessExponent; // offset 0xA34, size 0x4, align 4
    float32 m_flShoulderExponent; // offset 0xA38, size 0x4, align 4
    float32 m_flSmoothHalfLife; // offset 0xA3C, size 0x4, align 4
};
