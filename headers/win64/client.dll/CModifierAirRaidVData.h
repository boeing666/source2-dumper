#pragma once

class CModifierAirRaidVData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x780, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strWeaponShootSound; // offset 0x790, size 0x10, align 8 | MPropertyStartGroup
};
