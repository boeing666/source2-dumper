#pragma once

class C_RenderPortal : public C_BaseModelEntity /*0x0*/  // sizeof 0x9D8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    CHandle< C_BaseEntity > m_hLocalPortalLink; // offset 0x9A8, size 0x4, align 4 | MNetworkEnable
    CHandle< C_BaseEntity > m_hRemotePortalLink; // offset 0x9AC, size 0x4, align 4 | MNetworkEnable
    CUtlString m_brushModelName; // offset 0x9B0, size 0x8, align 8 | MNetworkEnable
    float32 m_flFadeStartDist; // offset 0x9B8, size 0x4, align 4 | MNetworkEnable
    float32 m_flFadeEndDist; // offset 0x9BC, size 0x4, align 4 | MNetworkEnable
    float32 m_flFadeStartAngle; // offset 0x9C0, size 0x4, align 4 | MNetworkEnable
    float32 m_flFadeEndAngle; // offset 0x9C4, size 0x4, align 4 | MNetworkEnable
    float32 m_flRemoteViewForwardOffset; // offset 0x9C8, size 0x4, align 4 | MNetworkEnable
    Color m_fadeToColor; // offset 0x9CC, size 0x4, align 1 | MNetworkEnable
    char _pad_09D0[0x8]; // offset 0x9D0
};
