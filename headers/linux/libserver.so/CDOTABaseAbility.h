#pragma once

class CDOTABaseAbility : public CBaseEntity /*0x0*/  // sizeof 0x860, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    int32 m_iAbilityIndex; // offset 0x780, size 0x4, align 4
    int32 m_nStolenActivity; // offset 0x784, size 0x4, align 4
    bool m_bChanneling; // offset 0x788, size 0x1, align 1
    bool m_bRedirected; // offset 0x789, size 0x1, align 1
    bool m_bRefCountsModifiers; // offset 0x78A, size 0x1, align 1
    char _pad_078B[0x1]; // offset 0x78B
    int32 m_iModifierRefCount; // offset 0x78C, size 0x4, align 4
    bool m_bWantsToNeutralCast; // offset 0x790, size 0x1, align 1
    char _pad_0791[0x3]; // offset 0x791
    CHandle< CBaseEntity > m_hNeutralCastTarget; // offset 0x794, size 0x4, align 4
    bool m_bServerOnlyAbility; // offset 0x798, size 0x1, align 1
    bool m_bOnlyTransmitToCaster; // offset 0x799, size 0x1, align 1
    bool m_bGrantedAbilityChargesFromScepter; // offset 0x79A, size 0x1, align 1
    bool m_bGrantedAbilityChargesFromShard; // offset 0x79B, size 0x1, align 1
    bool m_bIsDefaultHeroAbility; // offset 0x79C, size 0x1, align 1
    bool m_bConsiderOvershootInGetCastRange; // offset 0x79D, size 0x1, align 1
    char _pad_079E[0x2]; // offset 0x79E
    float32 m_flExtendChannelTime; // offset 0x7A0, size 0x4, align 4
    bool m_bDisableSharedCooldown; // offset 0x7A4, size 0x1, align 1
    bool m_bHidden; // offset 0x7A5, size 0x1, align 1
    bool m_bActivated; // offset 0x7A6, size 0x1, align 1
    char _pad_07A7[0x1]; // offset 0x7A7
    AbilityBarType_t m_nAbilityBarType; // offset 0x7A8, size 0x4, align 4
    int32 m_iDirtyButtons; // offset 0x7AC, size 0x4, align 4
    int32 m_iLevel; // offset 0x7B0, size 0x4, align 4
    bool m_bToggleState; // offset 0x7B4, size 0x1, align 1
    bool m_bInAbilityPhase; // offset 0x7B5, size 0x1, align 1
    char _pad_07B6[0x2]; // offset 0x7B6
    float32 m_flAbilityMuteDuration; // offset 0x7B8, size 0x4, align 4
    float32 m_fCooldown; // offset 0x7BC, size 0x4, align 4
    float32 m_flCooldownLength; // offset 0x7C0, size 0x4, align 4
    int32 m_iManaCost; // offset 0x7C4, size 0x4, align 4
    bool m_bAutoCastState; // offset 0x7C8, size 0x1, align 1
    bool m_bAltCastState; // offset 0x7C9, size 0x1, align 1
    char _pad_07CA[0x2]; // offset 0x7CA
    GameTime_t m_flChannelStartTime; // offset 0x7CC, size 0x4, align 255
    GameTime_t m_flCastStartTime; // offset 0x7D0, size 0x4, align 255
    bool m_bInIndefiniteCooldown; // offset 0x7D4, size 0x1, align 1
    bool m_bFrozenCooldown; // offset 0x7D5, size 0x1, align 1
    char _pad_07D6[0x2]; // offset 0x7D6
    int32 m_nFrozenCooldownStack; // offset 0x7D8, size 0x4, align 4
    float32 m_flOverrideCastPoint; // offset 0x7DC, size 0x4, align 4
    bool m_bStolen; // offset 0x7E0, size 0x1, align 1
    bool m_bReplicated; // offset 0x7E1, size 0x1, align 1
    bool m_bStealable; // offset 0x7E2, size 0x1, align 1
    char _pad_07E3[0x1]; // offset 0x7E3
    int32 m_nAbilityCurrentCharges; // offset 0x7E4, size 0x4, align 4
    float32 m_fAbilityChargeRestoreTimeRemaining; // offset 0x7E8, size 0x4, align 4
    bool m_bUpgradeRecommended; // offset 0x7EC, size 0x1, align 1
    char _pad_07ED[0x3]; // offset 0x7ED
    int32 m_nMaxLevelOverride; // offset 0x7F0, size 0x4, align 4
    int32 m_nRequiredLevelOverride; // offset 0x7F4, size 0x4, align 4
    int32 m_nLevelsBetweenUpgradesOverride; // offset 0x7F8, size 0x4, align 4
    char _pad_07FC[0x4]; // offset 0x7FC
    HeroFacetKey_t m_nHeroFacetKey; // offset 0x800, size 0x8, align 255
    float32 m_flTotalExtendedChannelTime; // offset 0x808, size 0x4, align 4
    bool m_bGrantedByFacet; // offset 0x80C, size 0x1, align 1
    bool m_bReflection; // offset 0x80D, size 0x1, align 1
    char _pad_080E[0x2]; // offset 0x80E
    CHandle< CBaseEntity > m_pReflectionSourceAbility; // offset 0x810, size 0x4, align 4
    CHandle< CBaseEntity > m_hHiddenAbilityForDisplay; // offset 0x814, size 0x4, align 4
    bool m_bUpgradedWithTome; // offset 0x818, size 0x1, align 1
    char _pad_0819[0x3]; // offset 0x819
    CHandle< CBaseEntity > m_hReflectionCause; // offset 0x81C, size 0x4, align 4
    char _pad_0820[0x28]; // offset 0x820
    item_definition_index_t m_nBackedByEconItemIndex; // offset 0x848, size 0x4, align 255
    char _pad_084C[0xD]; // offset 0x84C
    bool m_bAltCastOrdered; // offset 0x859, size 0x1, align 1
    char _pad_085A[0x6]; // offset 0x85A
};
