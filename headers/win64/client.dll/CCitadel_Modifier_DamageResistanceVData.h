#pragma once

class CCitadel_Modifier_DamageResistanceVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    float32 m_flDamageResistancePerSecond; // offset 0x798, size 0x4, align 4
    float32 m_flTickInterval; // offset 0x79C, size 0x4, align 4
    float32 m_flDamageResistanceBonusPerGameMinute; // offset 0x7A0, size 0x4, align 4
    bool m_bIsForMidBoss; // offset 0x7A4, size 0x1, align 1
    char _pad_07A5[0x3]; // offset 0x7A5
};
