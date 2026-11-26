#pragma once

class CModifierNeutralAbilityVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x1140, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    float32 m_flCastDelayTime; // offset 0x798, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flChannelTime; // offset 0x79C, size 0x4, align 4
    float32 m_flPostCastTime; // offset 0x7A0, size 0x4, align 4
    float32 m_flCooldownTime; // offset 0x7A4, size 0x4, align 4
    ECitadelDamageType m_eDamageType; // offset 0x7A8, size 0x4, align 4
    char _pad_07AC[0x4]; // offset 0x7AC
    CCitadelWeaponInfo m_WeaponInfo; // offset 0x7B0, size 0x918, align 8
    CUtlString m_strShootAttachment; // offset 0x10C8, size 0x8, align 8 | MPropertyDescription
    CSoundEventName m_strCastDelaySound; // offset 0x10D0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strChannelSound; // offset 0x10E0, size 0x10, align 8
    CSoundEventName m_strChannelLoopSound; // offset 0x10F0, size 0x10, align 8
    CSoundEventName m_strCastSound; // offset 0x1100, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AutoCastDelayModifier; // offset 0x1110, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AutoChannelModifier; // offset 0x1120, size 0x10, align 8
    float32 m_flAutoCastDelayKillDelay; // offset 0x1130, size 0x4, align 4 | MPropertyDescription
    ENeutralNPCAction m_eAG2PreCastAction; // offset 0x1134, size 0x4, align 4 | MPropertyStartGroup
    ENeutralNPCAction m_eAG2CastCompleteAction; // offset 0x1138, size 0x4, align 4
    ENeutralNPCAction m_eAG2ChannelAction; // offset 0x113C, size 0x4, align 4
};
