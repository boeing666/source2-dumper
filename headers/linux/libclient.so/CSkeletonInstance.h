#pragma once

class CSkeletonInstance : public CGameSceneNode /*0x0*/  // sizeof 0x4E0, align 0x10 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x160]; // offset 0x0
    CModelState m_modelState; // offset 0x160, size 0x2D0, align 255
    bool m_bUseParentRenderBounds; // offset 0x430, size 0x1, align 1 | MNotSaved
    bool m_bDisableSolidCollisionsForHierarchy; // offset 0x431, size 0x1, align 1
    bool m_bDirtyMotionType; // offset 0x432, size 0x1, align 1 | MNotSaved
    bool m_bIsGeneratingLatchedParentSpaceState; // offset 0x433, size 0x1, align 1 | MNotSaved
    char _pad_0434[0x4]; // offset 0x434
    CUtlStringToken m_materialGroup; // offset 0x438, size 0x4, align 4
    uint8 m_nHitboxSet; // offset 0x43C, size 0x1, align 1
    char _pad_043D[0xA3]; // offset 0x43D
};
