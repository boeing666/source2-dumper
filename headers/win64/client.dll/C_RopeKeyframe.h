#pragma once

class C_RopeKeyframe : public C_BaseModelEntity /*0x0*/  // sizeof 0xF48, align 0x8 [vtable] (client)
{
public:
    uint8_t m_bPhysicsInitted : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentPositionsDirty : 1; // offset 0x0 | MNotSaved
    uint8_t m_bNewDataThisFrame : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentAnglesDirty : 1; // offset 0x0 | MNotSaved
    char _pad_0001[0xBDF]; // offset 0x1
    CBitVec< 10 > m_LinksTouchingSomething; // offset 0xBE0, size 0x4, align 4 | MNotSaved
    int32 m_nLinksTouchingSomething; // offset 0xBE4, size 0x4, align 4 | MNotSaved
    bool m_bApplyWind; // offset 0xBE8, size 0x1, align 1 | MNotSaved
    char _pad_0BE9[0x3]; // offset 0xBE9
    int32 m_fPrevLockedPoints; // offset 0xBEC, size 0x4, align 4 | MNotSaved
    int32 m_iForcePointMoveCounter; // offset 0xBF0, size 0x4, align 4 | MNotSaved
    bool[2] m_bPrevEndPointPos; // offset 0xBF4, size 0x2, align 1 | MNotSaved
    char _pad_0BF6[0x2]; // offset 0xBF6
    VectorWS[2] m_vPrevEndPointPos; // offset 0xBF8, size 0x18, align 4 | MNotSaved
    float32 m_flCurScroll; // offset 0xC10, size 0x4, align 4 | MNotSaved
    float32 m_flScrollSpeed; // offset 0xC14, size 0x4, align 4 | MNotSaved
    uint16 m_RopeFlags; // offset 0xC18, size 0x2, align 2 | MNotSaved
    char _pad_0C1A[0x6]; // offset 0xC1A
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // offset 0xC20, size 0x8, align 8 | MNotSaved
    char _pad_0C28[0x270]; // offset 0xC28
    uint8 m_nSegments; // offset 0xE98, size 0x1, align 1 | MNotSaved
    char _pad_0E99[0x3]; // offset 0xE99
    CHandle< C_BaseEntity > m_hStartPoint; // offset 0xE9C, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hEndPoint; // offset 0xEA0, size 0x4, align 4 | MNotSaved
    AttachmentHandle_t m_iStartAttachment; // offset 0xEA4, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_iEndAttachment; // offset 0xEA5, size 0x1, align 255 | MNotSaved
    uint8 m_Subdiv; // offset 0xEA6, size 0x1, align 1 | MNotSaved
    char _pad_0EA7[0x1]; // offset 0xEA7
    int16 m_RopeLength; // offset 0xEA8, size 0x2, align 2 | MNotSaved
    int16 m_Slack; // offset 0xEAA, size 0x2, align 2 | MNotSaved
    float32 m_TextureScale; // offset 0xEAC, size 0x4, align 4 | MNotSaved
    uint8 m_fLockedPoints; // offset 0xEB0, size 0x1, align 1 | MNotSaved
    uint8 m_nChangeCount; // offset 0xEB1, size 0x1, align 1 | MNotSaved
    char _pad_0EB2[0x2]; // offset 0xEB2
    float32 m_Width; // offset 0xEB4, size 0x4, align 4 | MNotSaved
    C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // offset 0xEB8, size 0x10, align 255 | MNotSaved
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0xEC8, size 0x8, align 8 | MNotSaved
    int32 m_TextureHeight; // offset 0xED0, size 0x4, align 4 | MNotSaved
    Vector m_vecImpulse; // offset 0xED4, size 0xC, align 4 | MNotSaved
    Vector m_vecPreviousImpulse; // offset 0xEE0, size 0xC, align 4 | MNotSaved
    float32 m_flCurrentGustTimer; // offset 0xEEC, size 0x4, align 4 | MNotSaved
    float32 m_flCurrentGustLifetime; // offset 0xEF0, size 0x4, align 4 | MNotSaved
    float32 m_flTimeToNextGust; // offset 0xEF4, size 0x4, align 4 | MNotSaved
    Vector m_vWindDir; // offset 0xEF8, size 0xC, align 4 | MNotSaved
    Vector m_vColorMod; // offset 0xF04, size 0xC, align 4 | MNotSaved
    VectorWS[2] m_vCachedEndPointAttachmentPos; // offset 0xF10, size 0x18, align 4 | MNotSaved
    QAngle[2] m_vCachedEndPointAttachmentAngle; // offset 0xF28, size 0x18, align 4 | MNotSaved
    bool m_bConstrainBetweenEndpoints; // offset 0xF40, size 0x1, align 1 | MNotSaved
    char _pad_0F41[0x7]; // offset 0xF41
};
