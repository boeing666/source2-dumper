#pragma once

class CDOTA_Modifier_DataDriven : public CDOTA_Buff /*0x0*/, public CDOTA_ActionRunner /*0x1AA8*/  // sizeof 0x42D0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AC0]; // offset 0x0
    AbilityID_t m_nAbilityID; // offset 0x1AC0, size 0x4, align 255
    int32 m_nIndexInAbility; // offset 0x1AC4, size 0x4, align 4
    bool m_bIsHidden; // offset 0x1AC8, size 0x1, align 1
    bool m_bIsDebuff; // offset 0x1AC9, size 0x1, align 1
    bool m_bIsPurgable; // offset 0x1ACA, size 0x1, align 1
    bool m_bIsStunDebuff; // offset 0x1ACB, size 0x1, align 1
    bool m_bAllowIllusionDuplicate; // offset 0x1ACC, size 0x1, align 1
    bool m_bRemoveOnDeath; // offset 0x1ACD, size 0x1, align 1
    char _pad_1ACE[0x2]; // offset 0x1ACE
    char* m_pszAuraModifier; // offset 0x1AD0, size 0x8, align 8
    int32 m_nAuraModifierIndex; // offset 0x1AD8, size 0x4, align 4
    int32 m_nAuraRadius; // offset 0x1ADC, size 0x4, align 4
    int32 m_nAuraSearchTeam; // offset 0x1AE0, size 0x4, align 4
    int32 m_nAuraSearchType; // offset 0x1AE4, size 0x4, align 4
    int32 m_nAuraSearchFlags; // offset 0x1AE8, size 0x4, align 4
    bool m_bAuraApplyToCaster; // offset 0x1AEC, size 0x1, align 1
    bool m_bAuraApplyToParent; // offset 0x1AED, size 0x1, align 1
    char _pad_1AEE[0x2]; // offset 0x1AEE
    int32 m_nAttributes; // offset 0x1AF0, size 0x4, align 4
    char _pad_1AF4[0x4]; // offset 0x1AF4
    char* m_pszEffectName; // offset 0x1AF8, size 0x8, align 8
    int32 m_nEffectAttachType; // offset 0x1B00, size 0x4, align 4
    int32 m_nModifierPriority; // offset 0x1B04, size 0x4, align 4
    char* m_pszStatusEffectName; // offset 0x1B08, size 0x8, align 8
    int32 m_nStatusEffectPriority; // offset 0x1B10, size 0x4, align 4
    int32 m_nOverrideAnimation; // offset 0x1B14, size 0x4, align 4
    bool m_bNeedsReParseIfRefreshed; // offset 0x1B18, size 0x1, align 1
    char _pad_1B19[0x7]; // offset 0x1B19
    char* m_pszModelName; // offset 0x1B20, size 0x8, align 8
    char _pad_1B28[0x26A0]; // offset 0x1B28
    uint64 m_nModifierStatesEnabled; // offset 0x41C8, size 0x8, align 8
    uint64 m_nModifierStatesDisabled; // offset 0x41D0, size 0x8, align 8
    KeyValues* m_pOnCreated; // offset 0x41D8, size 0x8, align 8
    KeyValues* m_pOnIntervalThink; // offset 0x41E0, size 0x8, align 8
    KeyValues* m_pOnDestroy; // offset 0x41E8, size 0x8, align 8
    KeyValues* m_pOnAttackStart; // offset 0x41F0, size 0x8, align 8
    KeyValues* m_pOnAttack; // offset 0x41F8, size 0x8, align 8
    KeyValues* m_pOnAttackLanded; // offset 0x4200, size 0x8, align 8
    KeyValues* m_pOnAttackFailed; // offset 0x4208, size 0x8, align 8
    KeyValues* m_pOnAttackAllied; // offset 0x4210, size 0x8, align 8
    KeyValues* m_pOnProjectileDodge; // offset 0x4218, size 0x8, align 8
    KeyValues* m_pOnOrder; // offset 0x4220, size 0x8, align 8
    KeyValues* m_pOnUnitMoved; // offset 0x4228, size 0x8, align 8
    KeyValues* m_pOnAbilityStart; // offset 0x4230, size 0x8, align 8
    KeyValues* m_pOnAbilityExecuted; // offset 0x4238, size 0x8, align 8
    KeyValues* m_pOnBreakInvisibility; // offset 0x4240, size 0x8, align 8
    KeyValues* m_pOnAbilityEndChannel; // offset 0x4248, size 0x8, align 8
    KeyValues* m_pOnTakeDamage; // offset 0x4250, size 0x8, align 8
    KeyValues* m_pOnDealDamage; // offset 0x4258, size 0x8, align 8
    KeyValues* m_pOnStateChanged; // offset 0x4260, size 0x8, align 8
    KeyValues* m_pOnAttacked; // offset 0x4268, size 0x8, align 8
    KeyValues* m_pOnDeath; // offset 0x4270, size 0x8, align 8
    KeyValues* m_pOnKill; // offset 0x4278, size 0x8, align 8
    KeyValues* m_pOnRespawn; // offset 0x4280, size 0x8, align 8
    KeyValues* m_pOnSpentMana; // offset 0x4288, size 0x8, align 8
    KeyValues* m_pOnTeleporting; // offset 0x4290, size 0x8, align 8
    KeyValues* m_pOnTeleported; // offset 0x4298, size 0x8, align 8
    KeyValues* m_pOnHealthGained; // offset 0x42A0, size 0x8, align 8
    KeyValues* m_pOnManaGained; // offset 0x42A8, size 0x8, align 8
    KeyValues* m_pOnHeroKilled; // offset 0x42B0, size 0x8, align 8
    KeyValues* m_pOnHealReceived; // offset 0x42B8, size 0x8, align 8
    KeyValues* m_pOnAttackFinished; // offset 0x42C0, size 0x8, align 8
    KeyValues* m_pOnAttackCancelled; // offset 0x42C8, size 0x8, align 8
};
