#pragma once

class CCitadel_Modifier_Deadpack_ForcedToAirMovementVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x828, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CPiecewiseCurve m_flFwdVelocityOverTime; // offset 0x790, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_flUpVelocityOverTime; // offset 0x7D0, size 0x40, align 8
    float32 m_flDashRemovalDelay; // offset 0x810, size 0x4, align 4
    char _pad_0814[0x4]; // offset 0x814
    CGlobalSymbol m_strHeroState; // offset 0x818, size 0x8, align 8 | MPropertyStartGroup
    float32 m_flHeroStateDuration; // offset 0x820, size 0x4, align 4
    char _pad_0824[0x4]; // offset 0x824
};
