#pragma once

class CCitadel_Modifier_Basic_RangedArmorBonusVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    float32 m_flBulletResistancePctMin; // offset 0x790, size 0x4, align 4
    float32 m_flBulletResistancePctMax; // offset 0x794, size 0x4, align 4
    float32 m_flTechResistancePctMin; // offset 0x798, size 0x4, align 4
    float32 m_flTechResistancePctMax; // offset 0x79C, size 0x4, align 4
    float32 m_flRangeMin; // offset 0x7A0, size 0x4, align 4
    float32 m_flRangeMax; // offset 0x7A4, size 0x4, align 4
    float32 m_flInvulnRange; // offset 0x7A8, size 0x4, align 4
    bool m_bPlayersOnly; // offset 0x7AC, size 0x1, align 1
    char _pad_07AD[0x3]; // offset 0x7AD
};
