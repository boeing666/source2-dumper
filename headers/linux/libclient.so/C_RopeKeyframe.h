#pragma once

class C_RopeKeyframe : public C_BaseModelEntity /*0x0*/  // sizeof 0x1390, align 0x8 [vtable] (client)
{
public:
    uint8_t m_bPhysicsInitted : 1; // offset 0x0 | MNotSaved
    uint8_t m_bNewDataThisFrame : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentAnglesDirty : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentPositionsDirty : 1; // offset 0x0 | MNotSaved
    char _pad_0001[0x1027]; // offset 0x1
    CBitVec< 10 > m_LinksTouchingSomething; // offset 0x1028, size 0x4, align 4 | MNotSaved
    int32 m_nLinksTouchingSomething; // offset 0x102C, size 0x4, align 4 | MNotSaved
    bool m_bApplyWind; // offset 0x1030, size 0x1, align 1 | MNotSaved
    char _pad_1031[0x3]; // offset 0x1031
    int32 m_fPrevLockedPoints; // offset 0x1034, size 0x4, align 4 | MNotSaved
    int32 m_iForcePointMoveCounter; // offset 0x1038, size 0x4, align 4 | MNotSaved
    bool[2] m_bPrevEndPointPos; // offset 0x103C, size 0x2, align 1 | MNotSaved
    char _pad_103E[0x2]; // offset 0x103E
    VectorWS[2] m_vPrevEndPointPos; // offset 0x1040, size 0x18, align 4 | MNotSaved
    float32 m_flCurScroll; // offset 0x1058, size 0x4, align 4 | MNotSaved
    float32 m_flScrollSpeed; // offset 0x105C, size 0x4, align 4 | MNotSaved
    uint16 m_RopeFlags; // offset 0x1060, size 0x2, align 2 | MNotSaved
    char _pad_1062[0x6]; // offset 0x1062
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // offset 0x1068, size 0x8, align 8 | MNotSaved
    char _pad_1070[0x270]; // offset 0x1070
    uint8 m_nSegments; // offset 0x12E0, size 0x1, align 1 | MNotSaved
    char _pad_12E1[0x3]; // offset 0x12E1
    CHandle< C_BaseEntity > m_hStartPoint; // offset 0x12E4, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hEndPoint; // offset 0x12E8, size 0x4, align 4 | MNotSaved
    AttachmentHandle_t m_iStartAttachment; // offset 0x12EC, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_iEndAttachment; // offset 0x12ED, size 0x1, align 255 | MNotSaved
    uint8 m_Subdiv; // offset 0x12EE, size 0x1, align 1 | MNotSaved
    char _pad_12EF[0x1]; // offset 0x12EF
    int16 m_RopeLength; // offset 0x12F0, size 0x2, align 2 | MNotSaved
    int16 m_Slack; // offset 0x12F2, size 0x2, align 2 | MNotSaved
    float32 m_TextureScale; // offset 0x12F4, size 0x4, align 4 | MNotSaved
    uint8 m_fLockedPoints; // offset 0x12F8, size 0x1, align 1 | MNotSaved
    uint8 m_nChangeCount; // offset 0x12F9, size 0x1, align 1 | MNotSaved
    char _pad_12FA[0x2]; // offset 0x12FA
    float32 m_Width; // offset 0x12FC, size 0x4, align 4 | MNotSaved
    C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // offset 0x1300, size 0x10, align 255 | MNotSaved
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0x1310, size 0x8, align 8 | MNotSaved
    int32 m_TextureHeight; // offset 0x1318, size 0x4, align 4 | MNotSaved
    Vector m_vecImpulse; // offset 0x131C, size 0xC, align 4 | MNotSaved
    Vector m_vecPreviousImpulse; // offset 0x1328, size 0xC, align 4 | MNotSaved
    float32 m_flCurrentGustTimer; // offset 0x1334, size 0x4, align 4 | MNotSaved
    float32 m_flCurrentGustLifetime; // offset 0x1338, size 0x4, align 4 | MNotSaved
    float32 m_flTimeToNextGust; // offset 0x133C, size 0x4, align 4 | MNotSaved
    Vector m_vWindDir; // offset 0x1340, size 0xC, align 4 | MNotSaved
    Vector m_vColorMod; // offset 0x134C, size 0xC, align 4 | MNotSaved
    VectorWS[2] m_vCachedEndPointAttachmentPos; // offset 0x1358, size 0x18, align 4 | MNotSaved
    QAngle[2] m_vCachedEndPointAttachmentAngle; // offset 0x1370, size 0x18, align 4 | MNotSaved
    bool m_bConstrainBetweenEndpoints; // offset 0x1388, size 0x1, align 1 | MNotSaved
    char _pad_1389[0x7]; // offset 0x1389
};
