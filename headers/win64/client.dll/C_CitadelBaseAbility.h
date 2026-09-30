#pragma once

class C_CitadelBaseAbility : public C_BaseEntity /*0x0*/  // sizeof 0x16D8, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x6D0]; // offset 0x0
    CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecIntrinsicModifiers; // offset 0x6D0, size 0x18, align 8
    CModifierHandleTyped< CCitadelModifier > m_pCastDelayAutoModifier; // offset 0x6E8, size 0x18, align 8
    CModifierHandleTyped< CCitadelModifier > m_pChannelAutoModifier; // offset 0x700, size 0x18, align 8
    char _pad_0718[0x4]; // offset 0x718
    bool m_bIsCoolingDownInternal; // offset 0x71C, size 0x1, align 1
    char _pad_071D[0x3]; // offset 0x71D
    GameTime_t m_flCancelMashProtectionEndTime; // offset 0x720, size 0x4, align 255
    GameTime_t m_flCancelLockoutEndTime; // offset 0x724, size 0x4, align 255
    char _pad_0728[0x20]; // offset 0x728
    bool m_bChanneling; // offset 0x748, size 0x1, align 1
    bool m_bInCastDelay; // offset 0x749, size 0x1, align 1
    bool m_bShouldBeExecuted; // offset 0x74A, size 0x1, align 1
    bool m_bCanBeUpgraded; // offset 0x74B, size 0x1, align 1
    char _pad_074C[0x4]; // offset 0x74C
    CitadelStolenAbilitySlot_t m_eStolenInSlot; // offset 0x750, size 0x10, align 255
    CitadelAbilityUpgradeInfoPacked_t m_nUpgradeInfo; // offset 0x760, size 0x4, align 255
    bool m_bToggleState; // offset 0x764, size 0x1, align 1
    char _pad_0765[0x3]; // offset 0x765
    GameTime_t m_flCooldownStart; // offset 0x768, size 0x4, align 255
    GameTime_t m_flCooldownEnd; // offset 0x76C, size 0x4, align 255
    GameTime_t m_flCastCompletedTime; // offset 0x770, size 0x4, align 255
    GameTime_t m_flChannelStartTime; // offset 0x774, size 0x4, align 255
    GameTime_t m_flCastDelayStartTime; // offset 0x778, size 0x4, align 255
    EAbilitySlots_t m_eAbilitySlot; // offset 0x77C, size 0x2, align 2
    char _pad_077E[0x2]; // offset 0x77E
    GameTime_t m_flPostCastDelayEndTime; // offset 0x780, size 0x4, align 255
    int32 m_iRemainingCharges; // offset 0x784, size 0x4, align 4
    GameTime_t m_flChargeRechargeStart; // offset 0x788, size 0x4, align 255
    GameTime_t m_flChargeRechargeEnd; // offset 0x78C, size 0x4, align 255
    GameTime_t m_flMovementControlActiveTime; // offset 0x790, size 0x4, align 255
    GameTime_t m_flSelectedChangedTime; // offset 0x794, size 0x4, align 255
    GameTime_t m_flAltCastHoldStartTime; // offset 0x798, size 0x4, align 255
    GameTime_t m_flAltCastDoubleTapStartTime; // offset 0x79C, size 0x4, align 255
    bool m_bCanBeImbued; // offset 0x7A0, size 0x1, align 1
    char _pad_07A1[0x7]; // offset 0x7A1
    C_NetworkUtlVectorBase< CUtlStringToken > m_vecImbuedAbilities; // offset 0x7A8, size 0x18, align 8
    bool m_bSelectionModeIsAltMode; // offset 0x7C0, size 0x1, align 1
    bool m_bPredErrorCheckChanneling; // offset 0x7C1, size 0x1, align 1
    bool m_bPredErrorCheckCasting; // offset 0x7C2, size 0x1, align 1
    char _pad_07C3[0x1]; // offset 0x7C3
    GameTime_t m_flPredErrorCheckCastCompleteTime; // offset 0x7C4, size 0x4, align 255
    bool m_bPredErrorCheckIsSelected; // offset 0x7C8, size 0x1, align 1
    char _pad_07C9[0xC7B]; // offset 0x7C9
    EAbilityActiveReasonBits m_enActiveReasonBits; // offset 0x1444, size 0x4, align 4
    GameTime_t[8] m_flActiveWindowDeadlines; // offset 0x1448, size 0x20, align 4
    char _pad_1468[0x234]; // offset 0x1468
    GameTime_t m_flNextMeepMopTime; // offset 0x169C, size 0x4, align 255
    char _pad_16A0[0x38]; // offset 0x16A0
};
