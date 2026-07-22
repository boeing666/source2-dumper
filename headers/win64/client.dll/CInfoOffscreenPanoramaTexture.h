#pragma once

class CInfoOffscreenPanoramaTexture : public C_PointEntity /*0x0*/  // sizeof 0x7F8, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    bool m_bDisabled; // offset 0x5F0, size 0x1, align 1
    char _pad_05F1[0x3]; // offset 0x5F1
    int32 m_nResolutionX; // offset 0x5F4, size 0x4, align 4
    int32 m_nResolutionY; // offset 0x5F8, size 0x4, align 4
    char _pad_05FC[0x4]; // offset 0x5FC
    CUtlSymbolLarge m_szPanelType; // offset 0x600, size 0x8, align 8
    CUtlSymbolLarge m_szLayoutFileName; // offset 0x608, size 0x8, align 8
    CUtlSymbolLarge m_RenderAttrName; // offset 0x610, size 0x8, align 8
    C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_TargetEntities; // offset 0x618, size 0x18, align 8
    int32 m_nTargetChangeCount; // offset 0x630, size 0x4, align 4
    char _pad_0634[0x4]; // offset 0x634
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0x638, size 0x18, align 8
    CUtlSymbolLarge m_szTargetsName; // offset 0x650, size 0x8, align 8
    CUtlVector< CHandle< C_BaseModelEntity > > m_AdditionalTargetEntities; // offset 0x658, size 0x18, align 8
    char _pad_0670[0x160]; // offset 0x670
    bool m_bCheckCSSClasses; // offset 0x7D0, size 0x1, align 1 | MNotSaved
    char _pad_07D1[0x27]; // offset 0x7D1
};
