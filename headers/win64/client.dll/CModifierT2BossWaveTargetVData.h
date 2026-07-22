#pragma once

class CModifierT2BossWaveTargetVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CSoundEventName m_strSilenceTargetSound; // offset 0x750, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x760, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // offset 0x770, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x780, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BulletResistModifier; // offset 0x790, size 0x10, align 8
    float32 m_flTossUpStrength; // offset 0x7A0, size 0x4, align 4 | MPropertyGroupName
    float32 m_flTossHorizontalMax; // offset 0x7A4, size 0x4, align 4
    float32 m_flTossHorizontalMin; // offset 0x7A8, size 0x4, align 4
    float32 m_flDebuffDuration; // offset 0x7AC, size 0x4, align 4
};
