#pragma once

class C_RopeKeyframe : public C_BaseModelEntity /*0x0*/  // sizeof 0xDF8, align 0x8 [vtable] (client)
{
public:
    uint8_t m_bPhysicsInitted : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentPositionsDirty : 1; // offset 0x0 | MNotSaved
    uint8_t m_bNewDataThisFrame : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentAnglesDirty : 1; // offset 0x0 | MNotSaved
    char _pad_0001[0xA8F]; // offset 0x1
    CBitVec< 10 > m_LinksTouchingSomething; // offset 0xA90, size 0x4, align 4 | MNotSaved
    int32 m_nLinksTouchingSomething; // offset 0xA94, size 0x4, align 4 | MNotSaved
    bool m_bApplyWind; // offset 0xA98, size 0x1, align 1 | MNotSaved
    char _pad_0A99[0x3]; // offset 0xA99
    int32 m_fPrevLockedPoints; // offset 0xA9C, size 0x4, align 4 | MNotSaved
    int32 m_iForcePointMoveCounter; // offset 0xAA0, size 0x4, align 4 | MNotSaved
    bool[2] m_bPrevEndPointPos; // offset 0xAA4, size 0x2, align 1 | MNotSaved
    char _pad_0AA6[0x2]; // offset 0xAA6
    VectorWS[2] m_vPrevEndPointPos; // offset 0xAA8, size 0x18, align 4 | MNotSaved
    float32 m_flCurScroll; // offset 0xAC0, size 0x4, align 4 | MNotSaved
    float32 m_flScrollSpeed; // offset 0xAC4, size 0x4, align 4 | MNotSaved
    uint16 m_RopeFlags; // offset 0xAC8, size 0x2, align 2 | MNotSaved
    char _pad_0ACA[0x6]; // offset 0xACA
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // offset 0xAD0, size 0x8, align 8 | MNotSaved
    char _pad_0AD8[0x270]; // offset 0xAD8
    uint8 m_nSegments; // offset 0xD48, size 0x1, align 1 | MNotSaved
    char _pad_0D49[0x3]; // offset 0xD49
    CHandle< C_BaseEntity > m_hStartPoint; // offset 0xD4C, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hEndPoint; // offset 0xD50, size 0x4, align 4 | MNotSaved
    AttachmentHandle_t m_iStartAttachment; // offset 0xD54, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_iEndAttachment; // offset 0xD55, size 0x1, align 255 | MNotSaved
    uint8 m_Subdiv; // offset 0xD56, size 0x1, align 1 | MNotSaved
    char _pad_0D57[0x1]; // offset 0xD57
    int16 m_RopeLength; // offset 0xD58, size 0x2, align 2 | MNotSaved
    int16 m_Slack; // offset 0xD5A, size 0x2, align 2 | MNotSaved
    float32 m_TextureScale; // offset 0xD5C, size 0x4, align 4 | MNotSaved
    uint8 m_fLockedPoints; // offset 0xD60, size 0x1, align 1 | MNotSaved
    uint8 m_nChangeCount; // offset 0xD61, size 0x1, align 1 | MNotSaved
    char _pad_0D62[0x2]; // offset 0xD62
    float32 m_Width; // offset 0xD64, size 0x4, align 4 | MNotSaved
    C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // offset 0xD68, size 0x10, align 255 | MNotSaved
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0xD78, size 0x8, align 8 | MNotSaved
    int32 m_TextureHeight; // offset 0xD80, size 0x4, align 4 | MNotSaved
    Vector m_vecImpulse; // offset 0xD84, size 0xC, align 4 | MNotSaved
    Vector m_vecPreviousImpulse; // offset 0xD90, size 0xC, align 4 | MNotSaved
    float32 m_flCurrentGustTimer; // offset 0xD9C, size 0x4, align 4 | MNotSaved
    float32 m_flCurrentGustLifetime; // offset 0xDA0, size 0x4, align 4 | MNotSaved
    float32 m_flTimeToNextGust; // offset 0xDA4, size 0x4, align 4 | MNotSaved
    Vector m_vWindDir; // offset 0xDA8, size 0xC, align 4 | MNotSaved
    Vector m_vColorMod; // offset 0xDB4, size 0xC, align 4 | MNotSaved
    VectorWS[2] m_vCachedEndPointAttachmentPos; // offset 0xDC0, size 0x18, align 4 | MNotSaved
    QAngle[2] m_vCachedEndPointAttachmentAngle; // offset 0xDD8, size 0x18, align 4 | MNotSaved
    bool m_bConstrainBetweenEndpoints; // offset 0xDF0, size 0x1, align 1 | MNotSaved
    char _pad_0DF1[0x7]; // offset 0xDF1
};
