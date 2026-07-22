#pragma once

class CRenderPortal : public CBaseModelEntity /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CHandle< CBaseEntity > m_hLocalPortalLink; // offset 0x780, size 0x4, align 4 | MNetworkEnable
    CHandle< CBaseEntity > m_hRemotePortalLink; // offset 0x784, size 0x4, align 4 | MNetworkEnable
    CUtlString m_brushModelName; // offset 0x788, size 0x8, align 8 | MNetworkEnable
    float32 m_flFadeStartDist; // offset 0x790, size 0x4, align 4 | MNetworkEnable
    float32 m_flFadeEndDist; // offset 0x794, size 0x4, align 4 | MNetworkEnable
    float32 m_flFadeStartAngle; // offset 0x798, size 0x4, align 4 | MNetworkEnable
    float32 m_flFadeEndAngle; // offset 0x79C, size 0x4, align 4 | MNetworkEnable
    float32 m_flRemoteViewForwardOffset; // offset 0x7A0, size 0x4, align 4 | MNetworkEnable
    Color m_fadeToColor; // offset 0x7A4, size 0x4, align 1 | MNetworkEnable
};
