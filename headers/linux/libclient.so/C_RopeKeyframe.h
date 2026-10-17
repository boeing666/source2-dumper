#pragma once

class C_RopeKeyframe : public C_BaseModelEntity /*0x0*/  // sizeof 0x1070, align 0x8 [vtable] (client)
{
public:
    uint8_t m_bPhysicsInitted : 1; // offset 0x0 | MNotSaved
    uint8_t m_bNewDataThisFrame : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentAnglesDirty : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentPositionsDirty : 1; // offset 0x0 | MNotSaved
    char _pad_0001[0xD07]; // offset 0x1
    CBitVec< 10 > m_LinksTouchingSomething; // offset 0xD08, size 0x4, align 4 | MNotSaved
    int32 m_nLinksTouchingSomething; // offset 0xD0C, size 0x4, align 4 | MNotSaved
    bool m_bApplyWind; // offset 0xD10, size 0x1, align 1 | MNotSaved
    char _pad_0D11[0x3]; // offset 0xD11
    int32 m_fPrevLockedPoints; // offset 0xD14, size 0x4, align 4 | MNotSaved
    int32 m_iForcePointMoveCounter; // offset 0xD18, size 0x4, align 4 | MNotSaved
    bool[2] m_bPrevEndPointPos; // offset 0xD1C, size 0x2, align 1 | MNotSaved
    char _pad_0D1E[0x2]; // offset 0xD1E
    VectorWS[2] m_vPrevEndPointPos; // offset 0xD20, size 0x18, align 4 | MNotSaved
    float32 m_flCurScroll; // offset 0xD38, size 0x4, align 4 | MNotSaved
    float32 m_flScrollSpeed; // offset 0xD3C, size 0x4, align 4 | MNotSaved
    uint16 m_RopeFlags; // offset 0xD40, size 0x2, align 2 | MNotSaved
    char _pad_0D42[0x6]; // offset 0xD42
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // offset 0xD48, size 0x8, align 8 | MNotSaved
    char _pad_0D50[0x270]; // offset 0xD50
    uint8 m_nSegments; // offset 0xFC0, size 0x1, align 1 | MNotSaved
    char _pad_0FC1[0x3]; // offset 0xFC1
    CHandle< C_BaseEntity > m_hStartPoint; // offset 0xFC4, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hEndPoint; // offset 0xFC8, size 0x4, align 4 | MNotSaved
    AttachmentHandle_t m_iStartAttachment; // offset 0xFCC, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_iEndAttachment; // offset 0xFCD, size 0x1, align 255 | MNotSaved
    uint8 m_Subdiv; // offset 0xFCE, size 0x1, align 1 | MNotSaved
    char _pad_0FCF[0x1]; // offset 0xFCF
    int16 m_RopeLength; // offset 0xFD0, size 0x2, align 2 | MNotSaved
    int16 m_Slack; // offset 0xFD2, size 0x2, align 2 | MNotSaved
    float32 m_TextureScale; // offset 0xFD4, size 0x4, align 4 | MNotSaved
    uint8 m_fLockedPoints; // offset 0xFD8, size 0x1, align 1 | MNotSaved
    uint8 m_nChangeCount; // offset 0xFD9, size 0x1, align 1 | MNotSaved
    char _pad_0FDA[0x2]; // offset 0xFDA
    float32 m_Width; // offset 0xFDC, size 0x4, align 4 | MNotSaved
    C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // offset 0xFE0, size 0x10, align 255 | MNotSaved
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0xFF0, size 0x8, align 8 | MNotSaved
    int32 m_TextureHeight; // offset 0xFF8, size 0x4, align 4 | MNotSaved
    Vector m_vecImpulse; // offset 0xFFC, size 0xC, align 4 | MNotSaved
    Vector m_vecPreviousImpulse; // offset 0x1008, size 0xC, align 4 | MNotSaved
    float32 m_flCurrentGustTimer; // offset 0x1014, size 0x4, align 4 | MNotSaved
    float32 m_flCurrentGustLifetime; // offset 0x1018, size 0x4, align 4 | MNotSaved
    float32 m_flTimeToNextGust; // offset 0x101C, size 0x4, align 4 | MNotSaved
    Vector m_vWindDir; // offset 0x1020, size 0xC, align 4 | MNotSaved
    Vector m_vColorMod; // offset 0x102C, size 0xC, align 4 | MNotSaved
    VectorWS[2] m_vCachedEndPointAttachmentPos; // offset 0x1038, size 0x18, align 4 | MNotSaved
    QAngle[2] m_vCachedEndPointAttachmentAngle; // offset 0x1050, size 0x18, align 4 | MNotSaved
    bool m_bConstrainBetweenEndpoints; // offset 0x1068, size 0x1, align 1 | MNotSaved
    char _pad_1069[0x7]; // offset 0x1069
};
