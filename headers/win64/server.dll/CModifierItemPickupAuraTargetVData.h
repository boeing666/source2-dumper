#pragma once

class CModifierItemPickupAuraTargetVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    float32 m_PickupTimer; // offset 0x790, size 0x4, align 4 | MPropertyGroupName
    char _pad_0794[0x4]; // offset 0x794
    CEmbeddedSubclass< CCitadelModifier > m_PickupTimerModifier; // offset 0x798, size 0x10, align 8 | MPropertyGroupName
};
