#pragma once

class CCitadel_Modifier_BaseEventProcVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7C8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    bool m_bProcChanceAffectedByEffectiveness; // offset 0x790, size 0x1, align 1
    bool m_bShouldApplyAbilityCooldown; // offset 0x791, size 0x1, align 1
    bool m_bCanProcMultipleTimesOnOneTarget; // offset 0x792, size 0x1, align 1 | MPropertySuppressExpr
    bool m_bCanProcByOtherObjects; // offset 0x793, size 0x1, align 1
    bool m_bCanProcFromItems; // offset 0x794, size 0x1, align 1
    bool m_bProcOnFriendlyBulletHits; // offset 0x795, size 0x1, align 1
    char _pad_0796[0x2]; // offset 0x796
    CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // offset 0x798, size 0x4, align 4
    CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // offset 0x79C, size 0x4, align 4
    CUtlVector< ECitadelDamageType > m_vecProcDamageTypes; // offset 0x7A0, size 0x18, align 8
    TakeDamageFlags_t m_nRequiredDamageFlags; // offset 0x7B8, size 0x8, align 8
    TakeDamageFlags_t m_nInvalidatingDamageFlags; // offset 0x7C0, size 0x8, align 8
};
