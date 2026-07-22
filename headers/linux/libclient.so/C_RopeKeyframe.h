#pragma once

class C_RopeKeyframe : public C_BaseModelEntity /*0x0*/  // sizeof 0x12A8, align 0x8 [vtable] (client)
{
public:
    uint8_t m_bPhysicsInitted : 1; // offset 0x0 | MNotSaved
    uint8_t m_bNewDataThisFrame : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentAnglesDirty : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentPositionsDirty : 1; // offset 0x0 | MNotSaved
    char _pad_0001[0xF3F]; // offset 0x1
    CBitVec< 10 > m_LinksTouchingSomething; // offset 0xF40, size 0x4, align 4 | MNotSaved
    int32 m_nLinksTouchingSomething; // offset 0xF44, size 0x4, align 4 | MNotSaved
    bool m_bApplyWind; // offset 0xF48, size 0x1, align 1 | MNotSaved
    char _pad_0F49[0x3]; // offset 0xF49
    int32 m_fPrevLockedPoints; // offset 0xF4C, size 0x4, align 4 | MNotSaved
    int32 m_iForcePointMoveCounter; // offset 0xF50, size 0x4, align 4 | MNotSaved
    bool[2] m_bPrevEndPointPos; // offset 0xF54, size 0x2, align 1 | MNotSaved
    char _pad_0F56[0x2]; // offset 0xF56
    VectorWS[2] m_vPrevEndPointPos; // offset 0xF58, size 0x18, align 4 | MNotSaved
    float32 m_flCurScroll; // offset 0xF70, size 0x4, align 4 | MNotSaved
    float32 m_flScrollSpeed; // offset 0xF74, size 0x4, align 4 | MNotSaved
    uint16 m_RopeFlags; // offset 0xF78, size 0x2, align 2 | MNotSaved
    char _pad_0F7A[0x6]; // offset 0xF7A
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // offset 0xF80, size 0x8, align 8 | MNotSaved
    char _pad_0F88[0x270]; // offset 0xF88
    uint8 m_nSegments; // offset 0x11F8, size 0x1, align 1 | MNotSaved
    char _pad_11F9[0x3]; // offset 0x11F9
    CHandle< C_BaseEntity > m_hStartPoint; // offset 0x11FC, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hEndPoint; // offset 0x1200, size 0x4, align 4 | MNotSaved
    AttachmentHandle_t m_iStartAttachment; // offset 0x1204, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_iEndAttachment; // offset 0x1205, size 0x1, align 255 | MNotSaved
    uint8 m_Subdiv; // offset 0x1206, size 0x1, align 1 | MNotSaved
    char _pad_1207[0x1]; // offset 0x1207
    int16 m_RopeLength; // offset 0x1208, size 0x2, align 2 | MNotSaved
    int16 m_Slack; // offset 0x120A, size 0x2, align 2 | MNotSaved
    float32 m_TextureScale; // offset 0x120C, size 0x4, align 4 | MNotSaved
    uint8 m_fLockedPoints; // offset 0x1210, size 0x1, align 1 | MNotSaved
    uint8 m_nChangeCount; // offset 0x1211, size 0x1, align 1 | MNotSaved
    char _pad_1212[0x2]; // offset 0x1212
    float32 m_Width; // offset 0x1214, size 0x4, align 4 | MNotSaved
    C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // offset 0x1218, size 0x10, align 255 | MNotSaved
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0x1228, size 0x8, align 8 | MNotSaved
    int32 m_TextureHeight; // offset 0x1230, size 0x4, align 4 | MNotSaved
    Vector m_vecImpulse; // offset 0x1234, size 0xC, align 4 | MNotSaved
    Vector m_vecPreviousImpulse; // offset 0x1240, size 0xC, align 4 | MNotSaved
    float32 m_flCurrentGustTimer; // offset 0x124C, size 0x4, align 4 | MNotSaved
    float32 m_flCurrentGustLifetime; // offset 0x1250, size 0x4, align 4 | MNotSaved
    float32 m_flTimeToNextGust; // offset 0x1254, size 0x4, align 4 | MNotSaved
    Vector m_vWindDir; // offset 0x1258, size 0xC, align 4 | MNotSaved
    Vector m_vColorMod; // offset 0x1264, size 0xC, align 4 | MNotSaved
    VectorWS[2] m_vCachedEndPointAttachmentPos; // offset 0x1270, size 0x18, align 4 | MNotSaved
    QAngle[2] m_vCachedEndPointAttachmentAngle; // offset 0x1288, size 0x18, align 4 | MNotSaved
    bool m_bConstrainBetweenEndpoints; // offset 0x12A0, size 0x1, align 1 | MNotSaved
    char _pad_12A1[0x7]; // offset 0x12A1
};
