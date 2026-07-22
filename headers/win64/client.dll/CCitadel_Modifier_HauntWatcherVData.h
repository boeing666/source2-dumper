#pragma once

class CCitadel_Modifier_HauntWatcherVData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_HauntDamageModifier; // offset 0x780, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // offset 0x790, size 0x10, align 8
    CSoundEventName m_ExplodeSound; // offset 0x7A0, size 0x10, align 8 | MPropertyStartGroup
};
