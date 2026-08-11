#pragma once

class CInfoOffscreenPanoramaTexture : public CPointEntity /*0x0*/  // sizeof 0x518, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x498]; // offset 0x0
    bool m_bDisabled; // offset 0x498, size 0x1, align 1
    char _pad_0499[0x3]; // offset 0x499
    int32 m_nResolutionX; // offset 0x49C, size 0x4, align 4
    int32 m_nResolutionY; // offset 0x4A0, size 0x4, align 4
    char _pad_04A4[0x4]; // offset 0x4A4
    CUtlSymbolLarge m_szPanelType; // offset 0x4A8, size 0x8, align 8
    CUtlSymbolLarge m_szLayoutFileName; // offset 0x4B0, size 0x8, align 8
    CUtlSymbolLarge m_RenderAttrName; // offset 0x4B8, size 0x8, align 8
    CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_TargetEntities; // offset 0x4C0, size 0x18, align 8
    int32 m_nTargetChangeCount; // offset 0x4D8, size 0x4, align 4
    char _pad_04DC[0x4]; // offset 0x4DC
    CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0x4E0, size 0x18, align 8
    CUtlSymbolLarge m_szTargetsName; // offset 0x4F8, size 0x8, align 8
    CUtlVector< CHandle< CBaseModelEntity > > m_AdditionalTargetEntities; // offset 0x500, size 0x18, align 8
};
