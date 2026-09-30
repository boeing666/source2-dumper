#pragma once

class C_RenderPortal : public C_BaseModelEntity /*0x0*/  // sizeof 0xBE0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    CHandle< C_BaseEntity > m_hLocalPortalLink; // offset 0xBB0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hRemotePortalLink; // offset 0xBB4, size 0x4, align 4
    CUtlString m_brushModelName; // offset 0xBB8, size 0x8, align 8
    float32 m_flFadeStartDist; // offset 0xBC0, size 0x4, align 4
    float32 m_flFadeEndDist; // offset 0xBC4, size 0x4, align 4
    float32 m_flFadeStartAngle; // offset 0xBC8, size 0x4, align 4
    float32 m_flFadeEndAngle; // offset 0xBCC, size 0x4, align 4
    float32 m_flRemoteViewForwardOffset; // offset 0xBD0, size 0x4, align 4
    Color m_fadeToColor; // offset 0xBD4, size 0x4, align 4
    char _pad_0BD8[0x8]; // offset 0xBD8
};
