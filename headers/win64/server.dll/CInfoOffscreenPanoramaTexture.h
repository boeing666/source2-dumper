#pragma once

class CInfoOffscreenPanoramaTexture : public CPointEntity /*0x0*/  // sizeof 0x520, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    bool m_bDisabled; // offset 0x4A0, size 0x1, align 1 | MNetworkEnable
    bool m_bEnableMipGen; // offset 0x4A1, size 0x1, align 1 | MNetworkEnable
    char _pad_04A2[0x2]; // offset 0x4A2
    int32 m_nResolutionX; // offset 0x4A4, size 0x4, align 4 | MNetworkEnable
    int32 m_nResolutionY; // offset 0x4A8, size 0x4, align 4 | MNetworkEnable
    char _pad_04AC[0x4]; // offset 0x4AC
    CUtlSymbolLarge m_szPanelType; // offset 0x4B0, size 0x8, align 8 | MNetworkEnable
    CUtlSymbolLarge m_szLayoutFileName; // offset 0x4B8, size 0x8, align 8 | MNetworkEnable
    CUtlSymbolLarge m_RenderAttrName; // offset 0x4C0, size 0x8, align 8 | MNetworkEnable
    CNetworkUtlVectorBase< CHandle< CBaseModelEntity > > m_TargetEntities; // offset 0x4C8, size 0x18, align 8 | MNetworkEnable
    int32 m_nTargetChangeCount; // offset 0x4E0, size 0x4, align 4 | MNetworkEnable
    char _pad_04E4[0x4]; // offset 0x4E4
    CNetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0x4E8, size 0x18, align 8 | MNetworkEnable
    CUtlSymbolLarge m_szTargetsName; // offset 0x500, size 0x8, align 8
    CUtlVector< CHandle< CBaseModelEntity > > m_AdditionalTargetEntities; // offset 0x508, size 0x18, align 8
};
