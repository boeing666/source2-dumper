#pragma once

class CCitadel_Modifier_ReloadSpeedVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x768, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    float32 m_flReloadSpeedPercent; // offset 0x760, size 0x4, align 4
    bool m_bDestroyAfterReload; // offset 0x764, size 0x1, align 1
    char _pad_0765[0x3]; // offset 0x765
};
