#pragma once

class CCitadel_Modifier_AfterburnWatcherVData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x808, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7C8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AfterburnDotModifier; // offset 0x7C8, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // offset 0x7D8, size 0x10, align 8
    CSoundEventName m_strAfterburnHitSound; // offset 0x7E8, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flLightMeleeBuildUp; // offset 0x7F8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flHeavyMeleeBuildUp; // offset 0x7FC, size 0x4, align 4
    float32 m_flLightMeleeRefresh; // offset 0x800, size 0x4, align 4
    float32 m_flHeavyMeleeRefresh; // offset 0x804, size 0x4, align 4
};
