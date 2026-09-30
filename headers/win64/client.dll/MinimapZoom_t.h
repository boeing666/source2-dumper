#pragma once

struct MinimapZoom_t  // sizeof 0x14, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    VectorWS m_vZoomOrigin; // offset 0x0, size 0xC, align 4
    float32 m_flZoomRadius; // offset 0xC, size 0x4, align 4
    float32 m_flTransitionTime; // offset 0x10, size 0x4, align 4
};
