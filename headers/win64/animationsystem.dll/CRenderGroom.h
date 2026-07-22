#pragma once

class CRenderGroom  // sizeof 0xA0, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< RenderHairStrandInfo_t > m_hairs; // offset 0x0, size 0x18, align 8
    CUtlVector< uint32 > m_hairPositionOffsets; // offset 0x18, size 0x18, align 8
    char _pad_0030[0x10]; // offset 0x30
    CStrongHandleCopyable< InfoForResourceTypeIMaterial2 > m_hSimParamsMat; // offset 0x40, size 0x8, align 8
    CUtlVector< int32 > m_strandSegmentCountHist; // offset 0x48, size 0x18, align 8
    char _pad_0060[0x18]; // offset 0x60
    int32 m_nMaxSegmentsPerHairStrand; // offset 0x78, size 0x4, align 4
    int32 m_nGuideHairCount; // offset 0x7C, size 0x4, align 4
    int32 m_nHairCount; // offset 0x80, size 0x4, align 4
    int32 m_nTotalVertexCount; // offset 0x84, size 0x4, align 4
    int32 m_nTotalSegmentCount; // offset 0x88, size 0x4, align 4
    int32 m_nGroomGroupID; // offset 0x8C, size 0x4, align 4
    int32 m_nAttachBoneIdx; // offset 0x90, size 0x4, align 4
    int32 m_nAttachMeshIdx; // offset 0x94, size 0x4, align 4
    int32 m_nAttachMeshDrawCallIdx; // offset 0x98, size 0x4, align 4
    bool m_bEnableSimulation; // offset 0x9C, size 0x1, align 1
    char _pad_009D[0x3]; // offset 0x9D
};
