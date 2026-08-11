#pragma once

class CSkeletonInstance : public CGameSceneNode /*0x0*/  // sizeof 0x420, align 0xFF [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    uint8_t m_bDirtyMotionType : 1; // offset 0x0 | MNotSaved
    uint8_t m_bIsGeneratingLatchedParentSpaceState : 1; // offset 0x0 | MNotSaved
    char _pad_0001[0x12F]; // offset 0x1
    CModelState m_modelState; // offset 0x130, size 0x250, align 255 | MNetworkEnable
    bool m_bUseParentRenderBounds; // offset 0x380, size 0x1, align 1 | MNetworkEnable MNotSaved
    bool m_bDisableSolidCollisionsForHierarchy; // offset 0x381, size 0x1, align 1
    char _pad_0382[0x2]; // offset 0x382
    CUtlStringToken m_materialGroup; // offset 0x384, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    uint8 m_nHitboxSet; // offset 0x388, size 0x1, align 1 | MNetworkEnable
    char _pad_0389[0x5B]; // offset 0x389
    bool m_bForceServerConstraintsEnabled; // offset 0x3E4, size 0x1, align 1
    char _pad_03E5[0x3B]; // offset 0x3E5
};
