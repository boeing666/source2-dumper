#pragma once

class C_RopeKeyframe : public C_BaseModelEntity /*0x0*/  // sizeof 0x10D8, align 0x8 [vtable] (client)
{
public:
    uint8_t m_bPhysicsInitted : 1; // offset 0x0 | MNotSaved
    uint8_t m_bNewDataThisFrame : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentAnglesDirty : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentPositionsDirty : 1; // offset 0x0 | MNotSaved
    char _pad_0001[0xD6F]; // offset 0x1
    CBitVec< 10 > m_LinksTouchingSomething; // offset 0xD70, size 0x4, align 4 | MNotSaved
    int32 m_nLinksTouchingSomething; // offset 0xD74, size 0x4, align 4 | MNotSaved
    bool m_bApplyWind; // offset 0xD78, size 0x1, align 1 | MNotSaved
    char _pad_0D79[0x3]; // offset 0xD79
    int32 m_fPrevLockedPoints; // offset 0xD7C, size 0x4, align 4 | MNotSaved
    int32 m_iForcePointMoveCounter; // offset 0xD80, size 0x4, align 4 | MNotSaved
    bool[2] m_bPrevEndPointPos; // offset 0xD84, size 0x2, align 1 | MNotSaved
    char _pad_0D86[0x2]; // offset 0xD86
    VectorWS[2] m_vPrevEndPointPos; // offset 0xD88, size 0x18, align 4 | MNotSaved
    float32 m_flCurScroll; // offset 0xDA0, size 0x4, align 4 | MNotSaved
    float32 m_flScrollSpeed; // offset 0xDA4, size 0x4, align 4 | MNotSaved
    uint16 m_RopeFlags; // offset 0xDA8, size 0x2, align 2 | MNotSaved
    char _pad_0DAA[0x6]; // offset 0xDAA
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // offset 0xDB0, size 0x8, align 8 | MNotSaved
    char _pad_0DB8[0x270]; // offset 0xDB8
    uint8 m_nSegments; // offset 0x1028, size 0x1, align 1 | MNotSaved
    char _pad_1029[0x3]; // offset 0x1029
    CHandle< C_BaseEntity > m_hStartPoint; // offset 0x102C, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hEndPoint; // offset 0x1030, size 0x4, align 4 | MNotSaved
    AttachmentHandle_t m_iStartAttachment; // offset 0x1034, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_iEndAttachment; // offset 0x1035, size 0x1, align 255 | MNotSaved
    uint8 m_Subdiv; // offset 0x1036, size 0x1, align 1 | MNotSaved
    char _pad_1037[0x1]; // offset 0x1037
    int16 m_RopeLength; // offset 0x1038, size 0x2, align 2 | MNotSaved
    int16 m_Slack; // offset 0x103A, size 0x2, align 2 | MNotSaved
    float32 m_TextureScale; // offset 0x103C, size 0x4, align 4 | MNotSaved
    uint8 m_fLockedPoints; // offset 0x1040, size 0x1, align 1 | MNotSaved
    uint8 m_nChangeCount; // offset 0x1041, size 0x1, align 1 | MNotSaved
    char _pad_1042[0x2]; // offset 0x1042
    float32 m_Width; // offset 0x1044, size 0x4, align 4 | MNotSaved
    C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // offset 0x1048, size 0x10, align 255 | MNotSaved
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0x1058, size 0x8, align 8 | MNotSaved
    int32 m_TextureHeight; // offset 0x1060, size 0x4, align 4 | MNotSaved
    Vector m_vecImpulse; // offset 0x1064, size 0xC, align 4 | MNotSaved
    Vector m_vecPreviousImpulse; // offset 0x1070, size 0xC, align 4 | MNotSaved
    float32 m_flCurrentGustTimer; // offset 0x107C, size 0x4, align 4 | MNotSaved
    float32 m_flCurrentGustLifetime; // offset 0x1080, size 0x4, align 4 | MNotSaved
    float32 m_flTimeToNextGust; // offset 0x1084, size 0x4, align 4 | MNotSaved
    Vector m_vWindDir; // offset 0x1088, size 0xC, align 4 | MNotSaved
    Vector m_vColorMod; // offset 0x1094, size 0xC, align 4 | MNotSaved
    VectorWS[2] m_vCachedEndPointAttachmentPos; // offset 0x10A0, size 0x18, align 4 | MNotSaved
    QAngle[2] m_vCachedEndPointAttachmentAngle; // offset 0x10B8, size 0x18, align 4 | MNotSaved
    bool m_bConstrainBetweenEndpoints; // offset 0x10D0, size 0x1, align 1 | MNotSaved
    char _pad_10D1[0x7]; // offset 0x10D1
};
