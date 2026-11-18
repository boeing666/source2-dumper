#pragma once

class CDOTA_Modifier_DataDriven : public CDOTA_Buff /*0x0*/  // sizeof 0x4380, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    AbilityID_t m_nAbilityID; // offset 0x1AF8, size 0x4, align 255
    int32 m_nIndexInAbility; // offset 0x1AFC, size 0x4, align 4
    bool m_bIsHidden; // offset 0x1B00, size 0x1, align 1
    bool m_bIsDebuff; // offset 0x1B01, size 0x1, align 1
    bool m_bIsPurgable; // offset 0x1B02, size 0x1, align 1
    bool m_bIsStunDebuff; // offset 0x1B03, size 0x1, align 1
    bool m_bAllowIllusionDuplicate; // offset 0x1B04, size 0x1, align 1
    bool m_bRemoveOnDeath; // offset 0x1B05, size 0x1, align 1
    char _pad_1B06[0x2]; // offset 0x1B06
    char* m_pszAuraModifier; // offset 0x1B08, size 0x8, align 8
    int32 m_nAuraModifierIndex; // offset 0x1B10, size 0x4, align 4
    int32 m_nAuraRadius; // offset 0x1B14, size 0x4, align 4
    int32 m_nAuraSearchTeam; // offset 0x1B18, size 0x4, align 4
    int32 m_nAuraSearchType; // offset 0x1B1C, size 0x4, align 4
    int32 m_nAuraSearchFlags; // offset 0x1B20, size 0x4, align 4
    bool m_bAuraApplyToCaster; // offset 0x1B24, size 0x1, align 1
    bool m_bAuraApplyToParent; // offset 0x1B25, size 0x1, align 1
    char _pad_1B26[0x2]; // offset 0x1B26
    int32 m_nAttributes; // offset 0x1B28, size 0x4, align 4
    char _pad_1B2C[0x4]; // offset 0x1B2C
    char* m_pszEffectName; // offset 0x1B30, size 0x8, align 8
    int32 m_nEffectAttachType; // offset 0x1B38, size 0x4, align 4
    int32 m_nModifierPriority; // offset 0x1B3C, size 0x4, align 4
    char* m_pszStatusEffectName; // offset 0x1B40, size 0x8, align 8
    int32 m_nStatusEffectPriority; // offset 0x1B48, size 0x4, align 4
    int32 m_nOverrideAnimation; // offset 0x1B4C, size 0x4, align 4
    bool m_bNeedsReParseIfRefreshed; // offset 0x1B50, size 0x1, align 1
    char _pad_1B51[0x7]; // offset 0x1B51
    char* m_pszModelName; // offset 0x1B58, size 0x8, align 8
    char _pad_1B60[0x2718]; // offset 0x1B60
    uint64 m_nModifierStatesEnabled; // offset 0x4278, size 0x8, align 8
    uint64 m_nModifierStatesDisabled; // offset 0x4280, size 0x8, align 8
    KeyValues* m_pOnCreated; // offset 0x4288, size 0x8, align 8
    KeyValues* m_pOnIntervalThink; // offset 0x4290, size 0x8, align 8
    KeyValues* m_pOnDestroy; // offset 0x4298, size 0x8, align 8
    KeyValues* m_pOnAttackStart; // offset 0x42A0, size 0x8, align 8
    KeyValues* m_pOnAttack; // offset 0x42A8, size 0x8, align 8
    KeyValues* m_pOnAttackLanded; // offset 0x42B0, size 0x8, align 8
    KeyValues* m_pOnAttackFailed; // offset 0x42B8, size 0x8, align 8
    KeyValues* m_pOnAttackAllied; // offset 0x42C0, size 0x8, align 8
    KeyValues* m_pOnProjectileDodge; // offset 0x42C8, size 0x8, align 8
    KeyValues* m_pOnOrder; // offset 0x42D0, size 0x8, align 8
    KeyValues* m_pOnUnitMoved; // offset 0x42D8, size 0x8, align 8
    KeyValues* m_pOnAbilityStart; // offset 0x42E0, size 0x8, align 8
    KeyValues* m_pOnAbilityExecuted; // offset 0x42E8, size 0x8, align 8
    KeyValues* m_pOnBreakInvisibility; // offset 0x42F0, size 0x8, align 8
    KeyValues* m_pOnAbilityEndChannel; // offset 0x42F8, size 0x8, align 8
    KeyValues* m_pOnTakeDamage; // offset 0x4300, size 0x8, align 8
    KeyValues* m_pOnDealDamage; // offset 0x4308, size 0x8, align 8
    KeyValues* m_pOnStateChanged; // offset 0x4310, size 0x8, align 8
    KeyValues* m_pOnAttacked; // offset 0x4318, size 0x8, align 8
    KeyValues* m_pOnDeath; // offset 0x4320, size 0x8, align 8
    KeyValues* m_pOnKill; // offset 0x4328, size 0x8, align 8
    KeyValues* m_pOnRespawn; // offset 0x4330, size 0x8, align 8
    KeyValues* m_pOnSpentMana; // offset 0x4338, size 0x8, align 8
    KeyValues* m_pOnTeleporting; // offset 0x4340, size 0x8, align 8
    KeyValues* m_pOnTeleported; // offset 0x4348, size 0x8, align 8
    KeyValues* m_pOnHealthGained; // offset 0x4350, size 0x8, align 8
    KeyValues* m_pOnManaGained; // offset 0x4358, size 0x8, align 8
    KeyValues* m_pOnHeroKilled; // offset 0x4360, size 0x8, align 8
    KeyValues* m_pOnHealReceived; // offset 0x4368, size 0x8, align 8
    KeyValues* m_pOnAttackFinished; // offset 0x4370, size 0x8, align 8
    KeyValues* m_pOnAttackCancelled; // offset 0x4378, size 0x8, align 8
};
