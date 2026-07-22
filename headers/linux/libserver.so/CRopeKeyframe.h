#pragma once

class CRopeKeyframe : public CBaseModelEntity /*0x0*/  // sizeof 0xAB0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA60]; // offset 0x0
    uint16 m_RopeFlags; // offset 0xA60, size 0x2, align 2
    char _pad_0A62[0x6]; // offset 0xA62
    CUtlSymbolLarge m_iNextLinkName; // offset 0xA68, size 0x8, align 8
    int16 m_Slack; // offset 0xA70, size 0x2, align 2
    char _pad_0A72[0x2]; // offset 0xA72
    float32 m_Width; // offset 0xA74, size 0x4, align 4
    float32 m_TextureScale; // offset 0xA78, size 0x4, align 4
    uint8 m_nSegments; // offset 0xA7C, size 0x1, align 1
    bool m_bConstrainBetweenEndpoints; // offset 0xA7D, size 0x1, align 1
    char _pad_0A7E[0x2]; // offset 0xA7E
    CUtlSymbolLarge m_strRopeMaterialModel; // offset 0xA80, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // offset 0xA88, size 0x8, align 8
    uint8 m_Subdiv; // offset 0xA90, size 0x1, align 1
    uint8 m_nChangeCount; // offset 0xA91, size 0x1, align 1 | MNotSaved
    int16 m_RopeLength; // offset 0xA92, size 0x2, align 2
    uint8 m_fLockedPoints; // offset 0xA94, size 0x1, align 1
    bool m_bCreatedFromMapFile; // offset 0xA95, size 0x1, align 1
    char _pad_0A96[0x2]; // offset 0xA96
    float32 m_flScrollSpeed; // offset 0xA98, size 0x4, align 4
    bool m_bStartPointValid; // offset 0xA9C, size 0x1, align 1
    bool m_bEndPointValid; // offset 0xA9D, size 0x1, align 1
    char _pad_0A9E[0x2]; // offset 0xA9E
    CHandle< CBaseEntity > m_hStartPoint; // offset 0xAA0, size 0x4, align 4
    CHandle< CBaseEntity > m_hEndPoint; // offset 0xAA4, size 0x4, align 4
    AttachmentHandle_t m_iStartAttachment; // offset 0xAA8, size 0x1, align 255
    AttachmentHandle_t m_iEndAttachment; // offset 0xAA9, size 0x1, align 255
    char _pad_0AAA[0x6]; // offset 0xAAA
};
