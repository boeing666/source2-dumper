#pragma once

class CCitadel_Modifier_PatronsBlessingProcWatcherVData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DamageTracker; // offset 0x780, size 0x10, align 8 | MPropertyGroupName
};
