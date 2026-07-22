#pragma once

struct RenderHairStrandInfo_t  // sizeof 0x28, align 0x4 [trivial_ctor trivial_dtor] (modellib) {MGetKV3ClassDefaults}
{
    uint32[2] m_nGuideHairIndices_nSurfaceTriIndex; // offset 0x0, size 0x8, align 4
    uint16[4] m_vGuideBary_vBaseBary; // offset 0x8, size 0x8, align 2
    uint16[4] m_vRootOffset_flLengthScale; // offset 0x10, size 0x8, align 2
    uint16[2] m_nPackedBaseUv; // offset 0x18, size 0x4, align 2
    uint32 m_nPackedSurfaceNormalOs; // offset 0x1C, size 0x4, align 4
    uint32 m_nPackedSurfaceTangentOs; // offset 0x20, size 0x4, align 4
    uint32 m_nDataOffset_Segments; // offset 0x24, size 0x4, align 4
};
