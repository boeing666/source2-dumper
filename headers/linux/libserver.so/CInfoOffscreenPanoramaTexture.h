#pragma once

class CInfoOffscreenPanoramaTexture : public CPointEntity /*0x0*/  // sizeof 0x808, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x788]; // offset 0x0
    bool m_bDisabled; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x3]; // offset 0x789
    int32 m_nResolutionX; // offset 0x78C, size 0x4, align 4
    int32 m_nResolutionY; // offset 0x790, size 0x4, align 4
    char _pad_0794[0x4]; // offset 0x794
    CUtlSymbolLarge m_szPanelType; // offset 0x798, size 0x8, align 8
    CUtlSymbolLarge m_szLayoutFileName; // offset 0x7A0, size 0x8, align 8
    CUtlSymbolLarge m_RenderAttrName; // offset 0x7A8, size 0x8, align 8
    CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_TargetEntities; // offset 0x7B0, size 0x18, align 8
    int32 m_nTargetChangeCount; // offset 0x7C8, size 0x4, align 4
    char _pad_07CC[0x4]; // offset 0x7CC
    CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0x7D0, size 0x18, align 8
    CUtlSymbolLarge m_szTargetsName; // offset 0x7E8, size 0x8, align 8
    CUtlVector< CHandle< CBaseModelEntity > > m_AdditionalTargetEntities; // offset 0x7F0, size 0x18, align 8
};
