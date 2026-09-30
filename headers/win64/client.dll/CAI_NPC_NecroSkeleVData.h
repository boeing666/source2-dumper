#pragma once

class CAI_NPC_NecroSkeleVData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0xC80, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC30]; // offset 0x0
    float32 m_flMeleeDuration; // offset 0xC30, size 0x4, align 4
    float32 m_flMeleeFireDelay; // offset 0xC34, size 0x4, align 4
    float32 m_flNonPlayerDamageResist; // offset 0xC38, size 0x4, align 4
    char _pad_0C3C[0x4]; // offset 0xC3C
    CEmbeddedSubclass< CCitadelModifier > m_ExplodeModifier; // offset 0xC40, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DamageSlowModifier; // offset 0xC50, size 0x10, align 8
    float32 m_flHeroLockRange; // offset 0xC60, size 0x4, align 4
    float32 m_flHeroLockBreakRange; // offset 0xC64, size 0x4, align 4
    CUtlVector< NecroSkeleTargetTier_t > m_vecTargettingTiers; // offset 0xC68, size 0x18, align 8
};
