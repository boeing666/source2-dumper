#pragma once

class CDecalInstance  // sizeof 0xB0, align 0xFF (client)
{
public:
    CGlobalSymbol m_sDecalGroup; // offset 0x0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0x8, size 0x8, align 8
    CUtlStringToken m_sSequenceName; // offset 0x10, size 0x4, align 4
    CHandle< C_BaseEntity > m_hEntity; // offset 0x14, size 0x4, align 4
    int32 m_nBoneIndex; // offset 0x18, size 0x4, align 4
    int32 m_nTriangleIndex; // offset 0x1C, size 0x4, align 4
    Vector m_vPositionLS; // offset 0x20, size 0xC, align 4
    Vector m_vNormalLS; // offset 0x2C, size 0xC, align 4
    Vector m_vSAxisLS; // offset 0x38, size 0xC, align 4
    DecalFlags_t m_nFlags; // offset 0x44, size 0x4, align 4
    Color m_Color; // offset 0x48, size 0x4, align 1
    float32 m_flWidth; // offset 0x4C, size 0x4, align 4
    float32 m_flHeight; // offset 0x50, size 0x4, align 4
    float32 m_flDepth; // offset 0x54, size 0x4, align 4
    char _pad_0058[0x8]; // offset 0x58
    CTransformWS m_transform; // offset 0x60, size 0x20, align 16
    float32 m_flAnimationScale; // offset 0x80, size 0x4, align 4
    float32 m_flAnimationStartTime; // offset 0x84, size 0x4, align 4
    GameTime_t m_flPlaceTime; // offset 0x88, size 0x4, align 255
    float32 m_flFadeStartTime; // offset 0x8C, size 0x4, align 4
    float32 m_flFadeDuration; // offset 0x90, size 0x4, align 4
    float32 m_flLightingOriginOffset; // offset 0x94, size 0x4, align 4
    char _pad_0098[0x8]; // offset 0x98
    float32 m_flBoundingRadiusSqr; // offset 0xA0, size 0x4, align 4
    int16 m_nSequenceIndex; // offset 0xA4, size 0x2, align 2 | MNotSaved
    bool m_bIsAdjacent; // offset 0xA6, size 0x1, align 1 | MNotSaved
    bool m_bDoDecalLightmapping; // offset 0xA7, size 0x1, align 1
    DecalRtEncoding_t m_nDecalRtEncoding; // offset 0xA8, size 0x1, align 1
    bool m_bProjectToBackfaces; // offset 0xA9, size 0x1, align 1
    char _pad_00AA[0x6]; // offset 0xAA
};
