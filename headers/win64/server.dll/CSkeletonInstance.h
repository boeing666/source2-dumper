#pragma once

class CSkeletonInstance : public CGameSceneNode /*0x0*/  // sizeof 0x450, align 0x10 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x120]; // offset 0x0
    CModelState m_modelState; // offset 0x120, size 0x280, align 255
    bool m_bUseParentRenderBounds; // offset 0x3A0, size 0x1, align 1 | MNotSaved
    bool m_bDisableSolidCollisionsForHierarchy; // offset 0x3A1, size 0x1, align 1
    bool m_bDirtyMotionType; // offset 0x3A2, size 0x1, align 1 | MNotSaved
    bool m_bIsGeneratingLatchedParentSpaceState; // offset 0x3A3, size 0x1, align 1 | MNotSaved
    char _pad_03A4[0x4]; // offset 0x3A4
    CUtlStringToken m_materialGroup; // offset 0x3A8, size 0x4, align 4
    uint8 m_nHitboxSet; // offset 0x3AC, size 0x1, align 1
    char _pad_03AD[0x63]; // offset 0x3AD
    bool m_bForceServerConstraintsEnabled; // offset 0x410, size 0x1, align 1
    char _pad_0411[0x3F]; // offset 0x411
};
