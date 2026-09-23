#pragma once

class CRopeKeyframe : public CBaseModelEntity /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x858]; // offset 0x0
    uint16 m_RopeFlags; // offset 0x858, size 0x2, align 2
    char _pad_085A[0x6]; // offset 0x85A
    CUtlSymbolLarge m_iNextLinkName; // offset 0x860, size 0x8, align 8
    int16 m_Slack; // offset 0x868, size 0x2, align 2
    char _pad_086A[0x2]; // offset 0x86A
    float32 m_Width; // offset 0x86C, size 0x4, align 4
    float32 m_TextureScale; // offset 0x870, size 0x4, align 4
    uint8 m_nSegments; // offset 0x874, size 0x1, align 1
    bool m_bConstrainBetweenEndpoints; // offset 0x875, size 0x1, align 1
    char _pad_0876[0x2]; // offset 0x876
    CUtlSymbolLarge m_strRopeMaterialModel; // offset 0x878, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // offset 0x880, size 0x8, align 8
    uint8 m_Subdiv; // offset 0x888, size 0x1, align 1
    uint8 m_nChangeCount; // offset 0x889, size 0x1, align 1 | MNotSaved
    int16 m_RopeLength; // offset 0x88A, size 0x2, align 2
    uint8 m_fLockedPoints; // offset 0x88C, size 0x1, align 1
    bool m_bCreatedFromMapFile; // offset 0x88D, size 0x1, align 1
    char _pad_088E[0x2]; // offset 0x88E
    float32 m_flScrollSpeed; // offset 0x890, size 0x4, align 4
    bool m_bStartPointValid; // offset 0x894, size 0x1, align 1
    bool m_bEndPointValid; // offset 0x895, size 0x1, align 1
    char _pad_0896[0x2]; // offset 0x896
    CHandle< CBaseEntity > m_hStartPoint; // offset 0x898, size 0x4, align 4
    CHandle< CBaseEntity > m_hEndPoint; // offset 0x89C, size 0x4, align 4
    AttachmentHandle_t m_iStartAttachment; // offset 0x8A0, size 0x1, align 255
    AttachmentHandle_t m_iEndAttachment; // offset 0x8A1, size 0x1, align 255
    char _pad_08A2[0x6]; // offset 0x8A2
};
