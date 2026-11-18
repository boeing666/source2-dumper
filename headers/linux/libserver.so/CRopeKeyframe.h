#pragma once

class CRopeKeyframe : public CBaseModelEntity /*0x0*/  // sizeof 0xBF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBA8]; // offset 0x0
    uint16 m_RopeFlags; // offset 0xBA8, size 0x2, align 2
    char _pad_0BAA[0x6]; // offset 0xBAA
    CUtlSymbolLarge m_iNextLinkName; // offset 0xBB0, size 0x8, align 8
    int16 m_Slack; // offset 0xBB8, size 0x2, align 2
    char _pad_0BBA[0x2]; // offset 0xBBA
    float32 m_Width; // offset 0xBBC, size 0x4, align 4
    float32 m_TextureScale; // offset 0xBC0, size 0x4, align 4
    uint8 m_nSegments; // offset 0xBC4, size 0x1, align 1
    bool m_bConstrainBetweenEndpoints; // offset 0xBC5, size 0x1, align 1
    char _pad_0BC6[0x2]; // offset 0xBC6
    CUtlSymbolLarge m_strRopeMaterialModel; // offset 0xBC8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // offset 0xBD0, size 0x8, align 8
    uint8 m_Subdiv; // offset 0xBD8, size 0x1, align 1
    uint8 m_nChangeCount; // offset 0xBD9, size 0x1, align 1 | MNotSaved
    int16 m_RopeLength; // offset 0xBDA, size 0x2, align 2
    uint8 m_fLockedPoints; // offset 0xBDC, size 0x1, align 1
    bool m_bCreatedFromMapFile; // offset 0xBDD, size 0x1, align 1
    char _pad_0BDE[0x2]; // offset 0xBDE
    float32 m_flScrollSpeed; // offset 0xBE0, size 0x4, align 4
    bool m_bStartPointValid; // offset 0xBE4, size 0x1, align 1
    bool m_bEndPointValid; // offset 0xBE5, size 0x1, align 1
    char _pad_0BE6[0x2]; // offset 0xBE6
    CHandle< CBaseEntity > m_hStartPoint; // offset 0xBE8, size 0x4, align 4
    CHandle< CBaseEntity > m_hEndPoint; // offset 0xBEC, size 0x4, align 4
    AttachmentHandle_t m_iStartAttachment; // offset 0xBF0, size 0x1, align 255
    AttachmentHandle_t m_iEndAttachment; // offset 0xBF1, size 0x1, align 255
    char _pad_0BF2[0x6]; // offset 0xBF2
};
