#pragma once

class CCitadelBaseAbility : public CBaseEntity /*0x0*/  // sizeof 0x14A0, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecIntrinsicModifiers; // offset 0x590, size 0x18, align 8
    CModifierHandleTyped< CCitadelModifier > m_pCastDelayAutoModifier; // offset 0x5A8, size 0x18, align 8
    CModifierHandleTyped< CCitadelModifier > m_pChannelAutoModifier; // offset 0x5C0, size 0x18, align 8
    char _pad_05D8[0x4]; // offset 0x5D8
    bool m_bIsCoolingDownInternal; // offset 0x5DC, size 0x1, align 1
    char _pad_05DD[0x3]; // offset 0x5DD
    GameTime_t m_flCancelMashProtectionEndTime; // offset 0x5E0, size 0x4, align 255
    GameTime_t m_flCancelLockoutEndTime; // offset 0x5E4, size 0x4, align 255
    char _pad_05E8[0x20]; // offset 0x5E8
    bool m_bChanneling; // offset 0x608, size 0x1, align 1
    bool m_bInCastDelay; // offset 0x609, size 0x1, align 1
    bool m_bShouldBeExecuted; // offset 0x60A, size 0x1, align 1
    bool m_bCanBeUpgraded; // offset 0x60B, size 0x1, align 1
    char _pad_060C[0x4]; // offset 0x60C
    CitadelStolenAbilitySlot_t m_eStolenInSlot; // offset 0x610, size 0x10, align 255
    CitadelAbilityUpgradeInfoPacked_t m_nUpgradeInfo; // offset 0x620, size 0x4, align 255
    bool m_bToggleState; // offset 0x624, size 0x1, align 1
    char _pad_0625[0x3]; // offset 0x625
    GameTime_t m_flCooldownStart; // offset 0x628, size 0x4, align 255
    GameTime_t m_flCooldownEnd; // offset 0x62C, size 0x4, align 255
    GameTime_t m_flCastCompletedTime; // offset 0x630, size 0x4, align 255
    GameTime_t m_flChannelStartTime; // offset 0x634, size 0x4, align 255
    GameTime_t m_flCastDelayStartTime; // offset 0x638, size 0x4, align 255
    EAbilitySlots_t m_eAbilitySlot; // offset 0x63C, size 0x2, align 2
    char _pad_063E[0x2]; // offset 0x63E
    GameTime_t m_flPostCastDelayEndTime; // offset 0x640, size 0x4, align 255
    int32 m_iRemainingCharges; // offset 0x644, size 0x4, align 4
    GameTime_t m_flChargeRechargeStart; // offset 0x648, size 0x4, align 255
    GameTime_t m_flChargeRechargeEnd; // offset 0x64C, size 0x4, align 255
    GameTime_t m_flMovementControlActiveTime; // offset 0x650, size 0x4, align 255
    GameTime_t m_flSelectedChangedTime; // offset 0x654, size 0x4, align 255
    GameTime_t m_flAltCastHoldStartTime; // offset 0x658, size 0x4, align 255
    GameTime_t m_flAltCastDoubleTapStartTime; // offset 0x65C, size 0x4, align 255
    bool m_bCanBeImbued; // offset 0x660, size 0x1, align 1
    char _pad_0661[0x7]; // offset 0x661
    CNetworkUtlVectorBase< CUtlStringToken > m_vecImbuedAbilities; // offset 0x668, size 0x18, align 8
    bool m_bSelectionModeIsAltMode; // offset 0x680, size 0x1, align 1
    char _pad_0681[0x3]; // offset 0x681
    float32 m_flPreviousEffectiveCooldown; // offset 0x684, size 0x4, align 4
    char _pad_0688[0xC9C]; // offset 0x688
    EAbilityActiveReasonBits m_enActiveReasonBits; // offset 0x1324, size 0x4, align 4
    GameTime_t[8] m_flActiveWindowDeadlines; // offset 0x1328, size 0x20, align 4
    char _pad_1348[0x158]; // offset 0x1348
};
