#pragma once

class C_RopeKeyframe : public C_BaseModelEntity /*0x0*/  // sizeof 0xF20, align 0x8 [vtable] (client)
{
public:
    uint8_t m_bPhysicsInitted : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentPositionsDirty : 1; // offset 0x0 | MNotSaved
    uint8_t m_bNewDataThisFrame : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentAnglesDirty : 1; // offset 0x0 | MNotSaved
    char _pad_0001[0xBB7]; // offset 0x1
    CBitVec< 10 > m_LinksTouchingSomething; // offset 0xBB8, size 0x4, align 4 | MNotSaved
    int32 m_nLinksTouchingSomething; // offset 0xBBC, size 0x4, align 4 | MNotSaved
    bool m_bApplyWind; // offset 0xBC0, size 0x1, align 1 | MNotSaved
    char _pad_0BC1[0x3]; // offset 0xBC1
    int32 m_fPrevLockedPoints; // offset 0xBC4, size 0x4, align 4 | MNotSaved
    int32 m_iForcePointMoveCounter; // offset 0xBC8, size 0x4, align 4 | MNotSaved
    bool[2] m_bPrevEndPointPos; // offset 0xBCC, size 0x2, align 1 | MNotSaved
    char _pad_0BCE[0x2]; // offset 0xBCE
    VectorWS[2] m_vPrevEndPointPos; // offset 0xBD0, size 0x18, align 4 | MNotSaved
    float32 m_flCurScroll; // offset 0xBE8, size 0x4, align 4 | MNotSaved
    float32 m_flScrollSpeed; // offset 0xBEC, size 0x4, align 4 | MNotSaved
    uint16 m_RopeFlags; // offset 0xBF0, size 0x2, align 2 | MNotSaved
    char _pad_0BF2[0x6]; // offset 0xBF2
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // offset 0xBF8, size 0x8, align 8 | MNotSaved
    char _pad_0C00[0x270]; // offset 0xC00
    uint8 m_nSegments; // offset 0xE70, size 0x1, align 1 | MNotSaved
    char _pad_0E71[0x3]; // offset 0xE71
    CHandle< C_BaseEntity > m_hStartPoint; // offset 0xE74, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hEndPoint; // offset 0xE78, size 0x4, align 4 | MNotSaved
    AttachmentHandle_t m_iStartAttachment; // offset 0xE7C, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_iEndAttachment; // offset 0xE7D, size 0x1, align 255 | MNotSaved
    uint8 m_Subdiv; // offset 0xE7E, size 0x1, align 1 | MNotSaved
    char _pad_0E7F[0x1]; // offset 0xE7F
    int16 m_RopeLength; // offset 0xE80, size 0x2, align 2 | MNotSaved
    int16 m_Slack; // offset 0xE82, size 0x2, align 2 | MNotSaved
    float32 m_TextureScale; // offset 0xE84, size 0x4, align 4 | MNotSaved
    uint8 m_fLockedPoints; // offset 0xE88, size 0x1, align 1 | MNotSaved
    uint8 m_nChangeCount; // offset 0xE89, size 0x1, align 1 | MNotSaved
    char _pad_0E8A[0x2]; // offset 0xE8A
    float32 m_Width; // offset 0xE8C, size 0x4, align 4 | MNotSaved
    C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // offset 0xE90, size 0x10, align 255 | MNotSaved
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0xEA0, size 0x8, align 8 | MNotSaved
    int32 m_TextureHeight; // offset 0xEA8, size 0x4, align 4 | MNotSaved
    Vector m_vecImpulse; // offset 0xEAC, size 0xC, align 4 | MNotSaved
    Vector m_vecPreviousImpulse; // offset 0xEB8, size 0xC, align 4 | MNotSaved
    float32 m_flCurrentGustTimer; // offset 0xEC4, size 0x4, align 4 | MNotSaved
    float32 m_flCurrentGustLifetime; // offset 0xEC8, size 0x4, align 4 | MNotSaved
    float32 m_flTimeToNextGust; // offset 0xECC, size 0x4, align 4 | MNotSaved
    Vector m_vWindDir; // offset 0xED0, size 0xC, align 4 | MNotSaved
    Vector m_vColorMod; // offset 0xEDC, size 0xC, align 4 | MNotSaved
    VectorWS[2] m_vCachedEndPointAttachmentPos; // offset 0xEE8, size 0x18, align 4 | MNotSaved
    QAngle[2] m_vCachedEndPointAttachmentAngle; // offset 0xF00, size 0x18, align 4 | MNotSaved
    bool m_bConstrainBetweenEndpoints; // offset 0xF18, size 0x1, align 1 | MNotSaved
    char _pad_0F19[0x7]; // offset 0xF19
};
