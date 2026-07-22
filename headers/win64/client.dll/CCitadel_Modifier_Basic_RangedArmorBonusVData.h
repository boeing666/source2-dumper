#pragma once

class CCitadel_Modifier_Basic_RangedArmorBonusVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x770, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    float32 m_flBulletResistancePctMin; // offset 0x750, size 0x4, align 4
    float32 m_flBulletResistancePctMax; // offset 0x754, size 0x4, align 4
    float32 m_flTechResistancePctMin; // offset 0x758, size 0x4, align 4
    float32 m_flTechResistancePctMax; // offset 0x75C, size 0x4, align 4
    float32 m_flRangeMin; // offset 0x760, size 0x4, align 4
    float32 m_flRangeMax; // offset 0x764, size 0x4, align 4
    float32 m_flInvulnRange; // offset 0x768, size 0x4, align 4
    bool m_bPlayersOnly; // offset 0x76C, size 0x1, align 1
    char _pad_076D[0x3]; // offset 0x76D
};
