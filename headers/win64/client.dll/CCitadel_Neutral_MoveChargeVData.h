#pragma once

class CCitadel_Neutral_MoveChargeVData : public CModifierNeutralAbilityVData /*0x0*/  // sizeof 0x10E8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10B8]; // offset 0x0
    float32 m_flChargeSpeedm; // offset 0x10B8, size 0x4, align 4
    float32 m_flLookAheadFrames; // offset 0x10BC, size 0x4, align 4
    float32 m_flStunTime; // offset 0x10C0, size 0x4, align 4
    float32 m_flDamage; // offset 0x10C4, size 0x4, align 4
    CSoundEventName m_strAttackEndSound; // offset 0x10C8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strAttackHitSound; // offset 0x10D8, size 0x10, align 8
};
