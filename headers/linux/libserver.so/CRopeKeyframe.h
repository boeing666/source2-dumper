#pragma once

class CRopeKeyframe : public CBaseModelEntity /*0x0*/  // sizeof 0xB90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB40]; // offset 0x0
    uint16 m_RopeFlags; // offset 0xB40, size 0x2, align 2
    char _pad_0B42[0x6]; // offset 0xB42
    CUtlSymbolLarge m_iNextLinkName; // offset 0xB48, size 0x8, align 8
    int16 m_Slack; // offset 0xB50, size 0x2, align 2
    char _pad_0B52[0x2]; // offset 0xB52
    float32 m_Width; // offset 0xB54, size 0x4, align 4
    float32 m_TextureScale; // offset 0xB58, size 0x4, align 4
    uint8 m_nSegments; // offset 0xB5C, size 0x1, align 1
    bool m_bConstrainBetweenEndpoints; // offset 0xB5D, size 0x1, align 1
    char _pad_0B5E[0x2]; // offset 0xB5E
    CUtlSymbolLarge m_strRopeMaterialModel; // offset 0xB60, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // offset 0xB68, size 0x8, align 8
    uint8 m_Subdiv; // offset 0xB70, size 0x1, align 1
    uint8 m_nChangeCount; // offset 0xB71, size 0x1, align 1 | MNotSaved
    int16 m_RopeLength; // offset 0xB72, size 0x2, align 2
    uint8 m_fLockedPoints; // offset 0xB74, size 0x1, align 1
    bool m_bCreatedFromMapFile; // offset 0xB75, size 0x1, align 1
    char _pad_0B76[0x2]; // offset 0xB76
    float32 m_flScrollSpeed; // offset 0xB78, size 0x4, align 4
    bool m_bStartPointValid; // offset 0xB7C, size 0x1, align 1
    bool m_bEndPointValid; // offset 0xB7D, size 0x1, align 1
    char _pad_0B7E[0x2]; // offset 0xB7E
    CHandle< CBaseEntity > m_hStartPoint; // offset 0xB80, size 0x4, align 4
    CHandle< CBaseEntity > m_hEndPoint; // offset 0xB84, size 0x4, align 4
    AttachmentHandle_t m_iStartAttachment; // offset 0xB88, size 0x1, align 255
    AttachmentHandle_t m_iEndAttachment; // offset 0xB89, size 0x1, align 255
    char _pad_0B8A[0x6]; // offset 0xB8A
};
