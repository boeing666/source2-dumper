#pragma once

class CCitadel_Modifier_BeltFed_Magazine : public CCitadelModifier /*0x0*/  // sizeof 0x3E8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    bool m_bInitialized; // offset 0xD0, size 0x1, align 1
    char _pad_00D1[0x3]; // offset 0xD1
    float32 m_flSpinUpRateOverride; // offset 0xD4, size 0x4, align 4
    float32 m_flSpinUpDecayOverride; // offset 0xD8, size 0x4, align 4
    float32 m_flMaxCycleTimeOverride; // offset 0xDC, size 0x4, align 4
    float32 m_flMaxBurstFireCooldownOverride; // offset 0xE0, size 0x4, align 4
    char _pad_00E4[0x304]; // offset 0xE4
};
