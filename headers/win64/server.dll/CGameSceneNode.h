#pragma once

class CGameSceneNode  // sizeof 0x120, align 0xFF [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    uint8_t m_bDirtyHierarchy : 1; // offset 0x0 | MNotSaved
    uint8_t m_bDirtyBoneMergeInfo : 1; // offset 0x0 | MNotSaved
    uint8_t m_bNetworkedPositionChanged : 1; // offset 0x0 | MNotSaved
    uint8_t m_bNetworkedAnglesChanged : 1; // offset 0x0 | MNotSaved
    uint8_t m_bNetworkedScaleChanged : 1; // offset 0x0 | MNotSaved
    uint8_t m_bWillBeCallingPostDataUpdate : 1; // offset 0x0 | MNotSaved
    uint8_t m_bBoneMergeFlex : 1; // offset 0x0 | MNotSaved
    uint8_t m_nLatchAbsOrigin : 2; // offset 0x0 | MNotSaved
    uint8_t m_bDirtyBoneMergeBoneToRoot : 1; // offset 0x0 | MNotSaved
    char _pad_0001[0xF]; // offset 0x1
    CTransformWS m_nodeToWorld; // offset 0x10, size 0x20, align 16 | MNotSaved
    CEntityInstance* m_pOwner; // offset 0x30, size 0x8, align 8 | MNotSaved
    CGameSceneNode* m_pParent; // offset 0x38, size 0x8, align 8 | MNotSaved
    CGameSceneNode* m_pChild; // offset 0x40, size 0x8, align 8 | MNotSaved
    CGameSceneNode* m_pNextSibling; // offset 0x48, size 0x8, align 8 | MNotSaved
    char _pad_0050[0x20]; // offset 0x50
    CGameSceneNodeHandle m_hParent; // offset 0x70, size 0x10, align 255 | MNetworkEnable MNetworkSerializer MNetworkChangeCallback MNetworkPriority MNetworkVarEmbeddedFieldOffsetDelta
    CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // offset 0x80, size 0x30, align 255 | MNetworkEnable MNetworkPriority MNetworkUserGroup MNetworkChangeCallback
    char _pad_00B0[0x8]; // offset 0xB0
    QAngle m_angRotation; // offset 0xB8, size 0xC, align 4 | MNetworkEnable MNetworkPriority MNetworkSerializer MNetworkChangeCallback MNetworkEncoder
    float32 m_flScale; // offset 0xC4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback MNetworkPriority
    VectorWS m_vecAbsOrigin; // offset 0xC8, size 0xC, align 4
    QAngle m_angAbsRotation; // offset 0xD4, size 0xC, align 4
    float32 m_flAbsScale; // offset 0xE0, size 0x4, align 4
    int16 m_nParentAttachmentOrBone; // offset 0xE4, size 0x2, align 2 | MNotSaved
    bool m_bDebugAbsOriginChanges; // offset 0xE6, size 0x1, align 1 | MNotSaved
    bool m_bDormant; // offset 0xE7, size 0x1, align 1
    bool m_bForceParentToBeNetworked; // offset 0xE8, size 0x1, align 1
    char _pad_00E9[0x2]; // offset 0xE9
    uint8 m_nHierarchicalDepth; // offset 0xEB, size 0x1, align 1 | MNotSaved
    uint8 m_nHierarchyType; // offset 0xEC, size 0x1, align 1 | MNotSaved
    uint8 m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // offset 0xED, size 0x1, align 1 | MNotSaved
    char _pad_00EE[0x2]; // offset 0xEE
    CUtlStringToken m_name; // offset 0xF0, size 0x4, align 4 | MNetworkEnable
    char _pad_00F4[0x10]; // offset 0xF4
    CUtlStringToken m_hierarchyAttachName; // offset 0x104, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flClientLocalScale; // offset 0x108, size 0x4, align 4
    Vector m_vRenderOrigin; // offset 0x10C, size 0xC, align 4
    char _pad_0118[0x8]; // offset 0x118
};
