#pragma once

class CDOTA_Item : public CDOTABaseAbility /*0x0*/  // sizeof 0x658, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 m_iState; // offset 0x580, size 0x4, align 4
    int32 m_CastAnimation; // offset 0x584, size 0x4, align 4
    bool m_bCombinable; // offset 0x588, size 0x1, align 1
    bool m_bPermanent; // offset 0x589, size 0x1, align 1
    bool m_bStackable; // offset 0x58A, size 0x1, align 1
    char _pad_058B[0x1]; // offset 0x58B
    int32 m_iStackableMax; // offset 0x58C, size 0x4, align 4
    bool m_bRecipe; // offset 0x590, size 0x1, align 1
    bool m_bRecipeConsumesCharges; // offset 0x591, size 0x1, align 1
    char _pad_0592[0x2]; // offset 0x592
    int32 m_iSharability; // offset 0x594, size 0x4, align 4
    bool m_bDroppable; // offset 0x598, size 0x1, align 1
    bool m_bPurchasable; // offset 0x599, size 0x1, align 1
    bool m_bSellable; // offset 0x59A, size 0x1, align 1
    bool m_bInitiallySellable; // offset 0x59B, size 0x1, align 1
    bool m_bForceUnsellable; // offset 0x59C, size 0x1, align 1
    bool m_bRequiresCharges; // offset 0x59D, size 0x1, align 1
    bool m_bKillable; // offset 0x59E, size 0x1, align 1
    bool m_bGloballyCombinable; // offset 0x59F, size 0x1, align 1
    bool m_bDisassemblable; // offset 0x5A0, size 0x1, align 1
    bool m_bNeverDisassemble; // offset 0x5A1, size 0x1, align 1
    bool m_bIsTempestDoubleClonable; // offset 0x5A2, size 0x1, align 1
    bool m_bIsNeutralActiveDrop; // offset 0x5A3, size 0x1, align 1
    bool m_bIsNeutralPassiveDrop; // offset 0x5A4, size 0x1, align 1
    char _pad_05A5[0x3]; // offset 0x5A5
    int32 m_nNeutralDropTeam; // offset 0x5A8, size 0x4, align 4
    bool m_bAlertable; // offset 0x5AC, size 0x1, align 1
    char _pad_05AD[0x3]; // offset 0x5AD
    int32 m_iInitialCharges; // offset 0x5B0, size 0x4, align 4
    bool m_bCastOnPickup; // offset 0x5B4, size 0x1, align 1
    bool m_bOnlyPlayerHeroPickup; // offset 0x5B5, size 0x1, align 1
    bool m_bCreepHeroPickup; // offset 0x5B6, size 0x1, align 1
    bool m_bCanBeUsedOutOfInventory; // offset 0x5B7, size 0x1, align 1
    bool m_bItemEnabled; // offset 0x5B8, size 0x1, align 1
    char _pad_05B9[0x3]; // offset 0x5B9
    GameTime_t m_flEnableTime; // offset 0x5BC, size 0x4, align 255
    GameTime_t m_flReclaimTime; // offset 0x5C0, size 0x4, align 255
    bool m_bCanBeConsumed; // offset 0x5C4, size 0x1, align 1
    bool m_bCanPutIntoSatchel; // offset 0x5C5, size 0x1, align 1
    bool m_bDisableStacking; // offset 0x5C6, size 0x1, align 1
    bool m_bDisplayOwnership; // offset 0x5C7, size 0x1, align 1
    bool m_bShowOnMinimap; // offset 0x5C8, size 0x1, align 1
    char _pad_05C9[0x3]; // offset 0x5C9
    float32 m_flMinimapIconSize; // offset 0x5CC, size 0x4, align 4
    bool m_bShowDroppedItemTooltip; // offset 0x5D0, size 0x1, align 1
    bool m_bIsUpgradeable; // offset 0x5D1, size 0x1, align 1
    char _pad_05D2[0x2]; // offset 0x5D2
    int32 m_nUpgradeProgress; // offset 0x5D4, size 0x4, align 4
    int32 m_nUpgradeGoal; // offset 0x5D8, size 0x4, align 4
    char _pad_05DC[0x4]; // offset 0x5DC
    CNetworkUtlVectorBase< uint8 > m_vecPreGameTransferPlayerIDs; // offset 0x5E0, size 0x18, align 8
    bool m_bStackWithOtherOwners; // offset 0x5F8, size 0x1, align 1
    bool m_bTemporarilyUncombinable; // offset 0x5F9, size 0x1, align 1
    bool m_bHasCommentedOnEquip; // offset 0x5FA, size 0x1, align 1
    char _pad_05FB[0x1]; // offset 0x5FB
    int32 m_iDeclarationFlags; // offset 0x5FC, size 0x4, align 4
    bool m_bCreatedByDisassemble; // offset 0x600, size 0x1, align 1
    bool m_bHasMixedOwnership; // offset 0x601, size 0x1, align 1
    bool m_bIsClonedItemProxy; // offset 0x602, size 0x1, align 1
    bool m_bNeutralItemRequestDrop; // offset 0x603, size 0x1, align 1
    GameTime_t m_flPurchaseTime; // offset 0x604, size 0x4, align 255
    GameTime_t m_flAssembledTime; // offset 0x608, size 0x4, align 255
    int32 m_iCurrentCharges; // offset 0x60C, size 0x4, align 4
    int32 m_iValuelessCharges; // offset 0x610, size 0x4, align 4
    int32 m_iSecondaryCharges; // offset 0x614, size 0x4, align 4
    bool m_bCombineLocked; // offset 0x618, size 0x1, align 1
    bool m_bMarkForSell; // offset 0x619, size 0x1, align 1
    char _pad_061A[0x2]; // offset 0x61A
    CHandle< CDOTA_Item_Physical > m_hContainer; // offset 0x61C, size 0x4, align 4
    PlayerID_t m_iPlayerOwnerID; // offset 0x620, size 0x4, align 255
    AbilityID_t m_nImbuedAbility; // offset 0x624, size 0x4, align 255
    bool m_bPurchasedWhileDead; // offset 0x628, size 0x1, align 1
    char _pad_0629[0x3]; // offset 0x629
    int32 m_nCombineVersion; // offset 0x62C, size 0x4, align 4
    char _pad_0630[0x28]; // offset 0x630
};
