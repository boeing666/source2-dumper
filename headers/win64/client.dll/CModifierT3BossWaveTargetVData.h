#pragma once

class CModifierT3BossWaveTargetVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CSoundEventName m_strSilenceTargetSound; // offset 0x790, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_CurseModifier; // offset 0x7A0, size 0x10, align 8 | MPropertyGroupName
    float32 m_flTossUpStrength; // offset 0x7B0, size 0x4, align 4 | MPropertyGroupName
    float32 m_flTossHorizontalMax; // offset 0x7B4, size 0x4, align 4
    float32 m_flTossHorizontalMin; // offset 0x7B8, size 0x4, align 4
    float32 m_flDebuffDuration; // offset 0x7BC, size 0x4, align 4
};
