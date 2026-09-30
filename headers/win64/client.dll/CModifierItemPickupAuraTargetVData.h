#pragma once

class CModifierItemPickupAuraTargetVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x778, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    float32 m_PickupTimer; // offset 0x760, size 0x4, align 4 | MPropertyGroupName
    char _pad_0764[0x4]; // offset 0x764
    CEmbeddedSubclass< CCitadelModifier > m_PickupTimerModifier; // offset 0x768, size 0x10, align 8 | MPropertyGroupName
};
