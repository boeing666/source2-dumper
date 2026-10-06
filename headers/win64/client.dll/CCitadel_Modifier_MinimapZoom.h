#pragma once

class CCitadel_Modifier_MinimapZoom : public CCitadelModifier /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    MinimapZoom_t m_MinimapZoom; // offset 0x138, size 0x14, align 4
    VectorWS m_vZoomOrigin; // offset 0x14C, size 0xC, align 4
    float32 m_flZoomRadius; // offset 0x158, size 0x4, align 4
    float32 m_flTransitionTime; // offset 0x15C, size 0x4, align 4
};
