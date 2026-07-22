#pragma once

class C_CitadelBaseAbility : public C_BaseEntity /*0x0*/  // sizeof 0x11D8, align 0xFF [vtable abstract] (client) {MNetworkIncludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByUserGroup MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByUserGroup MNetworkOverride MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x6C0]; // offset 0x0
    CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecIntrinsicModifiers; // offset 0x6C0, size 0x18, align 8
    CModifierHandleTyped< CCitadelModifier > m_pCastDelayAutoModifier; // offset 0x6D8, size 0x18, align 8
    CModifierHandleTyped< CCitadelModifier > m_pChannelAutoModifier; // offset 0x6F0, size 0x18, align 8
    CGlobalSymbol m_strUsedCastGraphParam; // offset 0x708, size 0x8, align 8
    int32 m_nCastParamNeedsResetTick; // offset 0x710, size 0x4, align 4
    char _pad_0714[0x4]; // offset 0x714
    bool m_bIsCoolingDownInternal; // offset 0x718, size 0x1, align 1
    char _pad_0719[0x3]; // offset 0x719
    GameTime_t m_flCancelMashProtectionEndTime; // offset 0x71C, size 0x4, align 255
    GameTime_t m_flCancelLockoutEndTime; // offset 0x720, size 0x4, align 255
    char _pad_0724[0x1C]; // offset 0x724
    bool m_bChanneling; // offset 0x740, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    bool m_bInCastDelay; // offset 0x741, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    bool m_bShouldBeExecuted; // offset 0x742, size 0x1, align 1 | MNetworkEnable
    bool m_bCanBeUpgraded; // offset 0x743, size 0x1, align 1 | MNetworkEnable
    char _pad_0744[0x4]; // offset 0x744
    CitadelStolenAbilitySlot_t m_eStolenInSlot; // offset 0x748, size 0x10, align 255 | MNetworkEnable
    CitadelAbilityUpgradeInfoPacked_t m_nUpgradeInfo; // offset 0x758, size 0x4, align 255 | MNetworkEnable MNetworkChangeCallback MNetworkPriority
    EAbilityBucketType m_iBucketID; // offset 0x75C, size 0x4, align 4 | MNetworkEnable
    bool m_bToggleState; // offset 0x760, size 0x1, align 1 | MNetworkEnable
    char _pad_0761[0x3]; // offset 0x761
    GameTime_t m_flCooldownStart; // offset 0x764, size 0x4, align 255 | MNetworkEnable MNetworkPriority
    GameTime_t m_flCooldownEnd; // offset 0x768, size 0x4, align 255 | MNetworkEnable MNetworkPriority MNetworkChangeCallback
    GameTime_t m_flCastCompletedTime; // offset 0x76C, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flChannelStartTime; // offset 0x770, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flCastDelayStartTime; // offset 0x774, size 0x4, align 255 | MNetworkEnable
    EAbilitySlots_t m_eAbilitySlot; // offset 0x778, size 0x2, align 2 | MNetworkEnable MNetworkChangeCallback
    char _pad_077A[0x2]; // offset 0x77A
    GameTime_t m_flPostCastDelayEndTime; // offset 0x77C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    int32 m_iRemainingCharges; // offset 0x780, size 0x4, align 4 | MNetworkEnable MNetworkPriority
    GameTime_t m_flChargeRechargeStart; // offset 0x784, size 0x4, align 255 | MNetworkEnable MNetworkPriority
    GameTime_t m_flChargeRechargeEnd; // offset 0x788, size 0x4, align 255 | MNetworkEnable MNetworkPriority
    GameTime_t m_flMovementControlActiveTime; // offset 0x78C, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flSelectedChangedTime; // offset 0x790, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flAltCastHoldStartTime; // offset 0x794, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flAltCastDoubleTapStartTime; // offset 0x798, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    bool m_bCanBeImbued; // offset 0x79C, size 0x1, align 1 | MNetworkEnable
    char _pad_079D[0x3]; // offset 0x79D
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecImbuedAbilities; // offset 0x7A0, size 0x18, align 8 | MNetworkEnable MNetworkChangeCallback
    bool m_bSelectionModeIsAltMode; // offset 0x7B8, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bPredErrorCheckChanneling; // offset 0x7B9, size 0x1, align 1
    bool m_bPredErrorCheckCasting; // offset 0x7BA, size 0x1, align 1
    char _pad_07BB[0x1]; // offset 0x7BB
    GameTime_t m_flPredErrorCheckCastCompleteTime; // offset 0x7BC, size 0x4, align 255
    bool m_bPredErrorCheckIsSelected; // offset 0x7C0, size 0x1, align 1
    char _pad_07C1[0x9DB]; // offset 0x7C1
    GameTime_t m_flNextMeepMopTime; // offset 0x119C, size 0x4, align 255
    char _pad_11A0[0x38]; // offset 0x11A0
};
