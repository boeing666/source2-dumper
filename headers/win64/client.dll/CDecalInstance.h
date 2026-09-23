#pragma once

class CDecalInstance  // sizeof 0x108, align 0x8 (client) {MGetKV3ClassDefaults}
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
    Color m_Color; // offset 0x60, size 0x4, align 4
    float32 m_flWidth; // offset 0x64, size 0x4, align 4
    float32 m_flHeight; // offset 0x68, size 0x4, align 4
    float32 m_flDepth; // offset 0x6C, size 0x4, align 4
    matrix3x4_t m_mTransform; // offset 0x70, size 0x30, align 4
    matrix3x4_t m_mLocalToTriangle; // offset 0xA0, size 0x30, align 4
    float32 m_flAnimationScale; // offset 0xD0, size 0x4, align 4
    float32 m_flAnimationStartTime; // offset 0xD4, size 0x4, align 4
    GameTime_t m_flPlaceTime; // offset 0xD8, size 0x4, align 255
    float32 m_flFadeStartTime; // offset 0xDC, size 0x4, align 4
    float32 m_flFadeDuration; // offset 0xE0, size 0x4, align 4
    float32 m_flLightingOriginOffset; // offset 0xE4, size 0x4, align 4
    char _pad_00E8[0x10]; // offset 0xE8
    float32 m_flBoundingRadiusSqr; // offset 0xF8, size 0x4, align 4
    int16 m_nSequenceIndex; // offset 0xFC, size 0x2, align 2 | MNotSaved
    bool m_bIsAdjacent; // offset 0xFE, size 0x1, align 1 | MNotSaved
    bool m_bDoDecalLightmapping; // offset 0xFF, size 0x1, align 1
    char _pad_0100[0x8]; // offset 0x100
};
