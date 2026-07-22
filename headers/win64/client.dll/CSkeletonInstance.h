#pragma once

class CSkeletonInstance : public CGameSceneNode /*0x0*/  // sizeof 0x450, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    uint8_t m_bDirtyMotionType : 1; // offset 0x0 | MNotSaved
    uint8_t m_bIsGeneratingLatchedParentSpaceState : 1; // offset 0x0 | MNotSaved
    char _pad_0001[0x14F]; // offset 0x1
    CModelState m_modelState; // offset 0x150, size 0x260, align 255 | MNetworkEnable
    bool m_bUseParentRenderBounds; // offset 0x3B0, size 0x1, align 1 | MNetworkEnable MNotSaved
    bool m_bDisableSolidCollisionsForHierarchy; // offset 0x3B1, size 0x1, align 1
    char _pad_03B2[0x2]; // offset 0x3B2
    CUtlStringToken m_materialGroup; // offset 0x3B4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    uint8 m_nHitboxSet; // offset 0x3B8, size 0x1, align 1 | MNetworkEnable
    char _pad_03B9[0x97]; // offset 0x3B9
};
