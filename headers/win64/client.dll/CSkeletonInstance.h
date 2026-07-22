#pragma once

class CSkeletonInstance : public CGameSceneNode /*0x0*/  // sizeof 0x4B0, align 0x10 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x160]; // offset 0x0
    CModelState m_modelState; // offset 0x160, size 0x2B0, align 255
    bool m_bUseParentRenderBounds; // offset 0x410, size 0x1, align 1 | MNotSaved
    bool m_bDisableSolidCollisionsForHierarchy; // offset 0x411, size 0x1, align 1
    bool m_bDirtyMotionType; // offset 0x412, size 0x1, align 1 | MNotSaved
    bool m_bIsGeneratingLatchedParentSpaceState; // offset 0x413, size 0x1, align 1 | MNotSaved
    char _pad_0414[0x4]; // offset 0x414
    CUtlStringToken m_materialGroup; // offset 0x418, size 0x4, align 4
    uint8 m_nHitboxSet; // offset 0x41C, size 0x1, align 1
    char _pad_041D[0x93]; // offset 0x41D
};
