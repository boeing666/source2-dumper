#pragma once

class CNPC_BarrackBossVData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0xCE0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC30]; // offset 0x0
    float32 m_flPlayerAutoAttackRange; // offset 0xC30, size 0x4, align 4
    float32 m_flMinMeleeAttackTime; // offset 0xC34, size 0x4, align 4
    float32 m_flMeleeDuration; // offset 0xC38, size 0x4, align 4
    float32 m_flInvulRange; // offset 0xC3C, size 0x4, align 4
    float32 m_flTrooperDamageResistPct; // offset 0xC40, size 0x4, align 4
    float32 m_flPlayerDamageResistPct; // offset 0xC44, size 0x4, align 4
    float32 m_flBackDoorProtectionRange; // offset 0xC48, size 0x4, align 4
    float32 m_flDeathFadeTimeStart; // offset 0xC4C, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDeathFadeTimeEnd; // offset 0xC50, size 0x4, align 4
    float32 m_flTier1PlayerClipCapsuleRadius; // offset 0xC54, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTier1PlayerClipCapsuleHeight; // offset 0xC58, size 0x4, align 4
    char _pad_0C5C[0x4]; // offset 0xC5C
    CSoundEventName m_sAngryStart; // offset 0xC60, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_sAngryLoop; // offset 0xC70, size 0x10, align 8
    CSoundEventName m_sAngryStop; // offset 0xC80, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BackdoorProtectionModifier; // offset 0xC90, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TrooperBossInvulnModifier; // offset 0xCA0, size 0x10, align 8
    float32 m_flTrooperDPS; // offset 0xCB0, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flPlayerDPS; // offset 0xCB4, size 0x4, align 4 | MPropertyDescription
    float32 m_flDPSPctGrowthPerMinute; // offset 0xCB8, size 0x4, align 4
    float32 m_flEnemyTrooperProtectionRange; // offset 0xCBC, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_BackdoorBulletResistModifier; // offset 0xCC0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ObjectiveRegen; // offset 0xCD0, size 0x10, align 8
};
