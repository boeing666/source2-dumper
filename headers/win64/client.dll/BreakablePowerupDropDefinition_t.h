#pragma once

struct BreakablePowerupDropDefinition_t  // sizeof 0x20, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CSubclassName< 0 > m_sPickup; // offset 0x8, size 0x10, align 8 | MPropertyDescription
    float32 m_flPickupWeight; // offset 0x18, size 0x4, align 4 | MPropertyDescription
    char _pad_001C[0x4]; // offset 0x1C
};
