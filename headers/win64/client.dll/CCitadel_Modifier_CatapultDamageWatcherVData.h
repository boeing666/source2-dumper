#pragma once

class CCitadel_Modifier_CatapultDamageWatcherVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x768, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_StunModifier; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flDamageHealthPct; // offset 0x760, size 0x4, align 4
    char _pad_0764[0x4]; // offset 0x764
};
