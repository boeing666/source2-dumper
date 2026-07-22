#pragma once

class C_DOTA_Item : public C_DOTABaseAbility /*0x0*/  // sizeof 0x8D0, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 m_CastAnimation; // offset 0x824, size 0x4, align 4
    bool m_bCombinable; // offset 0x828, size 0x1, align 1
    bool m_bPermanent; // offset 0x829, size 0x1, align 1
    bool m_bStackable; // offset 0x82A, size 0x1, align 1
    char _pad_082B[0x1]; // offset 0x82B
    int32 m_iStackableMax; // offset 0x82C, size 0x4, align 4
    bool m_bRecipe; // offset 0x830, size 0x1, align 1
    bool m_bRecipeConsumesCharges; // offset 0x831, size 0x1, align 1
    char _pad_0832[0x2]; // offset 0x832
    int32 m_iSharability; // offset 0x834, size 0x4, align 4
    bool m_bDroppable; // offset 0x838, size 0x1, align 1
    bool m_bPurchasable; // offset 0x839, size 0x1, align 1
    bool m_bSellable; // offset 0x83A, size 0x1, align 1
    bool m_bInitiallySellable; // offset 0x83B, size 0x1, align 1
    bool m_bForceUnsellable; // offset 0x83C, size 0x1, align 1
    bool m_bRequiresCharges; // offset 0x83D, size 0x1, align 1
    bool m_bDisplayCharges; // offset 0x83E, size 0x1, align 1
    bool m_bHideCharges; // offset 0x83F, size 0x1, align 1
    bool m_bKillable; // offset 0x840, size 0x1, align 1
    bool m_bGloballyCombinable; // offset 0x841, size 0x1, align 1
    bool m_bDisassemblable; // offset 0x842, size 0x1, align 1
    bool m_bNeverDisassemble; // offset 0x843, size 0x1, align 1
    bool m_bIsNeutralActiveDrop; // offset 0x844, size 0x1, align 1
    bool m_bIsNeutralPassiveDrop; // offset 0x845, size 0x1, align 1
    char _pad_0846[0x2]; // offset 0x846
    int32 m_nNeutralDropTeam; // offset 0x848, size 0x4, align 4
    bool m_bAlertable; // offset 0x84C, size 0x1, align 1
    char _pad_084D[0x3]; // offset 0x84D
    int32 m_iInitialCharges; // offset 0x850, size 0x4, align 4
    bool m_bCastOnPickup; // offset 0x854, size 0x1, align 1
    bool m_bOnlyPlayerHeroPickup; // offset 0x855, size 0x1, align 1
    bool m_bCreepHeroPickup; // offset 0x856, size 0x1, align 1
    bool m_bCanBeConsumed; // offset 0x857, size 0x1, align 1
    int32 m_iValuelessCharges; // offset 0x858, size 0x4, align 4
    int32 m_iCurrentCharges; // offset 0x85C, size 0x4, align 4
    int32 m_iSecondaryCharges; // offset 0x860, size 0x4, align 4
    int32 m_iMaxCharges; // offset 0x864, size 0x4, align 4
    bool m_bCombineLocked; // offset 0x868, size 0x1, align 1
    bool m_bMarkForSell; // offset 0x869, size 0x1, align 1
    char _pad_086A[0x2]; // offset 0x86A
    GameTime_t m_flPurchaseTime; // offset 0x86C, size 0x4, align 255
    GameTime_t m_flAssembledTime; // offset 0x870, size 0x4, align 255
    bool m_bPurchasedWhileDead; // offset 0x874, size 0x1, align 1
    bool m_bCanBeUsedOutOfInventory; // offset 0x875, size 0x1, align 1
    bool m_bItemEnabled; // offset 0x876, size 0x1, align 1
    char _pad_0877[0x1]; // offset 0x877
    GameTime_t m_flEnableTime; // offset 0x878, size 0x4, align 255
    GameTime_t m_flReclaimTime; // offset 0x87C, size 0x4, align 255
    bool m_bDisplayOwnership; // offset 0x880, size 0x1, align 1
    bool m_bShowOnMinimap; // offset 0x881, size 0x1, align 1
    char _pad_0882[0x2]; // offset 0x882
    float32 m_flMinimapIconSize; // offset 0x884, size 0x4, align 4
    bool m_bIsUpgradeable; // offset 0x888, size 0x1, align 1
    char _pad_0889[0x3]; // offset 0x889
    int32 m_nUpgradeProgress; // offset 0x88C, size 0x4, align 4
    int32 m_nUpgradeGoal; // offset 0x890, size 0x4, align 4
    bool m_bShowDroppedItemTooltip; // offset 0x894, size 0x1, align 1
    char _pad_0895[0x3]; // offset 0x895
    CHandle< C_BaseEntity > m_hOldOwnerEntity; // offset 0x898, size 0x4, align 4
    int32 m_iOldCharges; // offset 0x89C, size 0x4, align 4
    PlayerID_t m_iPlayerOwnerID; // offset 0x8A0, size 0x4, align 255
    AbilityID_t m_nImbuedAbility; // offset 0x8A4, size 0x4, align 255
    C_NetworkUtlVectorBase< uint8 > m_vecPreGameTransferPlayerIDs; // offset 0x8A8, size 0x18, align 8
    char _pad_08C0[0x8]; // offset 0x8C0
    bool m_bShowActivateToUseAnimation; // offset 0x8C8, size 0x1, align 1
    char _pad_08C9[0x7]; // offset 0x8C9
};
