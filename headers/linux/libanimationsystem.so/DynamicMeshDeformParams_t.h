#pragma once

struct DynamicMeshDeformParams_t  // sizeof 0xC, align 0x4 [trivial_dtor] (modellib) {MGetKV3ClassDefaults}
{
    float32 m_flTensionCompressScale; // offset 0x0, size 0x4, align 4
    float32 m_flTensionStretchScale; // offset 0x4, size 0x4, align 4
    bool m_bRecomputeSmoothNormalsAfterAnimation; // offset 0x8, size 0x1, align 1
    bool m_bComputeDynamicMeshTensionAfterAnimation; // offset 0x9, size 0x1, align 1
    bool m_bSmoothNormalsAcrossUvSeams; // offset 0xA, size 0x1, align 1
    bool m_bEnableEyeBulgeDeformation; // offset 0xB, size 0x1, align 1
};
