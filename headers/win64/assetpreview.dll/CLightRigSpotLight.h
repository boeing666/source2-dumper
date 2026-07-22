#pragma once

class CLightRigSpotLight : public CLightRigLight /*0x0*/  // sizeof 0x4C, align 0x4 [trivial_dtor] (toolscene) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    float32 m_flOuterConeAngle; // offset 0x40, size 0x4, align 4
    float32 m_flInnerConeAngle; // offset 0x44, size 0x4, align 4
    bool m_bCastShadows; // offset 0x48, size 0x1, align 1
    char _pad_0049[0x3]; // offset 0x49
};
