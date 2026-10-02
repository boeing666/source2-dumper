#pragma once

class CCitadel_Modifier_Base_BuildupVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    bool m_bUseBaseWeaponCycleTimeForDelay; // offset 0x790, size 0x1, align 1
    char _pad_0791[0x3]; // offset 0x791
    float32 m_flCycleTimeDelayAdd; // offset 0x794, size 0x4, align 4
    float32 m_flBuildUpDecayDelay; // offset 0x798, size 0x4, align 4
    BuildupMode_t m_eBuildupMode; // offset 0x79C, size 0x4, align 4
    bool m_bBuildupAffectedByEffectiveness; // offset 0x7A0, size 0x1, align 1 | MPropertyDescription
    bool m_bPassBuildupEffectivenessToFillModifier; // offset 0x7A1, size 0x1, align 1 | MPropertyDescription
    char _pad_07A2[0x6]; // offset 0x7A2
};
