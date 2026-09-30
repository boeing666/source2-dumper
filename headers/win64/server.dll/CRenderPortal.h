#pragma once

class CRenderPortal : public CBaseModelEntity /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    CHandle< CBaseEntity > m_hLocalPortalLink; // offset 0x878, size 0x4, align 4
    CHandle< CBaseEntity > m_hRemotePortalLink; // offset 0x87C, size 0x4, align 4
    CUtlString m_brushModelName; // offset 0x880, size 0x8, align 8
    float32 m_flFadeStartDist; // offset 0x888, size 0x4, align 4
    float32 m_flFadeEndDist; // offset 0x88C, size 0x4, align 4
    float32 m_flFadeStartAngle; // offset 0x890, size 0x4, align 4
    float32 m_flFadeEndAngle; // offset 0x894, size 0x4, align 4
    float32 m_flRemoteViewForwardOffset; // offset 0x898, size 0x4, align 4
    Color m_fadeToColor; // offset 0x89C, size 0x4, align 4
};
