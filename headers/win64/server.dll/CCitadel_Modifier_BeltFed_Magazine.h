#pragma once

class CCitadel_Modifier_BeltFed_Magazine : public CCitadelModifier /*0x0*/  // sizeof 0x578, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    bool m_bInitialized; // offset 0x140, size 0x1, align 1
    char _pad_0141[0x3]; // offset 0x141
    float32 m_flSpinUpRateOverride; // offset 0x144, size 0x4, align 4
    float32 m_flSpinUpDecayOverride; // offset 0x148, size 0x4, align 4
    float32 m_flMaxCycleTimeOverride; // offset 0x14C, size 0x4, align 4
    float32 m_flMaxBurstFireCooldownOverride; // offset 0x150, size 0x4, align 4
    char _pad_0154[0x424]; // offset 0x154
};
