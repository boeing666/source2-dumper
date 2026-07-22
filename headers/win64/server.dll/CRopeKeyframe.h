#pragma once

class CRopeKeyframe : public CBaseModelEntity /*0x0*/  // sizeof 0x7D8, align 0x8 [vtable] (server) {MNetworkIncludeByUserGroup MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x788]; // offset 0x0
    uint16 m_RopeFlags; // offset 0x788, size 0x2, align 2 | MNetworkEnable
    char _pad_078A[0x6]; // offset 0x78A
    CUtlSymbolLarge m_iNextLinkName; // offset 0x790, size 0x8, align 8
    int16 m_Slack; // offset 0x798, size 0x2, align 2 | MNetworkEnable
    char _pad_079A[0x2]; // offset 0x79A
    float32 m_Width; // offset 0x79C, size 0x4, align 4 | MNetworkEnable
    float32 m_TextureScale; // offset 0x7A0, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue
    uint8 m_nSegments; // offset 0x7A4, size 0x1, align 1 | MNetworkEnable
    bool m_bConstrainBetweenEndpoints; // offset 0x7A5, size 0x1, align 1 | MNetworkEnable
    char _pad_07A6[0x2]; // offset 0x7A6
    CUtlSymbolLarge m_strRopeMaterialModel; // offset 0x7A8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // offset 0x7B0, size 0x8, align 8 | MNetworkEnable
    uint8 m_Subdiv; // offset 0x7B8, size 0x1, align 1 | MNetworkEnable
    uint8 m_nChangeCount; // offset 0x7B9, size 0x1, align 1 | MNetworkEnable MNotSaved
    int16 m_RopeLength; // offset 0x7BA, size 0x2, align 2 | MNetworkEnable
    uint8 m_fLockedPoints; // offset 0x7BC, size 0x1, align 1 | MNetworkEnable
    bool m_bCreatedFromMapFile; // offset 0x7BD, size 0x1, align 1
    char _pad_07BE[0x2]; // offset 0x7BE
    float32 m_flScrollSpeed; // offset 0x7C0, size 0x4, align 4 | MNetworkEnable
    bool m_bStartPointValid; // offset 0x7C4, size 0x1, align 1
    bool m_bEndPointValid; // offset 0x7C5, size 0x1, align 1
    char _pad_07C6[0x2]; // offset 0x7C6
    CHandle< CBaseEntity > m_hStartPoint; // offset 0x7C8, size 0x4, align 4 | MNetworkEnable
    CHandle< CBaseEntity > m_hEndPoint; // offset 0x7CC, size 0x4, align 4 | MNetworkEnable
    AttachmentHandle_t m_iStartAttachment; // offset 0x7D0, size 0x1, align 255 | MNetworkEnable
    AttachmentHandle_t m_iEndAttachment; // offset 0x7D1, size 0x1, align 255 | MNetworkEnable
    char _pad_07D2[0x6]; // offset 0x7D2
};
