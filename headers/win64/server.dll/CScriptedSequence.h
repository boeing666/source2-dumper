#pragma once

class CScriptedSequence : public CBaseEntity /*0x0*/  // sizeof 0x6F0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CUtlSymbolLarge m_iszEntry; // offset 0x4B0, size 0x8, align 8
    CUtlSymbolLarge m_iszPreIdle; // offset 0x4B8, size 0x8, align 8
    CUtlSymbolLarge m_iszPlay; // offset 0x4C0, size 0x8, align 8
    CUtlSymbolLarge m_iszPostIdle; // offset 0x4C8, size 0x8, align 8
    CUtlSymbolLarge m_iszModifierToAddOnPlay; // offset 0x4D0, size 0x8, align 8
    CUtlSymbolLarge m_iszNextScript; // offset 0x4D8, size 0x8, align 8
    CUtlSymbolLarge m_iszEntity; // offset 0x4E0, size 0x8, align 8
    CUtlSymbolLarge m_iszSyncGroup; // offset 0x4E8, size 0x8, align 8
    ScriptedMoveTo_t m_nMoveTo; // offset 0x4F0, size 0x4, align 4
    SharedMovementGait_t m_nMoveToGait; // offset 0x4F4, size 0x1, align 1
    char _pad_04F5[0x3]; // offset 0x4F5
    ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior; // offset 0x4F8, size 0x4, align 4
    ForcedCrouchState_t m_nForcedCrouchState; // offset 0x4FC, size 0x4, align 4
    bool m_bIsPlayingPreIdle; // offset 0x500, size 0x1, align 1
    bool m_bIsPlayingEntry; // offset 0x501, size 0x1, align 1
    bool m_bIsPlayingAction; // offset 0x502, size 0x1, align 1
    bool m_bIsPlayingPostIdle; // offset 0x503, size 0x1, align 1
    bool m_bDontRotateOther; // offset 0x504, size 0x1, align 1
    bool m_bIsRepeatable; // offset 0x505, size 0x1, align 1
    bool m_bShouldLeaveCorpse; // offset 0x506, size 0x1, align 1
    bool m_bStartOnSpawn; // offset 0x507, size 0x1, align 1
    bool m_bDisallowInterrupts; // offset 0x508, size 0x1, align 1
    bool m_bCanOverrideNPCState; // offset 0x509, size 0x1, align 1
    bool m_bDontTeleportAtEnd; // offset 0x50A, size 0x1, align 1
    bool m_bHighPriority; // offset 0x50B, size 0x1, align 1
    bool m_bHideDebugComplaints; // offset 0x50C, size 0x1, align 1
    bool m_bContinueOnDeath; // offset 0x50D, size 0x1, align 1
    bool m_bLoopPreIdleSequence; // offset 0x50E, size 0x1, align 1
    bool m_bLoopActionSequence; // offset 0x50F, size 0x1, align 1
    bool m_bLoopPostIdleSequence; // offset 0x510, size 0x1, align 1
    bool m_bSynchPostIdles; // offset 0x511, size 0x1, align 1
    bool m_bIgnoreLookAt; // offset 0x512, size 0x1, align 1
    bool m_bIgnoreGravity; // offset 0x513, size 0x1, align 1
    bool m_bDisableNPCCollisions; // offset 0x514, size 0x1, align 1
    bool m_bKeepAnimgraphLockedPost; // offset 0x515, size 0x1, align 1
    bool m_bDontAddModifiers; // offset 0x516, size 0x1, align 1
    bool m_bDisableAimingWhileMoving; // offset 0x517, size 0x1, align 1
    bool m_bIgnoreRotation; // offset 0x518, size 0x1, align 1
    char _pad_0519[0x3]; // offset 0x519
    float32 m_flRadius; // offset 0x51C, size 0x4, align 4
    float32 m_flRepeat; // offset 0x520, size 0x4, align 4
    float32 m_flPlayAnimFadeInTime; // offset 0x524, size 0x4, align 4
    float32 m_flMoveInterpTime; // offset 0x528, size 0x4, align 4
    float32 m_flAngRate; // offset 0x52C, size 0x4, align 4
    float32 m_flMoveSpeed; // offset 0x530, size 0x4, align 4
    bool m_bWaitUntilMoveCompletesToStartAnimation; // offset 0x534, size 0x1, align 1
    char _pad_0535[0x3]; // offset 0x535
    int32 m_nNotReadySequenceCount; // offset 0x538, size 0x4, align 4
    GameTime_t m_startTime; // offset 0x53C, size 0x4, align 255
    bool m_bWaitForBeginSequence; // offset 0x540, size 0x1, align 1
    char _pad_0541[0x3]; // offset 0x541
    int32 m_saved_effects; // offset 0x544, size 0x4, align 4
    int32 m_savedFlags; // offset 0x548, size 0x4, align 4
    int32 m_savedCollisionGroup; // offset 0x54C, size 0x4, align 4
    bool m_bInterruptable; // offset 0x550, size 0x1, align 1
    bool m_sequenceStarted; // offset 0x551, size 0x1, align 1
    bool m_bPositionRelativeToOtherEntity; // offset 0x552, size 0x1, align 1
    char _pad_0553[0x1]; // offset 0x553
    CHandle< CBaseEntity > m_hTargetEnt; // offset 0x554, size 0x4, align 4
    CHandle< CScriptedSequence > m_hNextCine; // offset 0x558, size 0x4, align 4
    bool m_bThinking; // offset 0x55C, size 0x1, align 1
    bool m_bInitiatedSelfDelete; // offset 0x55D, size 0x1, align 1
    bool m_bIsTeleportingDueToMoveTo; // offset 0x55E, size 0x1, align 1
    bool m_bAllowCustomInterruptConditions; // offset 0x55F, size 0x1, align 1
    CHandle< CBaseAnimGraph > m_hForcedTarget; // offset 0x560, size 0x4, align 4
    bool m_bDontCancelOtherSequences; // offset 0x564, size 0x1, align 1
    bool m_bForceSynch; // offset 0x565, size 0x1, align 1
    bool m_bPreventUpdateYawOnFinish; // offset 0x566, size 0x1, align 1
    bool m_bEnsureOnNavmeshOnFinish; // offset 0x567, size 0x1, align 1
    ScriptedOnDeath_t m_onDeathBehavior; // offset 0x568, size 0x4, align 4
    ScriptedConflictResponse_t m_ConflictResponse; // offset 0x56C, size 0x4, align 4
    CEntityIOOutput m_OnBeginSequence; // offset 0x570, size 0x18, align 255
    CEntityIOOutput m_OnActionStartOrLoop; // offset 0x588, size 0x18, align 255
    CEntityIOOutput m_OnEndSequence; // offset 0x5A0, size 0x18, align 255
    CEntityIOOutput m_OnPostIdleEndSequence; // offset 0x5B8, size 0x18, align 255
    CEntityIOOutput m_OnCancelSequence; // offset 0x5D0, size 0x18, align 255
    CEntityIOOutput m_OnCancelFailedSequence; // offset 0x5E8, size 0x18, align 255
    CEntityIOOutput[8] m_OnScriptEvent; // offset 0x600, size 0xC0, align 8
    CTransform m_matOtherToMain; // offset 0x6C0, size 0x20, align 16
    CHandle< CBaseEntity > m_hInteractionMainEntity; // offset 0x6E0, size 0x4, align 4
    int32 m_iPlayerDeathBehavior; // offset 0x6E4, size 0x4, align 4
    bool m_bSkipFadeIn; // offset 0x6E8, size 0x1, align 1
    char _pad_06E9[0x7]; // offset 0x6E9
};
