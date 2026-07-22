#pragma once

class CCitadel_Modifier_BeltFed_Magazine : public CCitadelModifier /*0x0*/  // sizeof 0x3D8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    bool m_bInitialized; // offset 0xC0, size 0x1, align 1
    char _pad_00C1[0x3]; // offset 0xC1
    float32 m_flSpinUpRateOverride; // offset 0xC4, size 0x4, align 4
    float32 m_flSpinUpDecayOverride; // offset 0xC8, size 0x4, align 4
    float32 m_flMaxCycleTimeOverride; // offset 0xCC, size 0x4, align 4
    float32 m_flMaxBurstFireCooldownOverride; // offset 0xD0, size 0x4, align 4
    char _pad_00D4[0x304]; // offset 0xD4
};
