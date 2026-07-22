#pragma once

class CCitadelBaseAbility : public CBaseEntity /*0x0*/  // sizeof 0xF70, align 0xFF [vtable abstract] (server) {MNetworkIncludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByUserGroup MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByUserGroup MNetworkUserGroupProxy MNetworkUserGroupProxy MNetworkOverride MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x578]; // offset 0x0
    CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecIntrinsicModifiers; // offset 0x578, size 0x18, align 8
    CModifierHandleTyped< CCitadelModifier > m_pCastDelayAutoModifier; // offset 0x590, size 0x18, align 8
    CModifierHandleTyped< CCitadelModifier > m_pChannelAutoModifier; // offset 0x5A8, size 0x18, align 8
    CGlobalSymbol m_strUsedCastGraphParam; // offset 0x5C0, size 0x8, align 8
    int32 m_nCastParamNeedsResetTick; // offset 0x5C8, size 0x4, align 4
    char _pad_05CC[0x4]; // offset 0x5CC
    bool m_bIsCoolingDownInternal; // offset 0x5D0, size 0x1, align 1
    char _pad_05D1[0x3]; // offset 0x5D1
    GameTime_t m_flCancelMashProtectionEndTime; // offset 0x5D4, size 0x4, align 255
    GameTime_t m_flCancelLockoutEndTime; // offset 0x5D8, size 0x4, align 255
    char _pad_05DC[0x1C]; // offset 0x5DC
    bool m_bChanneling; // offset 0x5F8, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    bool m_bInCastDelay; // offset 0x5F9, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    bool m_bShouldBeExecuted; // offset 0x5FA, size 0x1, align 1 | MNetworkEnable
    bool m_bCanBeUpgraded; // offset 0x5FB, size 0x1, align 1 | MNetworkEnable
    char _pad_05FC[0x4]; // offset 0x5FC
    CitadelStolenAbilitySlot_t m_eStolenInSlot; // offset 0x600, size 0x10, align 255 | MNetworkEnable
    CitadelAbilityUpgradeInfoPacked_t m_nUpgradeInfo; // offset 0x610, size 0x4, align 255 | MNetworkEnable MNetworkChangeCallback MNetworkPriority
    EAbilityBucketType m_iBucketID; // offset 0x614, size 0x4, align 4 | MNetworkEnable
    bool m_bToggleState; // offset 0x618, size 0x1, align 1 | MNetworkEnable
    char _pad_0619[0x3]; // offset 0x619
    GameTime_t m_flCooldownStart; // offset 0x61C, size 0x4, align 255 | MNetworkEnable MNetworkPriority
    GameTime_t m_flCooldownEnd; // offset 0x620, size 0x4, align 255 | MNetworkEnable MNetworkPriority MNetworkChangeCallback
    GameTime_t m_flCastCompletedTime; // offset 0x624, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flChannelStartTime; // offset 0x628, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flCastDelayStartTime; // offset 0x62C, size 0x4, align 255 | MNetworkEnable
    EAbilitySlots_t m_eAbilitySlot; // offset 0x630, size 0x2, align 2 | MNetworkEnable MNetworkChangeCallback
    char _pad_0632[0x2]; // offset 0x632
    GameTime_t m_flPostCastDelayEndTime; // offset 0x634, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    int32 m_iRemainingCharges; // offset 0x638, size 0x4, align 4 | MNetworkEnable MNetworkPriority
    GameTime_t m_flChargeRechargeStart; // offset 0x63C, size 0x4, align 255 | MNetworkEnable MNetworkPriority
    GameTime_t m_flChargeRechargeEnd; // offset 0x640, size 0x4, align 255 | MNetworkEnable MNetworkPriority
    GameTime_t m_flMovementControlActiveTime; // offset 0x644, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flSelectedChangedTime; // offset 0x648, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flAltCastHoldStartTime; // offset 0x64C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flAltCastDoubleTapStartTime; // offset 0x650, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    bool m_bCanBeImbued; // offset 0x654, size 0x1, align 1 | MNetworkEnable
    char _pad_0655[0x3]; // offset 0x655
    CNetworkUtlVectorBase< CUtlStringToken > m_vecImbuedAbilities; // offset 0x658, size 0x18, align 8 | MNetworkEnable MNetworkChangeCallback
    bool m_bSelectionModeIsAltMode; // offset 0x670, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0671[0x3]; // offset 0x671
    float32 m_flPreviousEffectiveCooldown; // offset 0x674, size 0x4, align 4
    char _pad_0678[0x8F8]; // offset 0x678
};
