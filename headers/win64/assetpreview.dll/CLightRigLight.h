#pragma once

class CLightRigLight  // sizeof 0x40, align 0x4 [trivial_dtor] (toolscene) {MGetKV3ClassDefaults}
{
public:
    Vector m_vPosition; // offset 0x0, size 0xC, align 4
    Vector m_vDirection; // offset 0xC, size 0xC, align 4
    Vector m_vLookAt; // offset 0x18, size 0xC, align 4
    Color m_Color; // offset 0x24, size 0x4, align 1
    float32 m_flAxisScale; // offset 0x28, size 0x4, align 4
    float32 m_flRadius; // offset 0x2C, size 0x4, align 4
    float32 m_flBrightness; // offset 0x30, size 0x4, align 4
    float32 m_flLightSourceRadius; // offset 0x34, size 0x4, align 4
    float32 m_flDistance; // offset 0x38, size 0x4, align 4
    bool m_bRelativePositioning; // offset 0x3C, size 0x1, align 1
    bool m_bParentToCamera; // offset 0x3D, size 0x1, align 1
    char _pad_003E[0x2]; // offset 0x3E
};
