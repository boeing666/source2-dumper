#pragma once

class CCitadel_Modifier_AfterburnWatcherVData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x7C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AfterburnDotModifier; // offset 0x780, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // offset 0x790, size 0x10, align 8
    CSoundEventName m_strAfterburnHitSound; // offset 0x7A0, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flLightMeleeBuildUp; // offset 0x7B0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flHeavyMeleeBuildUp; // offset 0x7B4, size 0x4, align 4
    float32 m_flLightMeleeRefresh; // offset 0x7B8, size 0x4, align 4
    float32 m_flHeavyMeleeRefresh; // offset 0x7BC, size 0x4, align 4
};
