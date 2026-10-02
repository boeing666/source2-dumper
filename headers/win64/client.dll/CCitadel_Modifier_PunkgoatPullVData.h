#pragma once

class CCitadel_Modifier_PunkgoatPullVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CPiecewiseCurve m_PullForceFracByDistanceCurve; // offset 0x790, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flPullToCasterLocationDuration; // offset 0x7D0, size 0x4, align 4
    char _pad_07D4[0x4]; // offset 0x7D4
};
