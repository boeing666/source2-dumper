#pragma once

class CModifierT3BossWaveTargetVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CSoundEventName m_strSilenceTargetSound; // offset 0x760, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_CurseModifier; // offset 0x770, size 0x10, align 8 | MPropertyGroupName
    float32 m_flTossUpStrength; // offset 0x780, size 0x4, align 4 | MPropertyGroupName
    float32 m_flTossHorizontalMax; // offset 0x784, size 0x4, align 4
    float32 m_flTossHorizontalMin; // offset 0x788, size 0x4, align 4
    float32 m_flDebuffDuration; // offset 0x78C, size 0x4, align 4
};
