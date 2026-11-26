#pragma once

class CCitadel_Modifier_EatTurkeyBuffVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_OverstuffedModifier; // offset 0x798, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    float32 m_flOverstuffedDuration; // offset 0x7A8, size 0x4, align 4 | MPropertyDescription
    float32 m_flTotalHealthRegen; // offset 0x7AC, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flTotalHealthRegenPerMinute; // offset 0x7B0, size 0x4, align 4 | MPropertyDescription
    float32 m_flStaminaOnPickup; // offset 0x7B4, size 0x4, align 4 | MPropertyDescription
};
