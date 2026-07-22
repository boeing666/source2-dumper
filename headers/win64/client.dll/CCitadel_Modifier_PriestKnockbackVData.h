#pragma once

class CCitadel_Modifier_PriestKnockbackVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    float32 m_flMomentumMaintained; // offset 0x750, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0754[0x4]; // offset 0x754
    CPiecewiseCurve m_flVelocityStrengthCurve; // offset 0x758, size 0x40, align 8
};
