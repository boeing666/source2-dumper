#pragma once

class CInfoOffscreenPanoramaTexture : public C_PointEntity /*0x0*/  // sizeof 0x808, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x600]; // offset 0x0
    bool m_bDisabled; // offset 0x600, size 0x1, align 1
    char _pad_0601[0x3]; // offset 0x601
    int32 m_nResolutionX; // offset 0x604, size 0x4, align 4
    int32 m_nResolutionY; // offset 0x608, size 0x4, align 4
    char _pad_060C[0x4]; // offset 0x60C
    CUtlSymbolLarge m_szPanelType; // offset 0x610, size 0x8, align 8
    CUtlSymbolLarge m_szLayoutFileName; // offset 0x618, size 0x8, align 8
    CUtlSymbolLarge m_RenderAttrName; // offset 0x620, size 0x8, align 8
    C_NetworkUtlVectorBase< CHandle< C_BaseModelEntity > > m_TargetEntities; // offset 0x628, size 0x18, align 8
    int32 m_nTargetChangeCount; // offset 0x640, size 0x4, align 4
    char _pad_0644[0x4]; // offset 0x644
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0x648, size 0x18, align 8
    CUtlSymbolLarge m_szTargetsName; // offset 0x660, size 0x8, align 8
    CUtlVector< CHandle< C_BaseModelEntity > > m_AdditionalTargetEntities; // offset 0x668, size 0x18, align 8
    char _pad_0680[0x160]; // offset 0x680
    bool m_bCheckCSSClasses; // offset 0x7E0, size 0x1, align 1 | MNotSaved
    char _pad_07E1[0x27]; // offset 0x7E1
};
