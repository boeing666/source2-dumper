#pragma once

class C_DOTABaseAbility : public C_BaseEntity /*0x0*/  // sizeof 0x6A8, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x5F8]; // offset 0x0
    bool m_bAuxCastState; // offset 0x5F8, size 0x1, align 1
    char _pad_05F9[0x3]; // offset 0x5F9
    int32 m_iEnemyLevel; // offset 0x5FC, size 0x4, align 4
    int32 m_iMaxLevel; // offset 0x600, size 0x4, align 4
    int32 m_iRequiredLevel; // offset 0x604, size 0x4, align 4
    int32 m_iLevelsBetweenUpgrades; // offset 0x608, size 0x4, align 4
    bool m_bCanLearn; // offset 0x60C, size 0x1, align 1
    char _pad_060D[0x3]; // offset 0x60D
    float32 m_flUpgradeBlend; // offset 0x610, size 0x4, align 4
    bool m_bUpgradedDuringQuickcastPreview; // offset 0x614, size 0x1, align 1
    bool m_bConsiderOvershootInGetCastRange; // offset 0x615, size 0x1, align 1
    bool m_bRefCountsModifiers; // offset 0x616, size 0x1, align 1
    bool m_bHidden; // offset 0x617, size 0x1, align 1
    bool m_bOldHidden; // offset 0x618, size 0x1, align 1
    bool m_bActivated; // offset 0x619, size 0x1, align 1
    bool m_bOldActivated; // offset 0x61A, size 0x1, align 1
    char _pad_061B[0x1]; // offset 0x61B
    AbilityBarType_t m_nAbilityBarType; // offset 0x61C, size 0x4, align 4
    int32 m_iDirtyButtons; // offset 0x620, size 0x4, align 4
    bool m_bPerformDirtyParity; // offset 0x624, size 0x1, align 1
    char _pad_0625[0x3]; // offset 0x625
    int32 m_iLevel; // offset 0x628, size 0x4, align 4
    bool m_bAbilityLevelDirty; // offset 0x62C, size 0x1, align 1
    bool m_bToggleState; // offset 0x62D, size 0x1, align 1
    char _pad_062E[0x2]; // offset 0x62E
    float32 m_flAbilityMuteDuration; // offset 0x630, size 0x4, align 4
    bool m_bInAbilityPhase; // offset 0x634, size 0x1, align 1
    char _pad_0635[0x3]; // offset 0x635
    float32 m_fCooldown; // offset 0x638, size 0x4, align 4
    float32 m_flCooldownLength; // offset 0x63C, size 0x4, align 4
    int32 m_iManaCost; // offset 0x640, size 0x4, align 4
    bool m_bAutoCastState; // offset 0x644, size 0x1, align 1
    bool m_bAltCastState; // offset 0x645, size 0x1, align 1
    bool m_bLocalAltCastState; // offset 0x646, size 0x1, align 1
    char _pad_0647[0x1]; // offset 0x647
    int32 m_nLocalAltCastChangeSequenceNumber; // offset 0x648, size 0x4, align 4
    GameTime_t m_flChannelStartTime; // offset 0x64C, size 0x4, align 255
    GameTime_t m_flCastStartTime; // offset 0x650, size 0x4, align 255
    bool m_bInIndefiniteCooldown; // offset 0x654, size 0x1, align 1
    bool m_bFrozenCooldown; // offset 0x655, size 0x1, align 1
    char _pad_0656[0x2]; // offset 0x656
    float32 m_flOverrideCastPoint; // offset 0x658, size 0x4, align 4
    bool m_bStolen; // offset 0x65C, size 0x1, align 1
    bool m_bStealable; // offset 0x65D, size 0x1, align 1
    bool m_bReplicated; // offset 0x65E, size 0x1, align 1
    char _pad_065F[0x1]; // offset 0x65F
    int32 m_nAbilityCurrentCharges; // offset 0x660, size 0x4, align 4
    float32 m_fAbilityChargeRestoreTimeRemaining; // offset 0x664, size 0x4, align 4
    bool m_bUpgradeRecommended; // offset 0x668, size 0x1, align 1
    char _pad_0669[0x3]; // offset 0x669
    int32 m_nMaxLevelOverride; // offset 0x66C, size 0x4, align 4
    int32 m_nRequiredLevelOverride; // offset 0x670, size 0x4, align 4
    int32 m_nLevelsBetweenUpgradesOverride; // offset 0x674, size 0x4, align 4
    HeroFacetKey_t m_nHeroFacetKey; // offset 0x678, size 0x8, align 255
    float32 m_flTotalExtendedChannelTime; // offset 0x680, size 0x4, align 4
    bool m_bGrantedByFacet; // offset 0x684, size 0x1, align 1
    bool m_bReflection; // offset 0x685, size 0x1, align 1
    char _pad_0686[0x2]; // offset 0x686
    CHandle< C_BaseEntity > m_pReflectionSourceAbility; // offset 0x688, size 0x4, align 4
    CHandle< C_BaseEntity > m_hHiddenAbilityForDisplay; // offset 0x68C, size 0x4, align 4
    char _pad_0690[0x4]; // offset 0x690
    bool m_bUpgradedWithTome; // offset 0x694, size 0x1, align 1
    char _pad_0695[0xB]; // offset 0x695
    float32 m_flLastCastClickTime; // offset 0x6A0, size 0x4, align 4
    char _pad_06A4[0x4]; // offset 0x6A4
};
