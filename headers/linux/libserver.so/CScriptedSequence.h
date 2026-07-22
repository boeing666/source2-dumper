#pragma once

class CScriptedSequence : public CBaseEntity /*0x0*/  // sizeof 0x9D0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CUtlSymbolLarge m_iszEntry; // offset 0x788, size 0x8, align 8
    CUtlSymbolLarge m_iszPreIdle; // offset 0x790, size 0x8, align 8
    CUtlSymbolLarge m_iszPlay; // offset 0x798, size 0x8, align 8
    CUtlSymbolLarge m_iszPostIdle; // offset 0x7A0, size 0x8, align 8
    CUtlSymbolLarge m_iszModifierToAddOnPlay; // offset 0x7A8, size 0x8, align 8
    CUtlSymbolLarge m_iszNextScript; // offset 0x7B0, size 0x8, align 8
    CUtlSymbolLarge m_iszEntity; // offset 0x7B8, size 0x8, align 8
    CUtlSymbolLarge m_iszSyncGroup; // offset 0x7C0, size 0x8, align 8
    ScriptedMoveTo_t m_nMoveTo; // offset 0x7C8, size 0x4, align 4
    SharedMovementGait_t m_nMoveToGait; // offset 0x7CC, size 0x1, align 1
    char _pad_07CD[0x3]; // offset 0x7CD
    ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior; // offset 0x7D0, size 0x4, align 4
    ForcedCrouchState_t m_nForcedCrouchState; // offset 0x7D4, size 0x4, align 4
    bool m_bIsPlayingPreIdle; // offset 0x7D8, size 0x1, align 1
    bool m_bIsPlayingEntry; // offset 0x7D9, size 0x1, align 1
    bool m_bIsPlayingAction; // offset 0x7DA, size 0x1, align 1
    bool m_bIsPlayingPostIdle; // offset 0x7DB, size 0x1, align 1
    bool m_bDontRotateOther; // offset 0x7DC, size 0x1, align 1
    bool m_bIsRepeatable; // offset 0x7DD, size 0x1, align 1
    bool m_bShouldLeaveCorpse; // offset 0x7DE, size 0x1, align 1
    bool m_bStartOnSpawn; // offset 0x7DF, size 0x1, align 1
    bool m_bDisallowInterrupts; // offset 0x7E0, size 0x1, align 1
    bool m_bCanOverrideNPCState; // offset 0x7E1, size 0x1, align 1
    bool m_bDontTeleportAtEnd; // offset 0x7E2, size 0x1, align 1
    bool m_bHighPriority; // offset 0x7E3, size 0x1, align 1
    bool m_bHideDebugComplaints; // offset 0x7E4, size 0x1, align 1
    bool m_bContinueOnDeath; // offset 0x7E5, size 0x1, align 1
    bool m_bLoopPreIdleSequence; // offset 0x7E6, size 0x1, align 1
    bool m_bLoopActionSequence; // offset 0x7E7, size 0x1, align 1
    bool m_bLoopPostIdleSequence; // offset 0x7E8, size 0x1, align 1
    bool m_bSynchPostIdles; // offset 0x7E9, size 0x1, align 1
    bool m_bIgnoreLookAt; // offset 0x7EA, size 0x1, align 1
    bool m_bIgnoreGravity; // offset 0x7EB, size 0x1, align 1
    bool m_bDisableNPCCollisions; // offset 0x7EC, size 0x1, align 1
    bool m_bKeepAnimgraphLockedPost; // offset 0x7ED, size 0x1, align 1
    bool m_bDontAddModifiers; // offset 0x7EE, size 0x1, align 1
    bool m_bDisableAimingWhileMoving; // offset 0x7EF, size 0x1, align 1
    bool m_bIgnoreRotation; // offset 0x7F0, size 0x1, align 1
    char _pad_07F1[0x3]; // offset 0x7F1
    float32 m_flRadius; // offset 0x7F4, size 0x4, align 4
    float32 m_flRepeat; // offset 0x7F8, size 0x4, align 4
    float32 m_flPlayAnimFadeInTime; // offset 0x7FC, size 0x4, align 4
    float32 m_flMoveInterpTime; // offset 0x800, size 0x4, align 4
    float32 m_flAngRate; // offset 0x804, size 0x4, align 4
    float32 m_flMoveSpeed; // offset 0x808, size 0x4, align 4
    bool m_bWaitUntilMoveCompletesToStartAnimation; // offset 0x80C, size 0x1, align 1
    char _pad_080D[0x3]; // offset 0x80D
    int32 m_nNotReadySequenceCount; // offset 0x810, size 0x4, align 4
    GameTime_t m_startTime; // offset 0x814, size 0x4, align 255
    bool m_bWaitForBeginSequence; // offset 0x818, size 0x1, align 1
    char _pad_0819[0x3]; // offset 0x819
    int32 m_saved_effects; // offset 0x81C, size 0x4, align 4
    int32 m_savedFlags; // offset 0x820, size 0x4, align 4
    int32 m_savedCollisionGroup; // offset 0x824, size 0x4, align 4
    bool m_bInterruptable; // offset 0x828, size 0x1, align 1
    bool m_sequenceStarted; // offset 0x829, size 0x1, align 1
    bool m_bPositionRelativeToOtherEntity; // offset 0x82A, size 0x1, align 1
    char _pad_082B[0x1]; // offset 0x82B
    CHandle< CBaseEntity > m_hTargetEnt; // offset 0x82C, size 0x4, align 4
    CHandle< CScriptedSequence > m_hNextCine; // offset 0x830, size 0x4, align 4
    bool m_bThinking; // offset 0x834, size 0x1, align 1
    bool m_bInitiatedSelfDelete; // offset 0x835, size 0x1, align 1
    bool m_bIsTeleportingDueToMoveTo; // offset 0x836, size 0x1, align 1
    bool m_bAllowCustomInterruptConditions; // offset 0x837, size 0x1, align 1
    CHandle< CBaseAnimGraph > m_hForcedTarget; // offset 0x838, size 0x4, align 4
    bool m_bDontCancelOtherSequences; // offset 0x83C, size 0x1, align 1
    bool m_bForceSynch; // offset 0x83D, size 0x1, align 1
    bool m_bPreventUpdateYawOnFinish; // offset 0x83E, size 0x1, align 1
    bool m_bEnsureOnNavmeshOnFinish; // offset 0x83F, size 0x1, align 1
    ScriptedOnDeath_t m_onDeathBehavior; // offset 0x840, size 0x4, align 4
    ScriptedConflictResponse_t m_ConflictResponse; // offset 0x844, size 0x4, align 4
    CEntityIOOutput m_OnBeginSequence; // offset 0x848, size 0x18, align 255
    CEntityIOOutput m_OnActionStartOrLoop; // offset 0x860, size 0x18, align 255
    CEntityIOOutput m_OnEndSequence; // offset 0x878, size 0x18, align 255
    CEntityIOOutput m_OnPostIdleEndSequence; // offset 0x890, size 0x18, align 255
    CEntityIOOutput m_OnCancelSequence; // offset 0x8A8, size 0x18, align 255
    CEntityIOOutput m_OnCancelFailedSequence; // offset 0x8C0, size 0x18, align 255
    CEntityIOOutput[8] m_OnScriptEvent; // offset 0x8D8, size 0xC0, align 8
    char _pad_0998[0x8]; // offset 0x998
    CTransform m_matOtherToMain; // offset 0x9A0, size 0x20, align 16
    CHandle< CBaseEntity > m_hInteractionMainEntity; // offset 0x9C0, size 0x4, align 4
    int32 m_iPlayerDeathBehavior; // offset 0x9C4, size 0x4, align 4
    bool m_bSkipFadeIn; // offset 0x9C8, size 0x1, align 1
    char _pad_09C9[0x7]; // offset 0x9C9
};
