#pragma once

class C_OP_RemapModelVolumetoCP : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x208, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    BBoxVolumeType_t m_nBBoxType; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nInControlPointNumber; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutControlPointNumber; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutControlPointMaxNumber; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nField; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertySuppressExpr
    float32 m_flInputMin; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flInputMax; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flOutputMin; // offset 0x1FC, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    float32 m_flOutputMax; // offset 0x200, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bBBoxOnly; // offset 0x204, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    bool m_bCubeRoot; // offset 0x205, size 0x1, align 1 | MPropertyFriendlyName MPropertySuppressExpr
    char _pad_0206[0x2]; // offset 0x206
};
