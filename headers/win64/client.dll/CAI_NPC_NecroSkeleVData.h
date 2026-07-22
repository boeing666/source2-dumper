#pragma once

class CAI_NPC_NecroSkeleVData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0x1398, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1348]; // offset 0x0
    float32 m_flMeleeDuration; // offset 0x1348, size 0x4, align 4
    float32 m_flMeleeFireDelay; // offset 0x134C, size 0x4, align 4
    float32 m_flNonPlayerDamageResist; // offset 0x1350, size 0x4, align 4
    char _pad_1354[0x4]; // offset 0x1354
    CEmbeddedSubclass< CCitadelModifier > m_ExplodeModifier; // offset 0x1358, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DamageSlowModifier; // offset 0x1368, size 0x10, align 8
    float32 m_flHeroLockRange; // offset 0x1378, size 0x4, align 4
    float32 m_flHeroLockBreakRange; // offset 0x137C, size 0x4, align 4
    CUtlVector< NecroSkeleTargetTier_t > m_vecTargettingTiers; // offset 0x1380, size 0x18, align 8
};
