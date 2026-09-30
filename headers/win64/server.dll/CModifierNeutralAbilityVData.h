#pragma once

class CModifierNeutralAbilityVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x10B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    float32 m_flCastDelayTime; // offset 0x760, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flChannelTime; // offset 0x764, size 0x4, align 4
    float32 m_flPostCastTime; // offset 0x768, size 0x4, align 4
    float32 m_flCooldownTime; // offset 0x76C, size 0x4, align 4
    ECitadelDamageType m_eDamageType; // offset 0x770, size 0x4, align 4
    char _pad_0774[0x4]; // offset 0x774
    CCitadelWeaponInfo m_WeaponInfo; // offset 0x778, size 0x8D0, align 8
    CUtlString m_strShootAttachment; // offset 0x1048, size 0x8, align 8 | MPropertyDescription
    CSoundEventName m_strCastDelaySound; // offset 0x1050, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strChannelSound; // offset 0x1060, size 0x10, align 8
    CSoundEventName m_strChannelLoopSound; // offset 0x1070, size 0x10, align 8
    CSoundEventName m_strCastSound; // offset 0x1080, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AutoCastDelayModifier; // offset 0x1090, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AutoChannelModifier; // offset 0x10A0, size 0x10, align 8
    float32 m_flAutoCastDelayKillDelay; // offset 0x10B0, size 0x4, align 4 | MPropertyDescription
    char _pad_10B4[0x4]; // offset 0x10B4
};
