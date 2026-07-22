#pragma once

class CSkeletonInstance : public CGameSceneNode /*0x0*/  // sizeof 0x490, align 0x10 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x140]; // offset 0x0
    CModelState m_modelState; // offset 0x140, size 0x2B0, align 255
    bool m_bUseParentRenderBounds; // offset 0x3F0, size 0x1, align 1 | MNotSaved
    bool m_bDisableSolidCollisionsForHierarchy; // offset 0x3F1, size 0x1, align 1
    bool m_bDirtyMotionType; // offset 0x3F2, size 0x1, align 1 | MNotSaved
    bool m_bIsGeneratingLatchedParentSpaceState; // offset 0x3F3, size 0x1, align 1 | MNotSaved
    char _pad_03F4[0x4]; // offset 0x3F4
    CUtlStringToken m_materialGroup; // offset 0x3F8, size 0x4, align 4
    uint8 m_nHitboxSet; // offset 0x3FC, size 0x1, align 1
    char _pad_03FD[0x93]; // offset 0x3FD
};
