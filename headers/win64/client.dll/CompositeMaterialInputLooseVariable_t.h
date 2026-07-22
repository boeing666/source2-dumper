#pragma once

struct CompositeMaterialInputLooseVariable_t  // sizeof 0x288, align 0x8 (compositematerialslib) {MGetKV3ClassDefaults MPropertyElementNameFn}
{
    CUtlString m_strName; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    bool m_bExposeExternally; // offset 0x8, size 0x1, align 1 | MPropertyAutoRebuildOnChange MPropertyFriendlyName
    char _pad_0009[0x7]; // offset 0x9
    CUtlString m_strExposedFriendlyName; // offset 0x10, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strExposedFriendlyGroupName; // offset 0x18, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    bool m_bExposedVariableIsFixedRange; // offset 0x20, size 0x1, align 1 | MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_0021[0x7]; // offset 0x21
    CUtlString m_strExposedVisibleWhenTrue; // offset 0x28, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strExposedHiddenWhenTrue; // offset 0x30, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strExposedValueList; // offset 0x38, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CompositeMaterialInputLooseVariableType_t m_nVariableType; // offset 0x40, size 0x4, align 4 | MPropertyAutoRebuildOnChange MPropertyFriendlyName
    bool m_bValueBoolean; // offset 0x44, size 0x1, align 1 | MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_0045[0x3]; // offset 0x45
    int32 m_nValueIntX; // offset 0x48, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback MPropertyAttributeRange
    int32 m_nValueIntY; // offset 0x4C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback MPropertyAttributeRange
    int32 m_nValueIntZ; // offset 0x50, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback MPropertyAttributeRange
    int32 m_nValueIntW; // offset 0x54, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback MPropertyAttributeRange
    bool m_bHasFloatBounds; // offset 0x58, size 0x1, align 1 | MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_0059[0x3]; // offset 0x59
    float32 m_flValueFloatX; // offset 0x5C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback MPropertyAttributeRange
    float32 m_flValueFloatX_Min; // offset 0x60, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    float32 m_flValueFloatX_Max; // offset 0x64, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    float32 m_flValueFloatY; // offset 0x68, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback MPropertyAttributeRange
    float32 m_flValueFloatY_Min; // offset 0x6C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    float32 m_flValueFloatY_Max; // offset 0x70, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    float32 m_flValueFloatZ; // offset 0x74, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback MPropertyAttributeRange
    float32 m_flValueFloatZ_Min; // offset 0x78, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    float32 m_flValueFloatZ_Max; // offset 0x7C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    float32 m_flValueFloatW; // offset 0x80, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback MPropertyAttributeRange
    float32 m_flValueFloatW_Min; // offset 0x84, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    float32 m_flValueFloatW_Max; // offset 0x88, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    Color m_cValueColor4; // offset 0x8C, size 0x4, align 1 | MPropertyFriendlyName MPropertyAttrStateCallback
    CompositeMaterialVarSystemVar_t m_nValueSystemVar; // offset 0x90, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_0094[0x4]; // offset 0x94
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_strResourceMaterial; // offset 0x98, size 0xE0, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strTextureContentAssetPath; // offset 0x178, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor MPropertyAttrStateCallback
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCTextureBase > > m_strTextureRuntimeResourcePath; // offset 0x180, size 0xE0, align 8 | MPropertyHideField
    CUtlString m_strTextureCompilationVtexTemplate; // offset 0x260, size 0x8, align 8 | MPropertyHideField
    CompositeMaterialInputTextureType_t m_nTextureType; // offset 0x268, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_026C[0x4]; // offset 0x26C
    CUtlString m_strString; // offset 0x270, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strPanoramaPanelPath; // offset 0x278, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    int32 m_nPanoramaRenderRes; // offset 0x280, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_0284[0x4]; // offset 0x284
};
