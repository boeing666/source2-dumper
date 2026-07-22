#pragma once

class CMorphSetData  // sizeof 0x98, align 0x8 [vtable] (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int32 m_nWidth; // offset 0x10, size 0x4, align 4
    int32 m_nHeight; // offset 0x14, size 0x4, align 4
    CUtlVector< MorphBundleType_t > m_bundleTypes; // offset 0x18, size 0x18, align 8
    CUtlVector< CMorphData > m_morphDatas; // offset 0x30, size 0x18, align 8
    CStrongHandle< InfoForResourceTypeCTextureBase > m_pTextureAtlas; // offset 0x48, size 0x8, align 8
    CUtlVector< CFlexDesc > m_FlexDesc; // offset 0x50, size 0x18, align 8
    CUtlVector< CFlexController > m_FlexControllers; // offset 0x68, size 0x18, align 8
    CUtlVector< CFlexRule > m_FlexRules; // offset 0x80, size 0x18, align 8
};
