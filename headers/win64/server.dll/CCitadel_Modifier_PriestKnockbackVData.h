#pragma once

class CCitadel_Modifier_PriestKnockbackVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    float32 m_flMomentumMaintained; // offset 0x760, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0764[0x4]; // offset 0x764
    CPiecewiseCurve m_flVelocityStrengthCurve; // offset 0x768, size 0x40, align 8
};
