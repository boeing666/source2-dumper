#pragma once

class CSoundOpvarSetDomeEntity : public CSoundOpvarSetPointEntity /*0x0*/  // sizeof 0xA38, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x918]; // offset 0x0
    CUtlVector< Vector > m_arDirections; // offset 0x918, size 0x18, align 8 | MNotSaved
    CUtlVector< float32 > m_arOpenness; // offset 0x930, size 0x18, align 8 | MNotSaved
    CUtlVector< int32 > m_arNeighbors; // offset 0x948, size 0x18, align 8 | MNotSaved
    int32 m_nCurrentIndex; // offset 0x960, size 0x4, align 4 | MNotSaved
    char _pad_0964[0x4]; // offset 0x964
    CUtlVector< int32 > m_arClusterParent; // offset 0x968, size 0x18, align 8 | MNotSaved
    CUtlVector< int32 > m_arClusterSize; // offset 0x980, size 0x18, align 8 | MNotSaved
    CUtlVector< float32 > m_arClusterWeight; // offset 0x998, size 0x18, align 8 | MNotSaved
    CUtlVector< Vector > m_arClusterDirSum; // offset 0x9B0, size 0x18, align 8 | MNotSaved
    int32 m_nClusterIndex; // offset 0x9C8, size 0x4, align 4 | MNotSaved
    float32 m_flClusteredOpenness; // offset 0x9CC, size 0x4, align 4 | MNotSaved
    Vector m_vClusterDirection; // offset 0x9D0, size 0xC, align 4 | MNotSaved
    Vector m_vSmoothedOpenDir; // offset 0x9DC, size 0xC, align 4 | MNotSaved
    int32 m_nDirWarmupThinksRemaining; // offset 0x9E8, size 0x4, align 4 | MNotSaved
    VectorWS m_vLastTraceOrigin; // offset 0x9EC, size 0xC, align 4 | MNotSaved
    bool m_bTraceOriginValid; // offset 0x9F8, size 0x1, align 1 | MNotSaved
    char _pad_09F9[0x3]; // offset 0x9F9
    int32 m_nCatchUpThinksRemaining; // offset 0x9FC, size 0x4, align 4 | MNotSaved
    bool m_bDiscontinuityPending; // offset 0xA00, size 0x1, align 1 | MNotSaved
    char _pad_0A01[0x3]; // offset 0xA01
    float32 m_flSmoothedOpenness; // offset 0xA04, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLastSmoothTime; // offset 0xA08, size 0x4, align 255 | MNotSaved
    float32 m_flSize; // offset 0xA0C, size 0x4, align 4
    int32 m_nTotalDirections; // offset 0xA10, size 0x4, align 4
    int32 m_nTracesPerFrame; // offset 0xA14, size 0x4, align 4
    bool m_bDomeMode; // offset 0xA18, size 0x1, align 1
    bool m_bMultiWall; // offset 0xA19, size 0x1, align 1
    char _pad_0A1A[0x2]; // offset 0xA1A
    float32 m_flWallTransmission; // offset 0xA1C, size 0x4, align 4
    int32 m_nClusterK; // offset 0xA20, size 0x4, align 4
    float32 m_flClusterP; // offset 0xA24, size 0x4, align 4
    float32 m_flClusterBlend; // offset 0xA28, size 0x4, align 4
    float32 m_flOpennessExponent; // offset 0xA2C, size 0x4, align 4
    float32 m_flShoulderExponent; // offset 0xA30, size 0x4, align 4
    float32 m_flSmoothHalfLife; // offset 0xA34, size 0x4, align 4
};
