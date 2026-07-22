#pragma once

struct DOTAAbilityDefinition_t  // sizeof 0x2B8, align 0xFF (client)
{
    CUtlString m_sAbilityName; // offset 0x0, size 0x8, align 8
    uint8_t m_bDisplayAdditionalHeroes : 1; // offset 0x0
    uint8_t m_bItemStackable : 1; // offset 0x0
    uint8_t m_bItemIsUpgradeable : 1; // offset 0x0
    uint8_t m_bItemIsPurchasable : 1; // offset 0x0
    uint8_t m_bItemIsPureSupport : 1; // offset 0x0
    uint8_t m_bItemAvailableAtCustomShop : 1; // offset 0x0
    uint8_t m_bItemHasPassive : 1; // offset 0x0
    uint8_t m_bItemAvailableAtSideShop : 1; // offset 0x0
    uint8_t m_bItemAvailableAtGlobalShop : 1; // offset 0x0
    uint8_t m_bItemAvailableAtSecretShop : 1; // offset 0x0
    uint8_t m_bItemRecipeConsumesCharges : 1; // offset 0x0
    uint8_t m_bItemIsRecipeGenerated : 1; // offset 0x0
    uint8_t m_bIsItem : 1; // offset 0x0
    uint8_t m_bEnableChargeDisplayOverride : 1; // offset 0x0
    uint8_t m_bImbueRequiresAOE : 1; // offset 0x0
    uint8_t m_bShowGiveIndicatorOnTargetCast : 1; // offset 0x0
    uint8_t m_bPassiveNeutral : 1; // offset 0x0
    uint8_t m_bActiveNeutral : 1; // offset 0x0
    uint8_t m_bBreakable : 1; // offset 0x0
    uint8_t m_bHasDynamicValue : 1; // offset 0x0
    uint8_t m_bRestrictToMaxLevel : 1; // offset 0x0
    uint8_t m_bAllowCombineFromGround : 1; // offset 0x0
    uint8_t m_bIsCooldownPausedOutOfInventory : 1; // offset 0x0
    uint8_t m_bIsSpeciallyBannedFromNeutralSlot : 1; // offset 0x0
    uint8_t m_bIsSpeciallyAllowedInNeutralSlot : 1; // offset 0x0
    uint8_t m_bInnate : 1; // offset 0x0
    uint8_t m_bDisplayOverheadAlertOnReceived : 1; // offset 0x0
    uint8_t m_bHasCastAnimation : 1; // offset 0x0
    uint8_t m_bIsAffectedByAoEIncrease : 1; // offset 0x0
    uint8_t m_bSuggestNotMaingame : 1; // offset 0x0
    uint8_t m_bSuggestLategame : 1; // offset 0x0
    uint8_t m_bSuggestEarlygame : 1; // offset 0x0
    uint8_t m_bSuggestPregame : 1; // offset 0x0
    uint8_t m_bItemRequiresCustomShop : 1; // offset 0x0
    uint8_t m_bIsObsolete : 1; // offset 0x0
    uint8_t m_bCanSkipBackpackCooldown : 1; // offset 0x0
    uint8_t m_bIsAllowedInBackpack : 1; // offset 0x0
    uint8_t m_bIsPlayerSpecificCooldown : 1; // offset 0x0
    uint8_t m_bAnimationIgnoresModelScale : 1; // offset 0x0
    uint8_t m_bIsCastableWhileHidden : 1; // offset 0x0
    uint8_t m_bIsGrantedByShard : 1; // offset 0x0
    uint8_t m_bIsGrantedByScepter : 1; // offset 0x0
    uint8_t m_bOnLearnbar : 1; // offset 0x0
    uint8_t m_bOnCastbar : 1; // offset 0x0
    uint8_t m_bItemIsRecipe : 1; // offset 0x0
    uint8_t m_bItemContributesToNetWorthWhenDropped : 1; // offset 0x0
    CUtlString m_sBaseAbilityName; // offset 0x8, size 0x8, align 8
    CUtlString m_sTextureName; // offset 0x10, size 0x8, align 8
    CUtlString m_sSharedCooldownName; // offset 0x18, size 0x8, align 8
    CUtlString m_sKeyOverride; // offset 0x20, size 0x8, align 8
    CUtlString m_sItemRecipeName; // offset 0x28, size 0x8, align 8
    CUtlString m_sLinkedAbility; // offset 0x30, size 0x8, align 8
    CUtlString m_sTooltipSummaryProperties; // offset 0x38, size 0x8, align 8
    int32 m_castActivity; // offset 0x40, size 0x4, align 4
    DotaGestureSlot_t m_castActivityGestureSlot; // offset 0x44, size 0x4, align 4
    KeyValues* m_pKVData; // offset 0x48, size 0x8, align 8
    AbilityID_t m_iAbilityID; // offset 0x50, size 0x4, align 255
    ABILITY_TYPES m_iAbilityType; // offset 0x54, size 0x4, align 4
    DOTA_ABILITY_BEHAVIOR m_iAbilityBehavior; // offset 0x58, size 0x8, align 8
    DOTA_UNIT_TARGET_TEAM m_iAbilityTargetTeam; // offset 0x60, size 0x4, align 4
    DOTA_UNIT_TARGET_TYPE m_iAbilityTargetType; // offset 0x64, size 0x4, align 4
    DOTA_UNIT_TARGET_FLAGS m_iAbilityTargetFlags; // offset 0x68, size 0x4, align 4
    DAMAGE_TYPES m_iAbilityDamageType; // offset 0x6C, size 0x4, align 4
    SPELL_IMMUNITY_TYPES m_iAbilityImmunityType; // offset 0x70, size 0x4, align 4
    SPELL_DISPELLABLE_TYPES m_iAbilityDispellableType; // offset 0x74, size 0x4, align 4
    int32 m_iFightRecapLevel; // offset 0x78, size 0x4, align 4
    int32 m_iTokenTier; // offset 0x7C, size 0x4, align 4
    item_definition_index_t m_iAssociatedConsumableItemDef; // offset 0x80, size 0x4, align 255
    item_definition_index_t m_iAssociatedLevelItemDef; // offset 0x84, size 0x4, align 255
    uint32 m_nRequiredEffectsMask; // offset 0x88, size 0x4, align 4
    int32 m_iAssociatedEventID; // offset 0x8C, size 0x4, align 4
    int32 m_iMaxLevel; // offset 0x90, size 0x4, align 4
    int32 m_iItemBaseLevel; // offset 0x94, size 0x4, align 4
    float32 m_flItemLevelByGameTime; // offset 0x98, size 0x4, align 4
    int32 m_iItemCost; // offset 0x9C, size 0x4, align 4
    int32 m_iItemInitialCharges; // offset 0xA0, size 0x4, align 4
    int32 m_iItemNeutralTierIndex; // offset 0xA4, size 0x4, align 4
    int32 m_iItemStockMax; // offset 0xA8, size 0x4, align 4
    float32 m_fItemStockTime; // offset 0xAC, size 0x4, align 4
    uint32* m_pItemShopTagKeys; // offset 0xB0, size 0x8, align 8
    int32 m_nNumShopTagKeys; // offset 0xB8, size 0x4, align 4
    AbilityID_t m_nRecipeResultAbilityID; // offset 0xBC, size 0x4, align 255
    CUtlVector< AbilityID_t > m_vecItemCombinesInto; // offset 0xC0, size 0x18, align 8
    CUtlVector< ItemRecipe_t > m_vecItemRecipes; // offset 0xD8, size 0x18, align 8
    float32 m_flBackpackCooldownOverride; // offset 0xF0, size 0x4, align 4
    int32 m_nUpgradeGoal; // offset 0xF4, size 0x4, align 4
    ItemQuality_t m_ItemQuality; // offset 0xF8, size 0x4, align 4
    float32 m_flModifierValue; // offset 0xFC, size 0x4, align 4
    float32 m_flModifierValueBonus; // offset 0x100, size 0x4, align 4
    char _pad_0104[0xD0]; // offset 0x104
    bool m_bHasScepterUpgrade; // offset 0x1D4, size 0x1, align 1
    bool m_bHasShardUpgrade; // offset 0x1D5, size 0x1, align 1
    char _pad_01D6[0x2]; // offset 0x1D6
    int32 m_nScepterUpgradeID; // offset 0x1D8, size 0x4, align 4
    int32 m_nShardUpgradeID; // offset 0x1DC, size 0x4, align 4
    CUtlStringToken m_strScepterRequiredFacet; // offset 0x1E0, size 0x4, align 4
    CUtlStringToken m_strShardRequiredFacet; // offset 0x1E4, size 0x4, align 4
    CUtlStringToken m_strForbiddenTomeRequiredFacet; // offset 0x1E8, size 0x4, align 4
    char _pad_01EC[0x4]; // offset 0x1EC
    CUtlString m_strSubAbilityNames; // offset 0x1F0, size 0x8, align 8
    CUtlString m_strFakeSubAbilityNames; // offset 0x1F8, size 0x8, align 8
    bool m_bShowCooldownInTooltips; // offset 0x200, size 0x1, align 1
    bool m_bSharedWithTeammates; // offset 0x201, size 0x1, align 1
    char _pad_0202[0x2]; // offset 0x202
    int32 m_nCastRangeBuffer; // offset 0x204, size 0x4, align 4
    int32 m_nSpecialAbilities; // offset 0x208, size 0x4, align 4
    char _pad_020C[0x4]; // offset 0x20C
    DOTASpecialAbility_t* m_pSpecialAbilities; // offset 0x210, size 0x8, align 8
    CUtlVector< DOTAOutgoingBonus_t > m_OutgoingBonuses; // offset 0x218, size 0x18, align 8
    CUtlOrderedMap< CUtlStringToken, DotaAbilityRelationship_t > m_mapRelationships; // offset 0x230, size 0x28, align 8
    CUtlString m_sModelName; // offset 0x258, size 0x8, align 8
    CUtlString m_sModelAlternateName; // offset 0x260, size 0x8, align 8
    CUtlString m_sEffectName; // offset 0x268, size 0x8, align 8
    CUtlString m_sPingOverrideText; // offset 0x270, size 0x8, align 8
    CUtlString m_sRequiredCustomShopName; // offset 0x278, size 0x8, align 8
    CUtlString m_sLinkedScepterAbility; // offset 0x280, size 0x8, align 8
    CUtlString m_sLinkedShardAbility; // offset 0x288, size 0x8, align 8
    CUtlString m_sLinkedForbiddenTomeAbility; // offset 0x290, size 0x8, align 8
    CUtlString m_sDependentOnAbility; // offset 0x298, size 0x8, align 8
    int32 m_nKillToastOverride; // offset 0x2A0, size 0x4, align 4
    int32 m_iLevelsBetweenUpgrades; // offset 0x2A4, size 0x4, align 4
    int32 m_iRequiredLevel; // offset 0x2A8, size 0x4, align 4
    char _pad_02AC[0xC]; // offset 0x2AC
};
