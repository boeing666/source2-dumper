#pragma once

class CRopeKeyframe : public CBaseModelEntity /*0x0*/  // sizeof 0x910, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8C0]; // offset 0x0
    uint16 m_RopeFlags; // offset 0x8C0, size 0x2, align 2
    char _pad_08C2[0x6]; // offset 0x8C2
    CUtlSymbolLarge m_iNextLinkName; // offset 0x8C8, size 0x8, align 8
    int16 m_Slack; // offset 0x8D0, size 0x2, align 2
    char _pad_08D2[0x2]; // offset 0x8D2
    float32 m_Width; // offset 0x8D4, size 0x4, align 4
    float32 m_TextureScale; // offset 0x8D8, size 0x4, align 4
    uint8 m_nSegments; // offset 0x8DC, size 0x1, align 1
    bool m_bConstrainBetweenEndpoints; // offset 0x8DD, size 0x1, align 1
    char _pad_08DE[0x2]; // offset 0x8DE
    CUtlSymbolLarge m_strRopeMaterialModel; // offset 0x8E0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // offset 0x8E8, size 0x8, align 8
    uint8 m_Subdiv; // offset 0x8F0, size 0x1, align 1
    uint8 m_nChangeCount; // offset 0x8F1, size 0x1, align 1 | MNotSaved
    int16 m_RopeLength; // offset 0x8F2, size 0x2, align 2
    uint8 m_fLockedPoints; // offset 0x8F4, size 0x1, align 1
    bool m_bCreatedFromMapFile; // offset 0x8F5, size 0x1, align 1
    char _pad_08F6[0x2]; // offset 0x8F6
    float32 m_flScrollSpeed; // offset 0x8F8, size 0x4, align 4
    bool m_bStartPointValid; // offset 0x8FC, size 0x1, align 1
    bool m_bEndPointValid; // offset 0x8FD, size 0x1, align 1
    char _pad_08FE[0x2]; // offset 0x8FE
    CHandle< CBaseEntity > m_hStartPoint; // offset 0x900, size 0x4, align 4
    CHandle< CBaseEntity > m_hEndPoint; // offset 0x904, size 0x4, align 4
    AttachmentHandle_t m_iStartAttachment; // offset 0x908, size 0x1, align 255
    AttachmentHandle_t m_iEndAttachment; // offset 0x909, size 0x1, align 255
    char _pad_090A[0x6]; // offset 0x90A
};
