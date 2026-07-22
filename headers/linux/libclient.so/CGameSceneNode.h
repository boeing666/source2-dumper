#pragma once

class CGameSceneNode  // sizeof 0x160, align 0x10 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    uint8_t m_bDirtyBoneMergeBoneToRoot : 1; // offset 0x0 | MNotSaved
    uint8_t m_nLatchAbsOrigin : 2; // offset 0x0 | MNotSaved
    uint8_t m_bBoneMergeFlex : 1; // offset 0x0 | MNotSaved
    uint8_t m_bWillBeCallingPostDataUpdate : 1; // offset 0x0 | MNotSaved
    uint8_t m_bNetworkedScaleChanged : 1; // offset 0x0 | MNotSaved
    uint8_t m_bNetworkedAnglesChanged : 1; // offset 0x0 | MNotSaved
    uint8_t m_bNetworkedPositionChanged : 1; // offset 0x0 | MNotSaved
    uint8_t m_bDirtyBoneMergeInfo : 1; // offset 0x0 | MNotSaved
    uint8_t m_bDirtyHierarchy : 1; // offset 0x0 | MNotSaved
    char _pad_0001[0xF]; // offset 0x1
    CTransformWS m_nodeToWorld; // offset 0x10, size 0x20, align 16 | MNotSaved
    CEntityInstance* m_pOwner; // offset 0x30, size 0x8, align 8 | MNotSaved
    CGameSceneNode* m_pParent; // offset 0x38, size 0x8, align 8 | MNotSaved
    CGameSceneNode* m_pChild; // offset 0x40, size 0x8, align 8 | MNotSaved
    CGameSceneNode* m_pNextSibling; // offset 0x48, size 0x8, align 8 | MNotSaved
    char _pad_0050[0x20]; // offset 0x50
    CGameSceneNodeHandle m_hParent; // offset 0x70, size 0x10, align 8
    char _pad_0080[0x10]; // offset 0x80
    CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // offset 0x90, size 0x30, align 255
    char _pad_00C0[0x8]; // offset 0xC0
    QAngle m_angRotation; // offset 0xC8, size 0xC, align 4
    float32 m_flScale; // offset 0xD4, size 0x4, align 4
    VectorWS m_vecAbsOrigin; // offset 0xD8, size 0xC, align 4
    QAngle m_angAbsRotation; // offset 0xE4, size 0xC, align 4
    float32 m_flAbsScale; // offset 0xF0, size 0x4, align 4
    Vector m_vecWrappedLocalOrigin; // offset 0xF4, size 0xC, align 4 | MNotSaved
    QAngle m_angWrappedLocalRotation; // offset 0x100, size 0xC, align 4 | MNotSaved
    float32 m_flWrappedScale; // offset 0x10C, size 0x4, align 4 | MNotSaved
    int16 m_nParentAttachmentOrBone; // offset 0x110, size 0x2, align 2 | MNotSaved
    bool m_bDebugAbsOriginChanges; // offset 0x112, size 0x1, align 1 | MNotSaved
    bool m_bDormant; // offset 0x113, size 0x1, align 1
    bool m_bForceParentToBeNetworked; // offset 0x114, size 0x1, align 1
    char _pad_0115[0x2]; // offset 0x115
    uint8 m_nHierarchicalDepth; // offset 0x117, size 0x1, align 1 | MNotSaved
    uint8 m_nHierarchyType; // offset 0x118, size 0x1, align 1 | MNotSaved
    uint8 m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // offset 0x119, size 0x1, align 1 | MNotSaved
    char _pad_011A[0x2]; // offset 0x11A
    CUtlStringToken m_name; // offset 0x11C, size 0x4, align 4
    char _pad_0120[0x18]; // offset 0x120
    CUtlStringToken m_hierarchyAttachName; // offset 0x138, size 0x4, align 4
    float32 m_flZOffset; // offset 0x13C, size 0x4, align 4
    QAngle m_angLocalOrientation; // offset 0x140, size 0xC, align 4
    float32 m_flClientLocalScale; // offset 0x14C, size 0x4, align 4
    char _pad_0150[0x10]; // offset 0x150
};
