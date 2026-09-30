#pragma once

class CCitadel_Modifier_BaseEventProcVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    bool m_bProcChanceAffectedByEffectiveness; // offset 0x760, size 0x1, align 1
    bool m_bShouldApplyAbilityCooldown; // offset 0x761, size 0x1, align 1
    bool m_bCanProcMultipleTimesOnOneTarget; // offset 0x762, size 0x1, align 1 | MPropertySuppressExpr
    bool m_bCanProcByOtherObjects; // offset 0x763, size 0x1, align 1
    bool m_bCanProcFromItems; // offset 0x764, size 0x1, align 1
    bool m_bProcOnFriendlyBulletHits; // offset 0x765, size 0x1, align 1
    char _pad_0766[0x2]; // offset 0x766
    CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // offset 0x768, size 0x4, align 4
    CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // offset 0x76C, size 0x4, align 4
    CUtlVector< ECitadelDamageType > m_vecProcDamageTypes; // offset 0x770, size 0x18, align 8
    TakeDamageFlags_t m_nRequiredDamageFlags; // offset 0x788, size 0x8, align 8
};
