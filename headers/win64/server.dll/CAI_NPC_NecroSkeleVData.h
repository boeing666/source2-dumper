#pragma once

class CAI_NPC_NecroSkeleVData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0xCA0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC50]; // offset 0x0
    float32 m_flMeleeDuration; // offset 0xC50, size 0x4, align 4
    float32 m_flMeleeFireDelay; // offset 0xC54, size 0x4, align 4
    float32 m_flNonPlayerDamageResist; // offset 0xC58, size 0x4, align 4
    char _pad_0C5C[0x4]; // offset 0xC5C
    CEmbeddedSubclass< CCitadelModifier > m_ExplodeModifier; // offset 0xC60, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DamageSlowModifier; // offset 0xC70, size 0x10, align 8
    float32 m_flHeroLockRange; // offset 0xC80, size 0x4, align 4
    float32 m_flHeroLockBreakRange; // offset 0xC84, size 0x4, align 4
    CUtlVector< NecroSkeleTargetTier_t > m_vecTargettingTiers; // offset 0xC88, size 0x18, align 8
};
