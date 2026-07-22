#pragma once

class C_RopeKeyframe : public C_BaseModelEntity /*0x0*/  // sizeof 0xF80, align 0x8 [vtable] (client)
{
public:
    uint8_t m_bPhysicsInitted : 1; // offset 0x0 | MNotSaved
    uint8_t m_bNewDataThisFrame : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentAnglesDirty : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentPositionsDirty : 1; // offset 0x0 | MNotSaved
    char _pad_0001[0xC17]; // offset 0x1
    CBitVec< 10 > m_LinksTouchingSomething; // offset 0xC18, size 0x4, align 4 | MNotSaved
    int32 m_nLinksTouchingSomething; // offset 0xC1C, size 0x4, align 4 | MNotSaved
    bool m_bApplyWind; // offset 0xC20, size 0x1, align 1 | MNotSaved
    char _pad_0C21[0x3]; // offset 0xC21
    int32 m_fPrevLockedPoints; // offset 0xC24, size 0x4, align 4 | MNotSaved
    int32 m_iForcePointMoveCounter; // offset 0xC28, size 0x4, align 4 | MNotSaved
    bool[2] m_bPrevEndPointPos; // offset 0xC2C, size 0x2, align 1 | MNotSaved
    char _pad_0C2E[0x2]; // offset 0xC2E
    VectorWS[2] m_vPrevEndPointPos; // offset 0xC30, size 0x18, align 4 | MNotSaved
    float32 m_flCurScroll; // offset 0xC48, size 0x4, align 4 | MNotSaved
    float32 m_flScrollSpeed; // offset 0xC4C, size 0x4, align 4 | MNotSaved
    uint16 m_RopeFlags; // offset 0xC50, size 0x2, align 2 | MNotSaved
    char _pad_0C52[0x6]; // offset 0xC52
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // offset 0xC58, size 0x8, align 8 | MNotSaved
    char _pad_0C60[0x270]; // offset 0xC60
    uint8 m_nSegments; // offset 0xED0, size 0x1, align 1 | MNotSaved
    char _pad_0ED1[0x3]; // offset 0xED1
    CHandle< C_BaseEntity > m_hStartPoint; // offset 0xED4, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hEndPoint; // offset 0xED8, size 0x4, align 4 | MNotSaved
    AttachmentHandle_t m_iStartAttachment; // offset 0xEDC, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_iEndAttachment; // offset 0xEDD, size 0x1, align 255 | MNotSaved
    uint8 m_Subdiv; // offset 0xEDE, size 0x1, align 1 | MNotSaved
    char _pad_0EDF[0x1]; // offset 0xEDF
    int16 m_RopeLength; // offset 0xEE0, size 0x2, align 2 | MNotSaved
    int16 m_Slack; // offset 0xEE2, size 0x2, align 2 | MNotSaved
    float32 m_TextureScale; // offset 0xEE4, size 0x4, align 4 | MNotSaved
    uint8 m_fLockedPoints; // offset 0xEE8, size 0x1, align 1 | MNotSaved
    uint8 m_nChangeCount; // offset 0xEE9, size 0x1, align 1 | MNotSaved
    char _pad_0EEA[0x2]; // offset 0xEEA
    float32 m_Width; // offset 0xEEC, size 0x4, align 4 | MNotSaved
    C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // offset 0xEF0, size 0x10, align 255 | MNotSaved
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0xF00, size 0x8, align 8 | MNotSaved
    int32 m_TextureHeight; // offset 0xF08, size 0x4, align 4 | MNotSaved
    Vector m_vecImpulse; // offset 0xF0C, size 0xC, align 4 | MNotSaved
    Vector m_vecPreviousImpulse; // offset 0xF18, size 0xC, align 4 | MNotSaved
    float32 m_flCurrentGustTimer; // offset 0xF24, size 0x4, align 4 | MNotSaved
    float32 m_flCurrentGustLifetime; // offset 0xF28, size 0x4, align 4 | MNotSaved
    float32 m_flTimeToNextGust; // offset 0xF2C, size 0x4, align 4 | MNotSaved
    Vector m_vWindDir; // offset 0xF30, size 0xC, align 4 | MNotSaved
    Vector m_vColorMod; // offset 0xF3C, size 0xC, align 4 | MNotSaved
    VectorWS[2] m_vCachedEndPointAttachmentPos; // offset 0xF48, size 0x18, align 4 | MNotSaved
    QAngle[2] m_vCachedEndPointAttachmentAngle; // offset 0xF60, size 0x18, align 4 | MNotSaved
    bool m_bConstrainBetweenEndpoints; // offset 0xF78, size 0x1, align 1 | MNotSaved
    char _pad_0F79[0x7]; // offset 0xF79
};
