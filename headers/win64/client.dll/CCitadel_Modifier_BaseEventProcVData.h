#pragma once

class CCitadel_Modifier_BaseEventProcVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x780, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    bool m_bProcChanceAffectedByEffectiveness; // offset 0x750, size 0x1, align 1
    bool m_bShouldApplyAbilityCooldown; // offset 0x751, size 0x1, align 1
    bool m_bCanProcMultipleTimesOnOneTarget; // offset 0x752, size 0x1, align 1 | MPropertySuppressExpr
    bool m_bCanProcByOtherObjects; // offset 0x753, size 0x1, align 1
    CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // offset 0x754, size 0x4, align 4
    CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // offset 0x758, size 0x4, align 4
    char _pad_075C[0x4]; // offset 0x75C
    CUtlVector< ECitadelDamageType > m_vecProcDamageTypes; // offset 0x760, size 0x18, align 8
    TakeDamageFlags_t m_nRequiredDamageFlags; // offset 0x778, size 0x8, align 8
};
