#pragma once

class CDecalInstance  // sizeof 0xC0, align 0x10 (client) {MGetKV3ClassDefaults}
{
public:
    CGlobalSymbol m_sDecalGroup; // offset 0x0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hMaterial; // offset 0x8, size 0x8, align 8
    CUtlStringToken m_sSequenceName; // offset 0x10, size 0x4, align 4
    CHandle< C_BaseEntity > m_hEntity; // offset 0x14, size 0x4, align 4
    int32 m_nBoneIndex; // offset 0x18, size 0x4, align 4
    int32 m_nTriangleIndex; // offset 0x1C, size 0x4, align 4
    Vector m_vPositionLS; // offset 0x20, size 0xC, align 4
    Vector m_vPositionOS; // offset 0x2C, size 0xC, align 4
    Vector m_vNormalLS; // offset 0x38, size 0xC, align 4
    Vector m_vNormalOS; // offset 0x44, size 0xC, align 4
    Vector m_vSAxisLS; // offset 0x50, size 0xC, align 4
    DecalFlags_t m_nFlags; // offset 0x5C, size 0x4, align 4
    Color m_Color; // offset 0x60, size 0x4, align 1
    float32 m_flWidth; // offset 0x64, size 0x4, align 4
    float32 m_flHeight; // offset 0x68, size 0x4, align 4
    float32 m_flDepth; // offset 0x6C, size 0x4, align 4
    CTransformWS m_transform; // offset 0x70, size 0x20, align 16
    float32 m_flAnimationScale; // offset 0x90, size 0x4, align 4
    float32 m_flAnimationStartTime; // offset 0x94, size 0x4, align 4
    GameTime_t m_flPlaceTime; // offset 0x98, size 0x4, align 255
    float32 m_flFadeStartTime; // offset 0x9C, size 0x4, align 4
    float32 m_flFadeDuration; // offset 0xA0, size 0x4, align 4
    float32 m_flLightingOriginOffset; // offset 0xA4, size 0x4, align 4
    char _pad_00A8[0x8]; // offset 0xA8
    float32 m_flBoundingRadiusSqr; // offset 0xB0, size 0x4, align 4
    int16 m_nSequenceIndex; // offset 0xB4, size 0x2, align 2 | MNotSaved
    bool m_bIsAdjacent; // offset 0xB6, size 0x1, align 1 | MNotSaved
    bool m_bDoDecalLightmapping; // offset 0xB7, size 0x1, align 1
    char _pad_00B8[0x8]; // offset 0xB8
};
