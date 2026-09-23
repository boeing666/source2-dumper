#pragma once

class CSoundOpvarSetDomeEntity : public CSoundOpvarSetPointEntity /*0x0*/  // sizeof 0x760, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x640]; // offset 0x0
    CUtlVector< Vector > m_arDirections; // offset 0x640, size 0x18, align 8 | MNotSaved
    CUtlVector< float32 > m_arOpenness; // offset 0x658, size 0x18, align 8 | MNotSaved
    CUtlVector< int32 > m_arNeighbors; // offset 0x670, size 0x18, align 8 | MNotSaved
    int32 m_nCurrentIndex; // offset 0x688, size 0x4, align 4 | MNotSaved
    char _pad_068C[0x4]; // offset 0x68C
    CUtlVector< int32 > m_arClusterParent; // offset 0x690, size 0x18, align 8 | MNotSaved
    CUtlVector< int32 > m_arClusterSize; // offset 0x6A8, size 0x18, align 8 | MNotSaved
    CUtlVector< float32 > m_arClusterWeight; // offset 0x6C0, size 0x18, align 8 | MNotSaved
    CUtlVector< Vector > m_arClusterDirSum; // offset 0x6D8, size 0x18, align 8 | MNotSaved
    int32 m_nClusterIndex; // offset 0x6F0, size 0x4, align 4 | MNotSaved
    float32 m_flClusteredOpenness; // offset 0x6F4, size 0x4, align 4 | MNotSaved
    Vector m_vClusterDirection; // offset 0x6F8, size 0xC, align 4 | MNotSaved
    Vector m_vSmoothedOpenDir; // offset 0x704, size 0xC, align 4 | MNotSaved
    int32 m_nDirWarmupThinksRemaining; // offset 0x710, size 0x4, align 4 | MNotSaved
    VectorWS m_vLastTraceOrigin; // offset 0x714, size 0xC, align 4 | MNotSaved
    bool m_bTraceOriginValid; // offset 0x720, size 0x1, align 1 | MNotSaved
    char _pad_0721[0x3]; // offset 0x721
    int32 m_nCatchUpThinksRemaining; // offset 0x724, size 0x4, align 4 | MNotSaved
    bool m_bDiscontinuityPending; // offset 0x728, size 0x1, align 1 | MNotSaved
    char _pad_0729[0x3]; // offset 0x729
    float32 m_flSmoothedOpenness; // offset 0x72C, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLastSmoothTime; // offset 0x730, size 0x4, align 255 | MNotSaved
    float32 m_flSize; // offset 0x734, size 0x4, align 4
    int32 m_nTotalDirections; // offset 0x738, size 0x4, align 4
    int32 m_nTracesPerFrame; // offset 0x73C, size 0x4, align 4
    bool m_bDomeMode; // offset 0x740, size 0x1, align 1
    bool m_bMultiWall; // offset 0x741, size 0x1, align 1
    char _pad_0742[0x2]; // offset 0x742
    float32 m_flWallTransmission; // offset 0x744, size 0x4, align 4
    int32 m_nClusterK; // offset 0x748, size 0x4, align 4
    float32 m_flClusterP; // offset 0x74C, size 0x4, align 4
    float32 m_flClusterBlend; // offset 0x750, size 0x4, align 4
    float32 m_flOpennessExponent; // offset 0x754, size 0x4, align 4
    float32 m_flShoulderExponent; // offset 0x758, size 0x4, align 4
    float32 m_flSmoothHalfLife; // offset 0x75C, size 0x4, align 4
};
