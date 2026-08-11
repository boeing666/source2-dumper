#pragma once

class CSkeletonInstance : public CGameSceneNode /*0x0*/  // sizeof 0x460, align 0x10 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x120]; // offset 0x0
    CModelState m_modelState; // offset 0x120, size 0x290, align 255
    bool m_bUseParentRenderBounds; // offset 0x3B0, size 0x1, align 1 | MNotSaved
    bool m_bDisableSolidCollisionsForHierarchy; // offset 0x3B1, size 0x1, align 1
    bool m_bDirtyMotionType; // offset 0x3B2, size 0x1, align 1 | MNotSaved
    bool m_bIsGeneratingLatchedParentSpaceState; // offset 0x3B3, size 0x1, align 1 | MNotSaved
    char _pad_03B4[0x4]; // offset 0x3B4
    CUtlStringToken m_materialGroup; // offset 0x3B8, size 0x4, align 4
    uint8 m_nHitboxSet; // offset 0x3BC, size 0x1, align 1
    char _pad_03BD[0x5F]; // offset 0x3BD
    bool m_bForceServerConstraintsEnabled; // offset 0x41C, size 0x1, align 1
    char _pad_041D[0x43]; // offset 0x41D
};
