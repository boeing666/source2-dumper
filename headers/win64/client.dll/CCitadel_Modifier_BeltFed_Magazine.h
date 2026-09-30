#pragma once

class CCitadel_Modifier_BeltFed_Magazine : public CCitadelModifier /*0x0*/  // sizeof 0x568, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    bool m_bInitialized; // offset 0x130, size 0x1, align 1
    char _pad_0131[0x3]; // offset 0x131
    float32 m_flSpinUpRateOverride; // offset 0x134, size 0x4, align 4
    float32 m_flSpinUpDecayOverride; // offset 0x138, size 0x4, align 4
    float32 m_flMaxCycleTimeOverride; // offset 0x13C, size 0x4, align 4
    float32 m_flMaxBurstFireCooldownOverride; // offset 0x140, size 0x4, align 4
    char _pad_0144[0x424]; // offset 0x144
};
