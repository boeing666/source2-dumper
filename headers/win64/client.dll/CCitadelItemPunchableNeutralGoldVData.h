#pragma once

class CCitadelItemPunchableNeutralGoldVData : public CCitadelItemPickupVData /*0x0*/  // sizeof 0x130, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    float32 m_flGroundOffset; // offset 0x108, size 0x4, align 4
    float32 m_flSpinRate; // offset 0x10C, size 0x4, align 4
    float32 m_flBobHeight; // offset 0x110, size 0x4, align 4
    float32 m_flBobFrequency; // offset 0x114, size 0x4, align 4
    float32 m_flSpinSpeed; // offset 0x118, size 0x4, align 4
    char _pad_011C[0x4]; // offset 0x11C
    CEmbeddedSubclass< CCitadelModifier > m_PunchPickupModifier; // offset 0x120, size 0x10, align 8 | MPropertyStartGroup
};
