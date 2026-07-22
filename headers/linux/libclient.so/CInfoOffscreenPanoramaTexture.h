#pragma once

class CInfoOffscreenPanoramaTexture : public C_PointEntity /*0x0*/  // sizeof 0x968, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    bool m_bDisabled; // offset 0x76C, size 0x1, align 1
    char _pad_076D[0x3]; // offset 0x76D
    int32 m_nResolutionX; // offset 0x770, size 0x4, align 4
    int32 m_nResolutionY; // offset 0x774, size 0x4, align 4
    CUtlSymbolLarge m_szPanelType; // offset 0x778, size 0x8, align 8
    CUtlSymbolLarge m_szLayoutFileName; // offset 0x780, size 0x8, align 8
    CUtlSymbolLarge m_RenderAttrName; // offset 0x788, size 0x8, align 8
    C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_TargetEntities; // offset 0x790, size 0x18, align 8
    int32 m_nTargetChangeCount; // offset 0x7A8, size 0x4, align 4
    char _pad_07AC[0x4]; // offset 0x7AC
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0x7B0, size 0x18, align 8
    CUtlSymbolLarge m_szTargetsName; // offset 0x7C8, size 0x8, align 8
    CUtlVector< CHandle< C_BaseModelEntity > > m_AdditionalTargetEntities; // offset 0x7D0, size 0x18, align 8
    char _pad_07E8[0x158]; // offset 0x7E8
    bool m_bCheckCSSClasses; // offset 0x940, size 0x1, align 1 | MNotSaved
    char _pad_0941[0x27]; // offset 0x941
};
