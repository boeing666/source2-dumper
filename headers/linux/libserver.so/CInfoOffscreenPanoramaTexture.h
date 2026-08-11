#pragma once

class CInfoOffscreenPanoramaTexture : public CPointEntity /*0x0*/  // sizeof 0x7F8, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bDisabled; // offset 0x778, size 0x1, align 1
    char _pad_0779[0x3]; // offset 0x779
    int32 m_nResolutionX; // offset 0x77C, size 0x4, align 4
    int32 m_nResolutionY; // offset 0x780, size 0x4, align 4
    char _pad_0784[0x4]; // offset 0x784
    CUtlSymbolLarge m_szPanelType; // offset 0x788, size 0x8, align 8
    CUtlSymbolLarge m_szLayoutFileName; // offset 0x790, size 0x8, align 8
    CUtlSymbolLarge m_RenderAttrName; // offset 0x798, size 0x8, align 8
    CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_TargetEntities; // offset 0x7A0, size 0x18, align 8
    int32 m_nTargetChangeCount; // offset 0x7B8, size 0x4, align 4
    char _pad_07BC[0x4]; // offset 0x7BC
    CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0x7C0, size 0x18, align 8
    CUtlSymbolLarge m_szTargetsName; // offset 0x7D8, size 0x8, align 8
    CUtlVector< CHandle< CBaseModelEntity > > m_AdditionalTargetEntities; // offset 0x7E0, size 0x18, align 8
};
