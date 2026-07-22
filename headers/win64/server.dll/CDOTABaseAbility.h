#pragma once

class CDOTABaseAbility : public CBaseEntity /*0x0*/  // sizeof 0x580, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    int32 m_iAbilityIndex; // offset 0x4A0, size 0x4, align 4
    int32 m_nStolenActivity; // offset 0x4A4, size 0x4, align 4
    bool m_bChanneling; // offset 0x4A8, size 0x1, align 1
    bool m_bRedirected; // offset 0x4A9, size 0x1, align 1
    bool m_bRefCountsModifiers; // offset 0x4AA, size 0x1, align 1
    char _pad_04AB[0x1]; // offset 0x4AB
    int32 m_iModifierRefCount; // offset 0x4AC, size 0x4, align 4
    bool m_bWantsToNeutralCast; // offset 0x4B0, size 0x1, align 1
    char _pad_04B1[0x3]; // offset 0x4B1
    CHandle< CBaseEntity > m_hNeutralCastTarget; // offset 0x4B4, size 0x4, align 4
    bool m_bServerOnlyAbility; // offset 0x4B8, size 0x1, align 1
    bool m_bOnlyTransmitToCaster; // offset 0x4B9, size 0x1, align 1
    bool m_bGrantedAbilityChargesFromScepter; // offset 0x4BA, size 0x1, align 1
    bool m_bGrantedAbilityChargesFromShard; // offset 0x4BB, size 0x1, align 1
    bool m_bIsDefaultHeroAbility; // offset 0x4BC, size 0x1, align 1
    bool m_bConsiderOvershootInGetCastRange; // offset 0x4BD, size 0x1, align 1
    char _pad_04BE[0x2]; // offset 0x4BE
    float32 m_flExtendChannelTime; // offset 0x4C0, size 0x4, align 4
    bool m_bDisableSharedCooldown; // offset 0x4C4, size 0x1, align 1
    bool m_bHidden; // offset 0x4C5, size 0x1, align 1
    bool m_bActivated; // offset 0x4C6, size 0x1, align 1
    char _pad_04C7[0x1]; // offset 0x4C7
    AbilityBarType_t m_nAbilityBarType; // offset 0x4C8, size 0x4, align 4
    int32 m_iDirtyButtons; // offset 0x4CC, size 0x4, align 4
    int32 m_iLevel; // offset 0x4D0, size 0x4, align 4
    bool m_bToggleState; // offset 0x4D4, size 0x1, align 1
    bool m_bInAbilityPhase; // offset 0x4D5, size 0x1, align 1
    char _pad_04D6[0x2]; // offset 0x4D6
    float32 m_flAbilityMuteDuration; // offset 0x4D8, size 0x4, align 4
    float32 m_fCooldown; // offset 0x4DC, size 0x4, align 4
    float32 m_flCooldownLength; // offset 0x4E0, size 0x4, align 4
    int32 m_iManaCost; // offset 0x4E4, size 0x4, align 4
    bool m_bAutoCastState; // offset 0x4E8, size 0x1, align 1
    bool m_bAltCastState; // offset 0x4E9, size 0x1, align 1
    char _pad_04EA[0x2]; // offset 0x4EA
    GameTime_t m_flChannelStartTime; // offset 0x4EC, size 0x4, align 255
    GameTime_t m_flCastStartTime; // offset 0x4F0, size 0x4, align 255
    bool m_bInIndefiniteCooldown; // offset 0x4F4, size 0x1, align 1
    bool m_bFrozenCooldown; // offset 0x4F5, size 0x1, align 1
    char _pad_04F6[0x2]; // offset 0x4F6
    int32 m_nFrozenCooldownStack; // offset 0x4F8, size 0x4, align 4
    float32 m_flOverrideCastPoint; // offset 0x4FC, size 0x4, align 4
    bool m_bStolen; // offset 0x500, size 0x1, align 1
    bool m_bReplicated; // offset 0x501, size 0x1, align 1
    bool m_bStealable; // offset 0x502, size 0x1, align 1
    char _pad_0503[0x1]; // offset 0x503
    int32 m_nAbilityCurrentCharges; // offset 0x504, size 0x4, align 4
    float32 m_fAbilityChargeRestoreTimeRemaining; // offset 0x508, size 0x4, align 4
    bool m_bUpgradeRecommended; // offset 0x50C, size 0x1, align 1
    char _pad_050D[0x3]; // offset 0x50D
    int32 m_nMaxLevelOverride; // offset 0x510, size 0x4, align 4
    int32 m_nRequiredLevelOverride; // offset 0x514, size 0x4, align 4
    int32 m_nLevelsBetweenUpgradesOverride; // offset 0x518, size 0x4, align 4
    char _pad_051C[0x4]; // offset 0x51C
    HeroFacetKey_t m_nHeroFacetKey; // offset 0x520, size 0x8, align 255
    float32 m_flTotalExtendedChannelTime; // offset 0x528, size 0x4, align 4
    bool m_bGrantedByFacet; // offset 0x52C, size 0x1, align 1
    bool m_bReflection; // offset 0x52D, size 0x1, align 1
    char _pad_052E[0x2]; // offset 0x52E
    CHandle< CBaseEntity > m_pReflectionSourceAbility; // offset 0x530, size 0x4, align 4
    CHandle< CBaseEntity > m_hHiddenAbilityForDisplay; // offset 0x534, size 0x4, align 4
    bool m_bUpgradedWithTome; // offset 0x538, size 0x1, align 1
    char _pad_0539[0x3]; // offset 0x539
    CHandle< CBaseEntity > m_hReflectionCause; // offset 0x53C, size 0x4, align 4
    char _pad_0540[0x28]; // offset 0x540
    item_definition_index_t m_nBackedByEconItemIndex; // offset 0x568, size 0x4, align 255
    char _pad_056C[0xD]; // offset 0x56C
    bool m_bAltCastOrdered; // offset 0x579, size 0x1, align 1
    char _pad_057A[0x6]; // offset 0x57A
};
