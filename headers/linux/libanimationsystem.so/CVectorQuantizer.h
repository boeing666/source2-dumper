#pragma once

class CVectorQuantizer  // sizeof 0x20, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< float32 > m_centroidVectors; // offset 0x0, size 0x18, align 8
    int32 m_nCentroids; // offset 0x18, size 0x4, align 4
    int32 m_nDimensions; // offset 0x1C, size 0x4, align 4
};
