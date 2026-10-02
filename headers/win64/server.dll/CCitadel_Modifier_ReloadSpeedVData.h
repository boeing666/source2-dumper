#pragma once

class CCitadel_Modifier_ReloadSpeedVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    float32 m_flReloadSpeedPercent; // offset 0x790, size 0x4, align 4
    bool m_bDestroyAfterReload; // offset 0x794, size 0x1, align 1
    char _pad_0795[0x3]; // offset 0x795
};
