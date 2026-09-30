#pragma once

class CRopeKeyframe : public CBaseModelEntity /*0x0*/  // sizeof 0x8D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x880]; // offset 0x0
    uint16 m_RopeFlags; // offset 0x880, size 0x2, align 2
    char _pad_0882[0x6]; // offset 0x882
    CUtlSymbolLarge m_iNextLinkName; // offset 0x888, size 0x8, align 8
    int16 m_Slack; // offset 0x890, size 0x2, align 2
    char _pad_0892[0x2]; // offset 0x892
    float32 m_Width; // offset 0x894, size 0x4, align 4
    float32 m_TextureScale; // offset 0x898, size 0x4, align 4
    uint8 m_nSegments; // offset 0x89C, size 0x1, align 1
    bool m_bConstrainBetweenEndpoints; // offset 0x89D, size 0x1, align 1
    char _pad_089E[0x2]; // offset 0x89E
    CUtlSymbolLarge m_strRopeMaterialModel; // offset 0x8A0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // offset 0x8A8, size 0x8, align 8
    uint8 m_Subdiv; // offset 0x8B0, size 0x1, align 1
    uint8 m_nChangeCount; // offset 0x8B1, size 0x1, align 1 | MNotSaved
    int16 m_RopeLength; // offset 0x8B2, size 0x2, align 2
    uint8 m_fLockedPoints; // offset 0x8B4, size 0x1, align 1
    bool m_bCreatedFromMapFile; // offset 0x8B5, size 0x1, align 1
    char _pad_08B6[0x2]; // offset 0x8B6
    float32 m_flScrollSpeed; // offset 0x8B8, size 0x4, align 4
    bool m_bStartPointValid; // offset 0x8BC, size 0x1, align 1
    bool m_bEndPointValid; // offset 0x8BD, size 0x1, align 1
    char _pad_08BE[0x2]; // offset 0x8BE
    CHandle< CBaseEntity > m_hStartPoint; // offset 0x8C0, size 0x4, align 4
    CHandle< CBaseEntity > m_hEndPoint; // offset 0x8C4, size 0x4, align 4
    AttachmentHandle_t m_iStartAttachment; // offset 0x8C8, size 0x1, align 255
    AttachmentHandle_t m_iEndAttachment; // offset 0x8C9, size 0x1, align 255
    char _pad_08CA[0x6]; // offset 0x8CA
};
