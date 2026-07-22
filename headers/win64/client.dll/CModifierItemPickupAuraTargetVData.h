#pragma once

class CModifierItemPickupAuraTargetVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x768, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    float32 m_PickupTimer; // offset 0x750, size 0x4, align 4 | MPropertyGroupName
    char _pad_0754[0x4]; // offset 0x754
    CEmbeddedSubclass< CCitadelModifier > m_PickupTimerModifier; // offset 0x758, size 0x10, align 8 | MPropertyGroupName
};
