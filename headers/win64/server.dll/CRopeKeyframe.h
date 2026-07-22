#pragma once

class CRopeKeyframe : public CBaseModelEntity /*0x0*/  // sizeof 0x7D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    uint16 m_RopeFlags; // offset 0x780, size 0x2, align 2
    char _pad_0782[0x6]; // offset 0x782
    CUtlSymbolLarge m_iNextLinkName; // offset 0x788, size 0x8, align 8
    int16 m_Slack; // offset 0x790, size 0x2, align 2
    char _pad_0792[0x2]; // offset 0x792
    float32 m_Width; // offset 0x794, size 0x4, align 4
    float32 m_TextureScale; // offset 0x798, size 0x4, align 4
    uint8 m_nSegments; // offset 0x79C, size 0x1, align 1
    bool m_bConstrainBetweenEndpoints; // offset 0x79D, size 0x1, align 1
    char _pad_079E[0x2]; // offset 0x79E
    CUtlSymbolLarge m_strRopeMaterialModel; // offset 0x7A0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // offset 0x7A8, size 0x8, align 8
    uint8 m_Subdiv; // offset 0x7B0, size 0x1, align 1
    uint8 m_nChangeCount; // offset 0x7B1, size 0x1, align 1 | MNotSaved
    int16 m_RopeLength; // offset 0x7B2, size 0x2, align 2
    uint8 m_fLockedPoints; // offset 0x7B4, size 0x1, align 1
    bool m_bCreatedFromMapFile; // offset 0x7B5, size 0x1, align 1
    char _pad_07B6[0x2]; // offset 0x7B6
    float32 m_flScrollSpeed; // offset 0x7B8, size 0x4, align 4
    bool m_bStartPointValid; // offset 0x7BC, size 0x1, align 1
    bool m_bEndPointValid; // offset 0x7BD, size 0x1, align 1
    char _pad_07BE[0x2]; // offset 0x7BE
    CHandle< CBaseEntity > m_hStartPoint; // offset 0x7C0, size 0x4, align 4
    CHandle< CBaseEntity > m_hEndPoint; // offset 0x7C4, size 0x4, align 4
    AttachmentHandle_t m_iStartAttachment; // offset 0x7C8, size 0x1, align 255
    AttachmentHandle_t m_iEndAttachment; // offset 0x7C9, size 0x1, align 255
    char _pad_07CA[0x6]; // offset 0x7CA
};
