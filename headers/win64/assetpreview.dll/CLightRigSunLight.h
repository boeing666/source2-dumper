#pragma once

class CLightRigSunLight : public CLightRigLight /*0x0*/  // sizeof 0x54, align 0x4 [trivial_dtor] (toolscene) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    float32 m_flShadowCascadeDistance0; // offset 0x40, size 0x4, align 4
    float32 m_flShadowCascadeDistance1; // offset 0x44, size 0x4, align 4
    float32 m_flShadowCascadeDistance2; // offset 0x48, size 0x4, align 4
    float32 m_flShadowCascadeDistance3; // offset 0x4C, size 0x4, align 4
    bool m_bCastShadows; // offset 0x50, size 0x1, align 1
    char _pad_0051[0x3]; // offset 0x51
};
