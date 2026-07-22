#pragma once

class C_DOTABaseAbility : public C_BaseEntity /*0x0*/  // sizeof 0x828, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    bool m_bAuxCastState; // offset 0x778, size 0x1, align 1
    char _pad_0779[0x3]; // offset 0x779
    int32 m_iEnemyLevel; // offset 0x77C, size 0x4, align 4
    int32 m_iMaxLevel; // offset 0x780, size 0x4, align 4
    int32 m_iRequiredLevel; // offset 0x784, size 0x4, align 4
    int32 m_iLevelsBetweenUpgrades; // offset 0x788, size 0x4, align 4
    bool m_bCanLearn; // offset 0x78C, size 0x1, align 1
    char _pad_078D[0x3]; // offset 0x78D
    float32 m_flUpgradeBlend; // offset 0x790, size 0x4, align 4
    bool m_bUpgradedDuringQuickcastPreview; // offset 0x794, size 0x1, align 1
    bool m_bConsiderOvershootInGetCastRange; // offset 0x795, size 0x1, align 1
    bool m_bRefCountsModifiers; // offset 0x796, size 0x1, align 1
    bool m_bHidden; // offset 0x797, size 0x1, align 1
    bool m_bOldHidden; // offset 0x798, size 0x1, align 1
    bool m_bActivated; // offset 0x799, size 0x1, align 1
    bool m_bOldActivated; // offset 0x79A, size 0x1, align 1
    char _pad_079B[0x1]; // offset 0x79B
    AbilityBarType_t m_nAbilityBarType; // offset 0x79C, size 0x4, align 4
    int32 m_iDirtyButtons; // offset 0x7A0, size 0x4, align 4
    bool m_bPerformDirtyParity; // offset 0x7A4, size 0x1, align 1
    char _pad_07A5[0x3]; // offset 0x7A5
    int32 m_iLevel; // offset 0x7A8, size 0x4, align 4
    bool m_bAbilityLevelDirty; // offset 0x7AC, size 0x1, align 1
    bool m_bToggleState; // offset 0x7AD, size 0x1, align 1
    char _pad_07AE[0x2]; // offset 0x7AE
    float32 m_flAbilityMuteDuration; // offset 0x7B0, size 0x4, align 4
    bool m_bInAbilityPhase; // offset 0x7B4, size 0x1, align 1
    char _pad_07B5[0x3]; // offset 0x7B5
    float32 m_fCooldown; // offset 0x7B8, size 0x4, align 4
    float32 m_flCooldownLength; // offset 0x7BC, size 0x4, align 4
    int32 m_iManaCost; // offset 0x7C0, size 0x4, align 4
    bool m_bAutoCastState; // offset 0x7C4, size 0x1, align 1
    bool m_bAltCastState; // offset 0x7C5, size 0x1, align 1
    bool m_bLocalAltCastState; // offset 0x7C6, size 0x1, align 1
    char _pad_07C7[0x1]; // offset 0x7C7
    int32 m_nLocalAltCastChangeSequenceNumber; // offset 0x7C8, size 0x4, align 4
    GameTime_t m_flChannelStartTime; // offset 0x7CC, size 0x4, align 255
    GameTime_t m_flCastStartTime; // offset 0x7D0, size 0x4, align 255
    bool m_bInIndefiniteCooldown; // offset 0x7D4, size 0x1, align 1
    bool m_bFrozenCooldown; // offset 0x7D5, size 0x1, align 1
    char _pad_07D6[0x2]; // offset 0x7D6
    float32 m_flOverrideCastPoint; // offset 0x7D8, size 0x4, align 4
    bool m_bStolen; // offset 0x7DC, size 0x1, align 1
    bool m_bStealable; // offset 0x7DD, size 0x1, align 1
    bool m_bReplicated; // offset 0x7DE, size 0x1, align 1
    char _pad_07DF[0x1]; // offset 0x7DF
    int32 m_nAbilityCurrentCharges; // offset 0x7E0, size 0x4, align 4
    float32 m_fAbilityChargeRestoreTimeRemaining; // offset 0x7E4, size 0x4, align 4
    bool m_bUpgradeRecommended; // offset 0x7E8, size 0x1, align 1
    char _pad_07E9[0x3]; // offset 0x7E9
    int32 m_nMaxLevelOverride; // offset 0x7EC, size 0x4, align 4
    int32 m_nRequiredLevelOverride; // offset 0x7F0, size 0x4, align 4
    int32 m_nLevelsBetweenUpgradesOverride; // offset 0x7F4, size 0x4, align 4
    HeroFacetKey_t m_nHeroFacetKey; // offset 0x7F8, size 0x8, align 255
    float32 m_flTotalExtendedChannelTime; // offset 0x800, size 0x4, align 4
    bool m_bGrantedByFacet; // offset 0x804, size 0x1, align 1
    bool m_bReflection; // offset 0x805, size 0x1, align 1
    char _pad_0806[0x2]; // offset 0x806
    CHandle< C_BaseEntity > m_pReflectionSourceAbility; // offset 0x808, size 0x4, align 4
    CHandle< C_BaseEntity > m_hHiddenAbilityForDisplay; // offset 0x80C, size 0x4, align 4
    char _pad_0810[0x4]; // offset 0x810
    bool m_bUpgradedWithTome; // offset 0x814, size 0x1, align 1
    char _pad_0815[0xB]; // offset 0x815
    float32 m_flLastCastClickTime; // offset 0x820, size 0x4, align 4
    char _pad_0824[0x4]; // offset 0x824
};
