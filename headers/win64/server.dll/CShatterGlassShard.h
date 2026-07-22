#pragma once

class CShatterGlassShard  // sizeof 0xB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    uint32 m_hShardHandle; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlVector< Vector2D > m_vecPanelVertices; // offset 0x10, size 0x18, align 8 | MNotSaved
    Vector2D m_vLocalPanelSpaceOrigin; // offset 0x28, size 0x8, align 4 | MNotSaved
    CStrongHandle< InfoForResourceTypeCModel > m_hModel; // offset 0x30, size 0x8, align 8 | MNotSaved
    CHandle< CShatterGlassShardPhysics > m_hPhysicsEntity; // offset 0x38, size 0x4, align 4
    CHandle< CFuncShatterglass > m_hParentPanel; // offset 0x3C, size 0x4, align 4
    uint32 m_hParentShard; // offset 0x40, size 0x4, align 4
    ShatterGlassStressType m_ShatterStressType; // offset 0x44, size 0x1, align 1
    char _pad_0045[0x3]; // offset 0x45
    Vector m_vecStressVelocity; // offset 0x48, size 0xC, align 4
    bool m_bCreatedModel; // offset 0x54, size 0x1, align 1 | MNotSaved
    char _pad_0055[0x3]; // offset 0x55
    float32 m_flLongestEdge; // offset 0x58, size 0x4, align 4 | MNotSaved
    float32 m_flShortestEdge; // offset 0x5C, size 0x4, align 4 | MNotSaved
    float32 m_flLongestAcross; // offset 0x60, size 0x4, align 4 | MNotSaved
    float32 m_flShortestAcross; // offset 0x64, size 0x4, align 4 | MNotSaved
    float32 m_flSumOfAllEdges; // offset 0x68, size 0x4, align 4 | MNotSaved
    float32 m_flArea; // offset 0x6C, size 0x4, align 4 | MNotSaved
    OnFrame m_nOnFrameEdge; // offset 0x70, size 0x1, align 1
    char _pad_0071[0x3]; // offset 0x71
    int32 m_nSubShardGeneration; // offset 0x74, size 0x4, align 4
    Vector2D m_vecAverageVertPosition; // offset 0x78, size 0x8, align 4 | MNotSaved
    bool m_bAverageVertPositionIsValid; // offset 0x80, size 0x1, align 1 | MNotSaved
    char _pad_0081[0x3]; // offset 0x81
    Vector2D m_vecPanelSpaceStressPositionA; // offset 0x84, size 0x8, align 4
    Vector2D m_vecPanelSpaceStressPositionB; // offset 0x8C, size 0x8, align 4
    bool m_bStressPositionAIsValid; // offset 0x94, size 0x1, align 1
    bool m_bStressPositionBIsValid; // offset 0x95, size 0x1, align 1
    bool m_bFlaggedForRemoval; // offset 0x96, size 0x1, align 1
    char _pad_0097[0x1]; // offset 0x97
    GameTime_t m_flPhysicsEntitySpawnedAtTime; // offset 0x98, size 0x4, align 255
    CHandle< CBaseEntity > m_hEntityHittingMe; // offset 0x9C, size 0x4, align 4
    CUtlVector< uint32 > m_vecNeighbors; // offset 0xA0, size 0x18, align 8
};
