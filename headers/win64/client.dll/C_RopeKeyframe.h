#pragma once

class C_RopeKeyframe : public C_BaseModelEntity /*0x0*/  // sizeof 0xEE8, align 0x8 [vtable] (client)
{
public:
    uint8_t m_bPhysicsInitted : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentPositionsDirty : 1; // offset 0x0 | MNotSaved
    uint8_t m_bNewDataThisFrame : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentAnglesDirty : 1; // offset 0x0 | MNotSaved
    char _pad_0001[0xB7F]; // offset 0x1
    CBitVec< 10 > m_LinksTouchingSomething; // offset 0xB80, size 0x4, align 4 | MNotSaved
    int32 m_nLinksTouchingSomething; // offset 0xB84, size 0x4, align 4 | MNotSaved
    bool m_bApplyWind; // offset 0xB88, size 0x1, align 1 | MNotSaved
    char _pad_0B89[0x3]; // offset 0xB89
    int32 m_fPrevLockedPoints; // offset 0xB8C, size 0x4, align 4 | MNotSaved
    int32 m_iForcePointMoveCounter; // offset 0xB90, size 0x4, align 4 | MNotSaved
    bool[2] m_bPrevEndPointPos; // offset 0xB94, size 0x2, align 1 | MNotSaved
    char _pad_0B96[0x2]; // offset 0xB96
    VectorWS[2] m_vPrevEndPointPos; // offset 0xB98, size 0x18, align 4 | MNotSaved
    float32 m_flCurScroll; // offset 0xBB0, size 0x4, align 4 | MNotSaved
    float32 m_flScrollSpeed; // offset 0xBB4, size 0x4, align 4 | MNotSaved
    uint16 m_RopeFlags; // offset 0xBB8, size 0x2, align 2 | MNotSaved
    char _pad_0BBA[0x6]; // offset 0xBBA
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // offset 0xBC0, size 0x8, align 8 | MNotSaved
    char _pad_0BC8[0x270]; // offset 0xBC8
    uint8 m_nSegments; // offset 0xE38, size 0x1, align 1 | MNotSaved
    char _pad_0E39[0x3]; // offset 0xE39
    CHandle< C_BaseEntity > m_hStartPoint; // offset 0xE3C, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hEndPoint; // offset 0xE40, size 0x4, align 4 | MNotSaved
    AttachmentHandle_t m_iStartAttachment; // offset 0xE44, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_iEndAttachment; // offset 0xE45, size 0x1, align 255 | MNotSaved
    uint8 m_Subdiv; // offset 0xE46, size 0x1, align 1 | MNotSaved
    char _pad_0E47[0x1]; // offset 0xE47
    int16 m_RopeLength; // offset 0xE48, size 0x2, align 2 | MNotSaved
    int16 m_Slack; // offset 0xE4A, size 0x2, align 2 | MNotSaved
    float32 m_TextureScale; // offset 0xE4C, size 0x4, align 4 | MNotSaved
    uint8 m_fLockedPoints; // offset 0xE50, size 0x1, align 1 | MNotSaved
    uint8 m_nChangeCount; // offset 0xE51, size 0x1, align 1 | MNotSaved
    char _pad_0E52[0x2]; // offset 0xE52
    float32 m_Width; // offset 0xE54, size 0x4, align 4 | MNotSaved
    C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // offset 0xE58, size 0x10, align 255 | MNotSaved
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0xE68, size 0x8, align 8 | MNotSaved
    int32 m_TextureHeight; // offset 0xE70, size 0x4, align 4 | MNotSaved
    Vector m_vecImpulse; // offset 0xE74, size 0xC, align 4 | MNotSaved
    Vector m_vecPreviousImpulse; // offset 0xE80, size 0xC, align 4 | MNotSaved
    float32 m_flCurrentGustTimer; // offset 0xE8C, size 0x4, align 4 | MNotSaved
    float32 m_flCurrentGustLifetime; // offset 0xE90, size 0x4, align 4 | MNotSaved
    float32 m_flTimeToNextGust; // offset 0xE94, size 0x4, align 4 | MNotSaved
    Vector m_vWindDir; // offset 0xE98, size 0xC, align 4 | MNotSaved
    Vector m_vColorMod; // offset 0xEA4, size 0xC, align 4 | MNotSaved
    VectorWS[2] m_vCachedEndPointAttachmentPos; // offset 0xEB0, size 0x18, align 4 | MNotSaved
    QAngle[2] m_vCachedEndPointAttachmentAngle; // offset 0xEC8, size 0x18, align 4 | MNotSaved
    bool m_bConstrainBetweenEndpoints; // offset 0xEE0, size 0x1, align 1 | MNotSaved
    char _pad_0EE1[0x7]; // offset 0xEE1
};
