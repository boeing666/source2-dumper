#pragma once

class C_DOTA_Item : public C_DOTABaseAbility /*0x0*/  // sizeof 0x758, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 m_CastAnimation; // offset 0x6A8, size 0x4, align 4
    bool m_bCombinable; // offset 0x6AC, size 0x1, align 1
    bool m_bPermanent; // offset 0x6AD, size 0x1, align 1
    bool m_bStackable; // offset 0x6AE, size 0x1, align 1
    char _pad_06AF[0x1]; // offset 0x6AF
    int32 m_iStackableMax; // offset 0x6B0, size 0x4, align 4
    bool m_bRecipe; // offset 0x6B4, size 0x1, align 1
    bool m_bRecipeConsumesCharges; // offset 0x6B5, size 0x1, align 1
    char _pad_06B6[0x2]; // offset 0x6B6
    int32 m_iSharability; // offset 0x6B8, size 0x4, align 4
    bool m_bDroppable; // offset 0x6BC, size 0x1, align 1
    bool m_bPurchasable; // offset 0x6BD, size 0x1, align 1
    bool m_bSellable; // offset 0x6BE, size 0x1, align 1
    bool m_bInitiallySellable; // offset 0x6BF, size 0x1, align 1
    bool m_bForceUnsellable; // offset 0x6C0, size 0x1, align 1
    bool m_bRequiresCharges; // offset 0x6C1, size 0x1, align 1
    bool m_bDisplayCharges; // offset 0x6C2, size 0x1, align 1
    bool m_bHideCharges; // offset 0x6C3, size 0x1, align 1
    bool m_bKillable; // offset 0x6C4, size 0x1, align 1
    bool m_bGloballyCombinable; // offset 0x6C5, size 0x1, align 1
    bool m_bDisassemblable; // offset 0x6C6, size 0x1, align 1
    bool m_bNeverDisassemble; // offset 0x6C7, size 0x1, align 1
    bool m_bIsNeutralActiveDrop; // offset 0x6C8, size 0x1, align 1
    bool m_bIsNeutralPassiveDrop; // offset 0x6C9, size 0x1, align 1
    char _pad_06CA[0x2]; // offset 0x6CA
    int32 m_nNeutralDropTeam; // offset 0x6CC, size 0x4, align 4
    bool m_bAlertable; // offset 0x6D0, size 0x1, align 1
    char _pad_06D1[0x3]; // offset 0x6D1
    int32 m_iInitialCharges; // offset 0x6D4, size 0x4, align 4
    bool m_bCastOnPickup; // offset 0x6D8, size 0x1, align 1
    bool m_bOnlyPlayerHeroPickup; // offset 0x6D9, size 0x1, align 1
    bool m_bCreepHeroPickup; // offset 0x6DA, size 0x1, align 1
    bool m_bCanBeConsumed; // offset 0x6DB, size 0x1, align 1
    int32 m_iValuelessCharges; // offset 0x6DC, size 0x4, align 4
    int32 m_iCurrentCharges; // offset 0x6E0, size 0x4, align 4
    int32 m_iSecondaryCharges; // offset 0x6E4, size 0x4, align 4
    int32 m_iMaxCharges; // offset 0x6E8, size 0x4, align 4
    bool m_bCombineLocked; // offset 0x6EC, size 0x1, align 1
    bool m_bMarkForSell; // offset 0x6ED, size 0x1, align 1
    char _pad_06EE[0x2]; // offset 0x6EE
    GameTime_t m_flPurchaseTime; // offset 0x6F0, size 0x4, align 255
    GameTime_t m_flAssembledTime; // offset 0x6F4, size 0x4, align 255
    bool m_bPurchasedWhileDead; // offset 0x6F8, size 0x1, align 1
    bool m_bCanBeUsedOutOfInventory; // offset 0x6F9, size 0x1, align 1
    bool m_bItemEnabled; // offset 0x6FA, size 0x1, align 1
    char _pad_06FB[0x1]; // offset 0x6FB
    GameTime_t m_flEnableTime; // offset 0x6FC, size 0x4, align 255
    GameTime_t m_flReclaimTime; // offset 0x700, size 0x4, align 255
    bool m_bDisplayOwnership; // offset 0x704, size 0x1, align 1
    bool m_bShowOnMinimap; // offset 0x705, size 0x1, align 1
    char _pad_0706[0x2]; // offset 0x706
    float32 m_flMinimapIconSize; // offset 0x708, size 0x4, align 4
    bool m_bIsUpgradeable; // offset 0x70C, size 0x1, align 1
    char _pad_070D[0x3]; // offset 0x70D
    int32 m_nUpgradeProgress; // offset 0x710, size 0x4, align 4
    int32 m_nUpgradeGoal; // offset 0x714, size 0x4, align 4
    bool m_bShowDroppedItemTooltip; // offset 0x718, size 0x1, align 1
    char _pad_0719[0x3]; // offset 0x719
    CHandle< C_BaseEntity > m_hOldOwnerEntity; // offset 0x71C, size 0x4, align 4
    int32 m_iOldCharges; // offset 0x720, size 0x4, align 4
    PlayerID_t m_iPlayerOwnerID; // offset 0x724, size 0x4, align 255
    AbilityID_t m_nImbuedAbility; // offset 0x728, size 0x4, align 255
    char _pad_072C[0x4]; // offset 0x72C
    C_NetworkUtlVectorBase< uint8 > m_vecPreGameTransferPlayerIDs; // offset 0x730, size 0x18, align 8
    char _pad_0748[0x8]; // offset 0x748
    bool m_bShowActivateToUseAnimation; // offset 0x750, size 0x1, align 1
    char _pad_0751[0x7]; // offset 0x751
};
