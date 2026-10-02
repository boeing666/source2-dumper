#pragma once

class CCitadel_Neutral_MoveChargeVData : public CModifierNeutralAbilityVData /*0x0*/  // sizeof 0x1118, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10E8]; // offset 0x0
    float32 m_flChargeSpeedm; // offset 0x10E8, size 0x4, align 4
    float32 m_flLookAheadFrames; // offset 0x10EC, size 0x4, align 4
    float32 m_flStunTime; // offset 0x10F0, size 0x4, align 4
    float32 m_flDamage; // offset 0x10F4, size 0x4, align 4
    CSoundEventName m_strAttackEndSound; // offset 0x10F8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strAttackHitSound; // offset 0x1108, size 0x10, align 8
};
