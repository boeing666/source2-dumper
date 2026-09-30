#pragma once

class CNPC_TrooperBossVData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0xCE0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC50]; // offset 0x0
    bool m_bMitigateDamageFromPlayers; // offset 0xC50, size 0x1, align 1
    char _pad_0C51[0x3]; // offset 0xC51
    float32 m_flPlayerAutoAttackRange; // offset 0xC54, size 0x4, align 4
    float32 m_flMinMeleeAttackTime; // offset 0xC58, size 0x4, align 4
    float32 m_flMeleeDuration; // offset 0xC5C, size 0x4, align 4
    float32 m_flInvulRange; // offset 0xC60, size 0x4, align 4
    float32 m_flTrooperDamageResistPct; // offset 0xC64, size 0x4, align 4
    float32 m_flPlayerDamageResistPct; // offset 0xC68, size 0x4, align 4
    float32 m_flBackDoorProtectionRange; // offset 0xC6C, size 0x4, align 4
    float32 m_flDeathFadeTimeStart; // offset 0xC70, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDeathFadeTimeEnd; // offset 0xC74, size 0x4, align 4
    float32 m_flTier1PlayerClipCapsuleRadius; // offset 0xC78, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTier1PlayerClipCapsuleHeight; // offset 0xC7C, size 0x4, align 4
    CSoundEventName m_sAngryStart; // offset 0xC80, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_sAngryLoop; // offset 0xC90, size 0x10, align 8
    CSoundEventName m_sAngryStop; // offset 0xCA0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BackdoorProtectionModifier; // offset 0xCB0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TrooperBossInvulnModifier; // offset 0xCC0, size 0x10, align 8
    float32 m_flTrooperDPS; // offset 0xCD0, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flPlayerDPS; // offset 0xCD4, size 0x4, align 4 | MPropertyDescription
    float32 m_flDPSPctGrowthPerMinute; // offset 0xCD8, size 0x4, align 4
    char _pad_0CDC[0x4]; // offset 0xCDC
};
