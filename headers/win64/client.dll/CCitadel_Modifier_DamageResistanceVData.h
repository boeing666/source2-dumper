#pragma once

class CCitadel_Modifier_DamageResistanceVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x770, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    float32 m_flDamageResistancePerSecond; // offset 0x760, size 0x4, align 4
    float32 m_flTickInterval; // offset 0x764, size 0x4, align 4
    float32 m_flDamageResistanceBonusPerGameMinute; // offset 0x768, size 0x4, align 4
    bool m_bIsForMidBoss; // offset 0x76C, size 0x1, align 1
    char _pad_076D[0x3]; // offset 0x76D
};
