#pragma once

class CCitadel_Modifier_Base_BuildupVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x778, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    bool m_bUseBaseWeaponCycleTimeForDelay; // offset 0x760, size 0x1, align 1
    char _pad_0761[0x3]; // offset 0x761
    float32 m_flCycleTimeDelayAdd; // offset 0x764, size 0x4, align 4
    float32 m_flBuildUpDecayDelay; // offset 0x768, size 0x4, align 4
    BuildupMode_t m_eBuildupMode; // offset 0x76C, size 0x4, align 4
    bool m_bBuildupAffectedByEffectiveness; // offset 0x770, size 0x1, align 1 | MPropertyDescription
    bool m_bPassBuildupEffectivenessToFillModifier; // offset 0x771, size 0x1, align 1 | MPropertyDescription
    char _pad_0772[0x6]; // offset 0x772
};
