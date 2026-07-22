#pragma once

class CSkeletonInstance : public CGameSceneNode /*0x0*/  // sizeof 0x4A0, align 0x10 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x140]; // offset 0x0
    CModelState m_modelState; // offset 0x140, size 0x2C0, align 255
    bool m_bUseParentRenderBounds; // offset 0x400, size 0x1, align 1 | MNotSaved
    bool m_bDisableSolidCollisionsForHierarchy; // offset 0x401, size 0x1, align 1
    bool m_bDirtyMotionType; // offset 0x402, size 0x1, align 1 | MNotSaved
    bool m_bIsGeneratingLatchedParentSpaceState; // offset 0x403, size 0x1, align 1 | MNotSaved
    char _pad_0404[0x4]; // offset 0x404
    CUtlStringToken m_materialGroup; // offset 0x408, size 0x4, align 4
    uint8 m_nHitboxSet; // offset 0x40C, size 0x1, align 1
    char _pad_040D[0x93]; // offset 0x40D
};
