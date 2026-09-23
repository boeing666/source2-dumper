#pragma once

class C_RopeKeyframe : public C_BaseModelEntity /*0x0*/  // sizeof 0x1408, align 0x8 [vtable] (client)
{
public:
    uint8_t m_bPhysicsInitted : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentPositionsDirty : 1; // offset 0x0 | MNotSaved
    uint8_t m_bNewDataThisFrame : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentAnglesDirty : 1; // offset 0x0 | MNotSaved
    char _pad_0001[0x109F]; // offset 0x1
    CBitVec< 10 > m_LinksTouchingSomething; // offset 0x10A0, size 0x4, align 4 | MNotSaved
    int32 m_nLinksTouchingSomething; // offset 0x10A4, size 0x4, align 4 | MNotSaved
    bool m_bApplyWind; // offset 0x10A8, size 0x1, align 1 | MNotSaved
    char _pad_10A9[0x3]; // offset 0x10A9
    int32 m_fPrevLockedPoints; // offset 0x10AC, size 0x4, align 4 | MNotSaved
    int32 m_iForcePointMoveCounter; // offset 0x10B0, size 0x4, align 4 | MNotSaved
    bool[2] m_bPrevEndPointPos; // offset 0x10B4, size 0x2, align 1 | MNotSaved
    char _pad_10B6[0x2]; // offset 0x10B6
    VectorWS[2] m_vPrevEndPointPos; // offset 0x10B8, size 0x18, align 4 | MNotSaved
    float32 m_flCurScroll; // offset 0x10D0, size 0x4, align 4 | MNotSaved
    float32 m_flScrollSpeed; // offset 0x10D4, size 0x4, align 4 | MNotSaved
    uint16 m_RopeFlags; // offset 0x10D8, size 0x2, align 2 | MNotSaved
    char _pad_10DA[0x6]; // offset 0x10DA
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // offset 0x10E0, size 0x8, align 8 | MNotSaved
    char _pad_10E8[0x270]; // offset 0x10E8
    uint8 m_nSegments; // offset 0x1358, size 0x1, align 1 | MNotSaved
    char _pad_1359[0x3]; // offset 0x1359
    CHandle< C_BaseEntity > m_hStartPoint; // offset 0x135C, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hEndPoint; // offset 0x1360, size 0x4, align 4 | MNotSaved
    AttachmentHandle_t m_iStartAttachment; // offset 0x1364, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_iEndAttachment; // offset 0x1365, size 0x1, align 255 | MNotSaved
    uint8 m_Subdiv; // offset 0x1366, size 0x1, align 1 | MNotSaved
    char _pad_1367[0x1]; // offset 0x1367
    int16 m_RopeLength; // offset 0x1368, size 0x2, align 2 | MNotSaved
    int16 m_Slack; // offset 0x136A, size 0x2, align 2 | MNotSaved
    float32 m_TextureScale; // offset 0x136C, size 0x4, align 4 | MNotSaved
    uint8 m_fLockedPoints; // offset 0x1370, size 0x1, align 1 | MNotSaved
    uint8 m_nChangeCount; // offset 0x1371, size 0x1, align 1 | MNotSaved
    char _pad_1372[0x2]; // offset 0x1372
    float32 m_Width; // offset 0x1374, size 0x4, align 4 | MNotSaved
    C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // offset 0x1378, size 0x10, align 255 | MNotSaved
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0x1388, size 0x8, align 8 | MNotSaved
    int32 m_TextureHeight; // offset 0x1390, size 0x4, align 4 | MNotSaved
    Vector m_vecImpulse; // offset 0x1394, size 0xC, align 4 | MNotSaved
    Vector m_vecPreviousImpulse; // offset 0x13A0, size 0xC, align 4 | MNotSaved
    float32 m_flCurrentGustTimer; // offset 0x13AC, size 0x4, align 4 | MNotSaved
    float32 m_flCurrentGustLifetime; // offset 0x13B0, size 0x4, align 4 | MNotSaved
    float32 m_flTimeToNextGust; // offset 0x13B4, size 0x4, align 4 | MNotSaved
    Vector m_vWindDir; // offset 0x13B8, size 0xC, align 4 | MNotSaved
    Vector m_vColorMod; // offset 0x13C4, size 0xC, align 4 | MNotSaved
    VectorWS[2] m_vCachedEndPointAttachmentPos; // offset 0x13D0, size 0x18, align 4 | MNotSaved
    QAngle[2] m_vCachedEndPointAttachmentAngle; // offset 0x13E8, size 0x18, align 4 | MNotSaved
    bool m_bConstrainBetweenEndpoints; // offset 0x1400, size 0x1, align 1 | MNotSaved
    char _pad_1401[0x7]; // offset 0x1401
};
