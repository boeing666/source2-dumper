#pragma once

class C_RopeKeyframe : public C_BaseModelEntity /*0x0*/  // sizeof 0xD18, align 0x8 [vtable] (client) {MNetworkIncludeByUserGroup MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    uint8_t m_bPhysicsInitted : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentPositionsDirty : 1; // offset 0x0 | MNotSaved
    uint8_t m_bNewDataThisFrame : 1; // offset 0x0 | MNotSaved
    uint8_t m_bEndPointAttachmentAnglesDirty : 1; // offset 0x0 | MNotSaved
    char _pad_0001[0x9AF]; // offset 0x1
    CBitVec< 10 > m_LinksTouchingSomething; // offset 0x9B0, size 0x4, align 4 | MNotSaved
    int32 m_nLinksTouchingSomething; // offset 0x9B4, size 0x4, align 4 | MNotSaved
    bool m_bApplyWind; // offset 0x9B8, size 0x1, align 1 | MNotSaved
    char _pad_09B9[0x3]; // offset 0x9B9
    int32 m_fPrevLockedPoints; // offset 0x9BC, size 0x4, align 4 | MNotSaved
    int32 m_iForcePointMoveCounter; // offset 0x9C0, size 0x4, align 4 | MNotSaved
    bool[2] m_bPrevEndPointPos; // offset 0x9C4, size 0x2, align 1 | MNotSaved
    char _pad_09C6[0x2]; // offset 0x9C6
    Vector[2] m_vPrevEndPointPos; // offset 0x9C8, size 0x18, align 4 | MNotSaved
    float32 m_flCurScroll; // offset 0x9E0, size 0x4, align 4 | MNotSaved
    float32 m_flScrollSpeed; // offset 0x9E4, size 0x4, align 4 | MNetworkEnable MNotSaved
    uint16 m_RopeFlags; // offset 0x9E8, size 0x2, align 2 | MNetworkEnable MNotSaved
    char _pad_09EA[0x6]; // offset 0x9EA
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_iRopeMaterialModelIndex; // offset 0x9F0, size 0x8, align 8 | MNetworkEnable MNotSaved
    char _pad_09F8[0x270]; // offset 0x9F8
    uint8 m_nSegments; // offset 0xC68, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_0C69[0x3]; // offset 0xC69
    CHandle< C_BaseEntity > m_hStartPoint; // offset 0xC6C, size 0x4, align 4 | MNetworkEnable MNotSaved
    CHandle< C_BaseEntity > m_hEndPoint; // offset 0xC70, size 0x4, align 4 | MNetworkEnable MNotSaved
    AttachmentHandle_t m_iStartAttachment; // offset 0xC74, size 0x1, align 255 | MNetworkEnable MNotSaved
    AttachmentHandle_t m_iEndAttachment; // offset 0xC75, size 0x1, align 255 | MNetworkEnable MNotSaved
    uint8 m_Subdiv; // offset 0xC76, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_0C77[0x1]; // offset 0xC77
    int16 m_RopeLength; // offset 0xC78, size 0x2, align 2 | MNetworkEnable MNetworkChangeCallback MNotSaved
    int16 m_Slack; // offset 0xC7A, size 0x2, align 2 | MNetworkEnable MNetworkChangeCallback MNotSaved
    float32 m_TextureScale; // offset 0xC7C, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNotSaved
    uint8 m_fLockedPoints; // offset 0xC80, size 0x1, align 1 | MNetworkEnable MNotSaved
    uint8 m_nChangeCount; // offset 0xC81, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_0C82[0x2]; // offset 0xC82
    float32 m_Width; // offset 0xC84, size 0x4, align 4 | MNetworkEnable MNotSaved
    C_RopeKeyframe::CPhysicsDelegate m_PhysicsDelegate; // offset 0xC88, size 0x10, align 255 | MNotSaved
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0xC98, size 0x8, align 8 | MNotSaved
    int32 m_TextureHeight; // offset 0xCA0, size 0x4, align 4 | MNotSaved
    Vector m_vecImpulse; // offset 0xCA4, size 0xC, align 4 | MNotSaved
    Vector m_vecPreviousImpulse; // offset 0xCB0, size 0xC, align 4 | MNotSaved
    float32 m_flCurrentGustTimer; // offset 0xCBC, size 0x4, align 4 | MNotSaved
    float32 m_flCurrentGustLifetime; // offset 0xCC0, size 0x4, align 4 | MNotSaved
    float32 m_flTimeToNextGust; // offset 0xCC4, size 0x4, align 4 | MNotSaved
    Vector m_vWindDir; // offset 0xCC8, size 0xC, align 4 | MNotSaved
    Vector m_vColorMod; // offset 0xCD4, size 0xC, align 4 | MNotSaved
    Vector[2] m_vCachedEndPointAttachmentPos; // offset 0xCE0, size 0x18, align 4 | MNotSaved
    QAngle[2] m_vCachedEndPointAttachmentAngle; // offset 0xCF8, size 0x18, align 4 | MNotSaved
    bool m_bConstrainBetweenEndpoints; // offset 0xD10, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_0D11[0x7]; // offset 0xD11
};
