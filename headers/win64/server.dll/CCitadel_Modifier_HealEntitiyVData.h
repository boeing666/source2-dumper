#pragma once

class CCitadel_Modifier_HealEntitiyVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x768, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    float32 m_flMaxHealthHeal; // offset 0x760, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flFlatHeal; // offset 0x764, size 0x4, align 4
};
