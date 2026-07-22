#pragma once

class CDOTA_Item : public CDOTABaseAbility /*0x0*/  // sizeof 0x930, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 m_iState; // offset 0x85C, size 0x4, align 4
    int32 m_CastAnimation; // offset 0x860, size 0x4, align 4
    bool m_bCombinable; // offset 0x864, size 0x1, align 1
    bool m_bPermanent; // offset 0x865, size 0x1, align 1
    bool m_bStackable; // offset 0x866, size 0x1, align 1
    char _pad_0867[0x1]; // offset 0x867
    int32 m_iStackableMax; // offset 0x868, size 0x4, align 4
    bool m_bRecipe; // offset 0x86C, size 0x1, align 1
    bool m_bRecipeConsumesCharges; // offset 0x86D, size 0x1, align 1
    char _pad_086E[0x2]; // offset 0x86E
    int32 m_iSharability; // offset 0x870, size 0x4, align 4
    bool m_bDroppable; // offset 0x874, size 0x1, align 1
    bool m_bPurchasable; // offset 0x875, size 0x1, align 1
    bool m_bSellable; // offset 0x876, size 0x1, align 1
    bool m_bInitiallySellable; // offset 0x877, size 0x1, align 1
    bool m_bForceUnsellable; // offset 0x878, size 0x1, align 1
    bool m_bRequiresCharges; // offset 0x879, size 0x1, align 1
    bool m_bKillable; // offset 0x87A, size 0x1, align 1
    bool m_bGloballyCombinable; // offset 0x87B, size 0x1, align 1
    bool m_bDisassemblable; // offset 0x87C, size 0x1, align 1
    bool m_bNeverDisassemble; // offset 0x87D, size 0x1, align 1
    bool m_bIsTempestDoubleClonable; // offset 0x87E, size 0x1, align 1
    bool m_bIsNeutralActiveDrop; // offset 0x87F, size 0x1, align 1
    bool m_bIsNeutralPassiveDrop; // offset 0x880, size 0x1, align 1
    char _pad_0881[0x3]; // offset 0x881
    int32 m_nNeutralDropTeam; // offset 0x884, size 0x4, align 4
    bool m_bAlertable; // offset 0x888, size 0x1, align 1
    char _pad_0889[0x3]; // offset 0x889
    int32 m_iInitialCharges; // offset 0x88C, size 0x4, align 4
    bool m_bCastOnPickup; // offset 0x890, size 0x1, align 1
    bool m_bOnlyPlayerHeroPickup; // offset 0x891, size 0x1, align 1
    bool m_bCreepHeroPickup; // offset 0x892, size 0x1, align 1
    bool m_bCanBeUsedOutOfInventory; // offset 0x893, size 0x1, align 1
    bool m_bItemEnabled; // offset 0x894, size 0x1, align 1
    char _pad_0895[0x3]; // offset 0x895
    GameTime_t m_flEnableTime; // offset 0x898, size 0x4, align 255
    GameTime_t m_flReclaimTime; // offset 0x89C, size 0x4, align 255
    bool m_bCanBeConsumed; // offset 0x8A0, size 0x1, align 1
    bool m_bCanPutIntoSatchel; // offset 0x8A1, size 0x1, align 1
    bool m_bDisableStacking; // offset 0x8A2, size 0x1, align 1
    bool m_bDisplayOwnership; // offset 0x8A3, size 0x1, align 1
    bool m_bShowOnMinimap; // offset 0x8A4, size 0x1, align 1
    char _pad_08A5[0x3]; // offset 0x8A5
    float32 m_flMinimapIconSize; // offset 0x8A8, size 0x4, align 4
    bool m_bShowDroppedItemTooltip; // offset 0x8AC, size 0x1, align 1
    bool m_bIsUpgradeable; // offset 0x8AD, size 0x1, align 1
    char _pad_08AE[0x2]; // offset 0x8AE
    int32 m_nUpgradeProgress; // offset 0x8B0, size 0x4, align 4
    int32 m_nUpgradeGoal; // offset 0x8B4, size 0x4, align 4
    CNetworkUtlVectorBase< uint8 > m_vecPreGameTransferPlayerIDs; // offset 0x8B8, size 0x18, align 8
    bool m_bStackWithOtherOwners; // offset 0x8D0, size 0x1, align 1
    bool m_bTemporarilyUncombinable; // offset 0x8D1, size 0x1, align 1
    bool m_bHasCommentedOnEquip; // offset 0x8D2, size 0x1, align 1
    char _pad_08D3[0x1]; // offset 0x8D3
    int32 m_iDeclarationFlags; // offset 0x8D4, size 0x4, align 4
    bool m_bCreatedByDisassemble; // offset 0x8D8, size 0x1, align 1
    bool m_bHasMixedOwnership; // offset 0x8D9, size 0x1, align 1
    bool m_bIsClonedItemProxy; // offset 0x8DA, size 0x1, align 1
    bool m_bNeutralItemRequestDrop; // offset 0x8DB, size 0x1, align 1
    GameTime_t m_flPurchaseTime; // offset 0x8DC, size 0x4, align 255
    GameTime_t m_flAssembledTime; // offset 0x8E0, size 0x4, align 255
    int32 m_iCurrentCharges; // offset 0x8E4, size 0x4, align 4
    int32 m_iValuelessCharges; // offset 0x8E8, size 0x4, align 4
    int32 m_iSecondaryCharges; // offset 0x8EC, size 0x4, align 4
    bool m_bCombineLocked; // offset 0x8F0, size 0x1, align 1
    bool m_bMarkForSell; // offset 0x8F1, size 0x1, align 1
    char _pad_08F2[0x2]; // offset 0x8F2
    CHandle< CDOTA_Item_Physical > m_hContainer; // offset 0x8F4, size 0x4, align 4
    PlayerID_t m_iPlayerOwnerID; // offset 0x8F8, size 0x4, align 255
    AbilityID_t m_nImbuedAbility; // offset 0x8FC, size 0x4, align 255
    bool m_bPurchasedWhileDead; // offset 0x900, size 0x1, align 1
    char _pad_0901[0x3]; // offset 0x901
    int32 m_nCombineVersion; // offset 0x904, size 0x4, align 4
    char _pad_0908[0x28]; // offset 0x908
};
