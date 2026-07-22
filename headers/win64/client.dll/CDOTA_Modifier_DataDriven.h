#pragma once

class CDOTA_Modifier_DataDriven : public CDOTA_Buff /*0x0*/  // sizeof 0x41F0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    AbilityID_t m_nAbilityID; // offset 0x1A58, size 0x4, align 255
    int32 m_nIndexInAbility; // offset 0x1A5C, size 0x4, align 4
    bool m_bIsHidden; // offset 0x1A60, size 0x1, align 1
    bool m_bIsDebuff; // offset 0x1A61, size 0x1, align 1
    bool m_bIsPurgable; // offset 0x1A62, size 0x1, align 1
    bool m_bIsStunDebuff; // offset 0x1A63, size 0x1, align 1
    bool m_bAllowIllusionDuplicate; // offset 0x1A64, size 0x1, align 1
    bool m_bRemoveOnDeath; // offset 0x1A65, size 0x1, align 1
    char _pad_1A66[0x2]; // offset 0x1A66
    char* m_pszAuraModifier; // offset 0x1A68, size 0x8, align 8
    int32 m_nAuraModifierIndex; // offset 0x1A70, size 0x4, align 4
    int32 m_nAuraRadius; // offset 0x1A74, size 0x4, align 4
    int32 m_nAuraSearchTeam; // offset 0x1A78, size 0x4, align 4
    int32 m_nAuraSearchType; // offset 0x1A7C, size 0x4, align 4
    int32 m_nAuraSearchFlags; // offset 0x1A80, size 0x4, align 4
    bool m_bAuraApplyToCaster; // offset 0x1A84, size 0x1, align 1
    bool m_bAuraApplyToParent; // offset 0x1A85, size 0x1, align 1
    char _pad_1A86[0x2]; // offset 0x1A86
    int32 m_nAttributes; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
    char* m_pszEffectName; // offset 0x1A90, size 0x8, align 8
    int32 m_nEffectAttachType; // offset 0x1A98, size 0x4, align 4
    int32 m_nModifierPriority; // offset 0x1A9C, size 0x4, align 4
    char* m_pszStatusEffectName; // offset 0x1AA0, size 0x8, align 8
    int32 m_nStatusEffectPriority; // offset 0x1AA8, size 0x4, align 4
    int32 m_nOverrideAnimation; // offset 0x1AAC, size 0x4, align 4
    bool m_bNeedsReParseIfRefreshed; // offset 0x1AB0, size 0x1, align 1
    char _pad_1AB1[0x7]; // offset 0x1AB1
    char* m_pszModelName; // offset 0x1AB8, size 0x8, align 8
    char _pad_1AC0[0x2628]; // offset 0x1AC0
    uint64 m_nModifierStatesEnabled; // offset 0x40E8, size 0x8, align 8
    uint64 m_nModifierStatesDisabled; // offset 0x40F0, size 0x8, align 8
    KeyValues* m_pOnCreated; // offset 0x40F8, size 0x8, align 8
    KeyValues* m_pOnIntervalThink; // offset 0x4100, size 0x8, align 8
    KeyValues* m_pOnDestroy; // offset 0x4108, size 0x8, align 8
    KeyValues* m_pOnAttackStart; // offset 0x4110, size 0x8, align 8
    KeyValues* m_pOnAttack; // offset 0x4118, size 0x8, align 8
    KeyValues* m_pOnAttackLanded; // offset 0x4120, size 0x8, align 8
    KeyValues* m_pOnAttackFailed; // offset 0x4128, size 0x8, align 8
    KeyValues* m_pOnAttackAllied; // offset 0x4130, size 0x8, align 8
    KeyValues* m_pOnProjectileDodge; // offset 0x4138, size 0x8, align 8
    KeyValues* m_pOnOrder; // offset 0x4140, size 0x8, align 8
    KeyValues* m_pOnUnitMoved; // offset 0x4148, size 0x8, align 8
    KeyValues* m_pOnAbilityStart; // offset 0x4150, size 0x8, align 8
    KeyValues* m_pOnAbilityExecuted; // offset 0x4158, size 0x8, align 8
    KeyValues* m_pOnBreakInvisibility; // offset 0x4160, size 0x8, align 8
    KeyValues* m_pOnAbilityEndChannel; // offset 0x4168, size 0x8, align 8
    KeyValues* m_pOnTakeDamage; // offset 0x4170, size 0x8, align 8
    KeyValues* m_pOnDealDamage; // offset 0x4178, size 0x8, align 8
    KeyValues* m_pOnStateChanged; // offset 0x4180, size 0x8, align 8
    KeyValues* m_pOnAttacked; // offset 0x4188, size 0x8, align 8
    KeyValues* m_pOnDeath; // offset 0x4190, size 0x8, align 8
    KeyValues* m_pOnKill; // offset 0x4198, size 0x8, align 8
    KeyValues* m_pOnRespawn; // offset 0x41A0, size 0x8, align 8
    KeyValues* m_pOnSpentMana; // offset 0x41A8, size 0x8, align 8
    KeyValues* m_pOnTeleporting; // offset 0x41B0, size 0x8, align 8
    KeyValues* m_pOnTeleported; // offset 0x41B8, size 0x8, align 8
    KeyValues* m_pOnHealthGained; // offset 0x41C0, size 0x8, align 8
    KeyValues* m_pOnManaGained; // offset 0x41C8, size 0x8, align 8
    KeyValues* m_pOnHeroKilled; // offset 0x41D0, size 0x8, align 8
    KeyValues* m_pOnHealReceived; // offset 0x41D8, size 0x8, align 8
    KeyValues* m_pOnAttackFinished; // offset 0x41E0, size 0x8, align 8
    KeyValues* m_pOnAttackCancelled; // offset 0x41E8, size 0x8, align 8
};
