#pragma once

class CCitadel_Modifier_T2Boss_Stagger_WatcherVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x780, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    float32 m_flDecayDuration; // offset 0x750, size 0x4, align 4
    float32 m_flStaggeredDuration; // offset 0x754, size 0x4, align 4
    float32 m_flBuildUpMax; // offset 0x758, size 0x4, align 4
    float32 m_flAdditionlPlayerMinContribution; // offset 0x75C, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    CEmbeddedSubclass< CCitadelModifier > m_StaggeredModifier; // offset 0x760, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // offset 0x770, size 0x10, align 8
};
