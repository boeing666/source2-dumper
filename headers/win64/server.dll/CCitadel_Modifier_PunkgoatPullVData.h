#pragma once

class CCitadel_Modifier_PunkgoatPullVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CPiecewiseCurve m_PullForceFracByDistanceCurve; // offset 0x760, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flPullToCasterLocationDuration; // offset 0x7A0, size 0x4, align 4
    char _pad_07A4[0x4]; // offset 0x7A4
};
