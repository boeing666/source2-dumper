#pragma once

class CCitadel_Modifier_MinimapZoom : public CCitadelModifier /*0x0*/  // sizeof 0x168, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    MinimapZoom_t m_MinimapZoom; // offset 0x140, size 0x14, align 4
    VectorWS m_vZoomOrigin; // offset 0x154, size 0xC, align 4
    float32 m_flZoomRadius; // offset 0x160, size 0x4, align 4
    float32 m_flTransitionTime; // offset 0x164, size 0x4, align 4
};
