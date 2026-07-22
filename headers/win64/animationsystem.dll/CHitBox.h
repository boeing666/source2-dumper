#pragma once

class CHitBox  // sizeof 0x70, align 0x10 (modellib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    CUtlString m_sSurfaceProperty; // offset 0x8, size 0x8, align 8
    CUtlString m_sBoneName; // offset 0x10, size 0x8, align 8
    Vector m_vMinBounds; // offset 0x18, size 0xC, align 4
    Vector m_vMaxBounds; // offset 0x24, size 0xC, align 4
    float32 m_flShapeRadius; // offset 0x30, size 0x4, align 4
    uint32 m_nBoneNameHash; // offset 0x34, size 0x4, align 4
    int32 m_nGroupId; // offset 0x38, size 0x4, align 4
    uint8 m_nShapeType; // offset 0x3C, size 0x1, align 1
    bool m_bTranslationOnly; // offset 0x3D, size 0x1, align 1
    char _pad_003E[0x2]; // offset 0x3E
    uint32 m_CRC; // offset 0x40, size 0x4, align 4
    Color m_cRenderColor; // offset 0x44, size 0x4, align 1
    uint16 m_nHitBoxIndex; // offset 0x48, size 0x2, align 2
    char _pad_004A[0x26]; // offset 0x4A
};
