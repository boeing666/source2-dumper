#pragma once

class CCitadel_Modifier_Deadpack_ForcedToAirMovementVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x830, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CPiecewiseCurve m_flFwdVelocityOverTime; // offset 0x798, size 0x40, align 8 | MPropertyStartGroup
    CPiecewiseCurve m_flUpVelocityOverTime; // offset 0x7D8, size 0x40, align 8
    float32 m_flDashRemovalDelay; // offset 0x818, size 0x4, align 4
    char _pad_081C[0x4]; // offset 0x81C
    CGlobalSymbol m_strHeroState; // offset 0x820, size 0x8, align 8 | MPropertyStartGroup
    float32 m_flHeroStateDuration; // offset 0x828, size 0x4, align 4
    char _pad_082C[0x4]; // offset 0x82C
};
