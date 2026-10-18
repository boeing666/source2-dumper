#pragma once

class CDetailPropModel  // sizeof 0x148, align 0x8 (toolutils2) {MGetKV3ClassDefaults MPropertyFriendlyName MVDataAnonymousNode MVDataOutlinerAssetNameExpr}
{
public:
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_ModelName; // offset 0x0, size 0xE0, align 8 | MPropertyDescription MPropertyProvidesEditContextString
    CModelMaterialGroupName m_MaterialGroup; // offset 0xE0, size 0x8, align 8 | MPropertyDescription
    float32 m_flWeight; // offset 0xE8, size 0x4, align 4 | MPropertyDescription
    float32 m_flStartFadeSize; // offset 0xEC, size 0x4, align 4 | MPropertyAttributeRange MPropertyFriendlyName MPropertyDescription
    float32 m_flEndFadeSize; // offset 0xF0, size 0x4, align 4 | MPropertyAttributeRange MPropertyFriendlyName MPropertyDescription
    bool m_bWorldSpaceOrientation; // offset 0xF4, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    char _pad_00F5[0x3]; // offset 0xF5
    float32 m_flOrientToSurface; // offset 0xF8, size 0x4, align 4 | MPropertyAttributeRange MPropertyDescription
    float32 m_flMinSurfaceSlope; // offset 0xFC, size 0x4, align 4 | MPropertyAttributeRange MPropertyDescription
    float32 m_flMaxSurfaceSlope; // offset 0x100, size 0x4, align 4 | MPropertyAttributeRange MPropertyDescription
    float32 m_flRandomVerticalOffsetMin; // offset 0x104, size 0x4, align 4 | MPropertyDescription
    float32 m_flRandomVerticalOffsetMax; // offset 0x108, size 0x4, align 4 | MPropertyDescription
    QAngle m_vRandomRotationMin; // offset 0x10C, size 0xC, align 4 | MPropertyDescription
    QAngle m_vRandomRotationMax; // offset 0x118, size 0xC, align 4 | MPropertyDescription
    float32 m_flRandomScaleMin; // offset 0x124, size 0x4, align 4 | MPropertyDescription
    float32 m_flRandomScaleMax; // offset 0x128, size 0x4, align 4 | MPropertyDescription
    float32 m_flDensityMinScale; // offset 0x12C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange MPropertyDescription
    float32 m_flBlendWeightMinScale; // offset 0x130, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange MPropertyDescription
    float32 m_flBlendWeightMin; // offset 0x134, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange MPropertyDescription
    float32 m_flBlendWeightMax; // offset 0x138, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange MPropertyDescription
    float32 m_flBlendWeightFullDenstity; // offset 0x13C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange MPropertyDescription
    bool m_bCastStaticShadows; // offset 0x140, size 0x1, align 1 | MPropertyDescription
    char _pad_0141[0x7]; // offset 0x141
};
