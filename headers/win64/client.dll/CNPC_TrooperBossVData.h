#pragma once

class CNPC_TrooperBossVData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0x13D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1348]; // offset 0x0
    bool m_bMitigateDamageFromPlayers; // offset 0x1348, size 0x1, align 1
    char _pad_1349[0x3]; // offset 0x1349
    float32 m_flPlayerAutoAttackRange; // offset 0x134C, size 0x4, align 4
    float32 m_flMinMeleeAttackTime; // offset 0x1350, size 0x4, align 4
    float32 m_flMeleeDuration; // offset 0x1354, size 0x4, align 4
    float32 m_flInvulRange; // offset 0x1358, size 0x4, align 4
    float32 m_flTrooperDamageResistPct; // offset 0x135C, size 0x4, align 4
    float32 m_flPlayerDamageResistPct; // offset 0x1360, size 0x4, align 4
    float32 m_flBackDoorProtectionRange; // offset 0x1364, size 0x4, align 4
    float32 m_flDeathFadeTimeStart; // offset 0x1368, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDeathFadeTimeEnd; // offset 0x136C, size 0x4, align 4
    float32 m_flTier1PlayerClipCapsuleRadius; // offset 0x1370, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flTier1PlayerClipCapsuleHeight; // offset 0x1374, size 0x4, align 4
    CSoundEventName m_sAngryStart; // offset 0x1378, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_sAngryLoop; // offset 0x1388, size 0x10, align 8
    CSoundEventName m_sAngryStop; // offset 0x1398, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BackdoorProtectionModifier; // offset 0x13A8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_TrooperBossInvulnModifier; // offset 0x13B8, size 0x10, align 8
    float32 m_flTrooperDPS; // offset 0x13C8, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flPlayerDPS; // offset 0x13CC, size 0x4, align 4 | MPropertyDescription
    float32 m_flDPSPctGrowthPerMinute; // offset 0x13D0, size 0x4, align 4
    char _pad_13D4[0x4]; // offset 0x13D4
};
