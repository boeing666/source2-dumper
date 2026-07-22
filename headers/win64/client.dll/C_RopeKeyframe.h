#pragma once

class C_RopeKeyframe : public C_BaseModelEntity /*0x0*/  // sizeof 0x1320, align 0x8 [vtable] (client)
{
public:
    uint8_t m_bPhysicsInitted : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentPositionsDirty : 1; // offset 0x0 | MNotSaved
    uint8_t m_bNewDataThisFrame : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentAnglesDirty : 1; // offset 0x0 | MNotSaved
    char _pad_0001[0xFB7]; // offset 0x1
    CBitVec< 10 > m_LinksTouchingSomething; // offset 0xFB8, size 0x4, align 4 | MNotSaved
    int32 m_nLinksTouchingSomething; // offset 0xFBC, size 0x4, align 4 | MNotSaved
    bool m_bApplyWind; // offset 0xFC0, size 0x1, align 1 | MNotSaved
    char _pad_0FC1[0x3]; // offset 0xFC1
    int32 m_fPrevLockedPoints; // offset 0xFC4, size 0x4, align 4 | MNotSaved
    int32 m_iForcePointMoveCounter; // offset 0xFC8, size 0x4, align 4 | MNotSaved
    bool[2] m_bPrevEndPointPos; // offset 0xFCC, size 0x2, align 1 | MNotSaved
    char _pad_0FCE[0x2]; // offset 0xFCE
    VectorWS[2] m_vPrevEndPointPos; // offset 0xFD0, size 0x18, align 4 | MNotSaved
    float32 m_flCurScroll; // offset 0xFE8, size 0x4, align 4 | MNotSaved
    float32 m_flScrollSpeed; // offset 0xFEC, size 0x4, align 4 | MNotSaved
    uint16 m_RopeFlags; // offset 0xFF0, size 0x2, align 2 | MNotSaved
    char _pad_0FF2[0x6]; // offset 0xFF2
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // offset 0xFF8, size 0x8, align 8 | MNotSaved
    char _pad_1000[0x270]; // offset 0x1000
    uint8 m_nSegments; // offset 0x1270, size 0x1, align 1 | MNotSaved
    char _pad_1271[0x3]; // offset 0x1271
    CHandle< C_BaseEntity > m_hStartPoint; // offset 0x1274, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hEndPoint; // offset 0x1278, size 0x4, align 4 | MNotSaved
    AttachmentHandle_t m_iStartAttachment; // offset 0x127C, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_iEndAttachment; // offset 0x127D, size 0x1, align 255 | MNotSaved
    uint8 m_Subdiv; // offset 0x127E, size 0x1, align 1 | MNotSaved
    char _pad_127F[0x1]; // offset 0x127F
    int16 m_RopeLength; // offset 0x1280, size 0x2, align 2 | MNotSaved
    int16 m_Slack; // offset 0x1282, size 0x2, align 2 | MNotSaved
    float32 m_TextureScale; // offset 0x1284, size 0x4, align 4 | MNotSaved
    uint8 m_fLockedPoints; // offset 0x1288, size 0x1, align 1 | MNotSaved
    uint8 m_nChangeCount; // offset 0x1289, size 0x1, align 1 | MNotSaved
    char _pad_128A[0x2]; // offset 0x128A
    float32 m_Width; // offset 0x128C, size 0x4, align 4 | MNotSaved
    C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // offset 0x1290, size 0x10, align 255 | MNotSaved
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0x12A0, size 0x8, align 8 | MNotSaved
    int32 m_TextureHeight; // offset 0x12A8, size 0x4, align 4 | MNotSaved
    Vector m_vecImpulse; // offset 0x12AC, size 0xC, align 4 | MNotSaved
    Vector m_vecPreviousImpulse; // offset 0x12B8, size 0xC, align 4 | MNotSaved
    float32 m_flCurrentGustTimer; // offset 0x12C4, size 0x4, align 4 | MNotSaved
    float32 m_flCurrentGustLifetime; // offset 0x12C8, size 0x4, align 4 | MNotSaved
    float32 m_flTimeToNextGust; // offset 0x12CC, size 0x4, align 4 | MNotSaved
    Vector m_vWindDir; // offset 0x12D0, size 0xC, align 4 | MNotSaved
    Vector m_vColorMod; // offset 0x12DC, size 0xC, align 4 | MNotSaved
    VectorWS[2] m_vCachedEndPointAttachmentPos; // offset 0x12E8, size 0x18, align 4 | MNotSaved
    QAngle[2] m_vCachedEndPointAttachmentAngle; // offset 0x1300, size 0x18, align 4 | MNotSaved
    bool m_bConstrainBetweenEndpoints; // offset 0x1318, size 0x1, align 1 | MNotSaved
    char _pad_1319[0x7]; // offset 0x1319
};
