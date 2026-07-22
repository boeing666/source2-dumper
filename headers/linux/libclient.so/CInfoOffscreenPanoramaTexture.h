#pragma once

class CInfoOffscreenPanoramaTexture : public C_PointEntity /*0x0*/  // sizeof 0x980, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x77C]; // offset 0x0
    bool m_bDisabled; // offset 0x77C, size 0x1, align 1
    char _pad_077D[0x3]; // offset 0x77D
    int32 m_nResolutionX; // offset 0x780, size 0x4, align 4
    int32 m_nResolutionY; // offset 0x784, size 0x4, align 4
    CUtlSymbolLarge m_szPanelType; // offset 0x788, size 0x8, align 8
    CUtlSymbolLarge m_szLayoutFileName; // offset 0x790, size 0x8, align 8
    CUtlSymbolLarge m_RenderAttrName; // offset 0x798, size 0x8, align 8
    C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_TargetEntities; // offset 0x7A0, size 0x18, align 8
    int32 m_nTargetChangeCount; // offset 0x7B8, size 0x4, align 4
    char _pad_07BC[0x4]; // offset 0x7BC
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0x7C0, size 0x18, align 8
    CUtlSymbolLarge m_szTargetsName; // offset 0x7D8, size 0x8, align 8
    CUtlVector< CHandle< C_BaseModelEntity > > m_AdditionalTargetEntities; // offset 0x7E0, size 0x18, align 8
    char _pad_07F8[0x160]; // offset 0x7F8
    bool m_bCheckCSSClasses; // offset 0x958, size 0x1, align 1 | MNotSaved
    char _pad_0959[0x27]; // offset 0x959
};
