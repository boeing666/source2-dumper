#pragma once

class CAI_BaseNPC : public CBaseCombatCharacter /*0x0*/  // sizeof 0x1150, align 0x10 [vtable] (server) {MNetworkIncludeByName MNetworkIncludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    CNPCPhysicsHull m_currentNPCBasePhysicsHull; // offset 0xBB0, size 0x40, align 8
    bool m_bCheckContacts; // offset 0xBF0, size 0x1, align 1
    bool m_bForceDynamicHull; // offset 0xBF1, size 0x1, align 1
    char _pad_0BF2[0x26]; // offset 0xBF2
    CRelativeLocation m_lastNavLocation; // offset 0xC18, size 0x40, align 255
    float32 m_flLastPositionTolerance; // offset 0xC58, size 0x4, align 4
    CHandle< CAI_BaseNPC > m_hSynchronizedPrimaryNPC; // offset 0xC5C, size 0x4, align 4
    CUtlVector< CHandle< CAI_BaseNPC > > m_vecSynchronizedSecondaryNPCs; // offset 0xC60, size 0x18, align 8
    NPC_STATE m_NPCState; // offset 0xC78, size 0x4, align 4 | MNetworkEnable
    NPC_STATE m_nPreModifierNPCState; // offset 0xC7C, size 0x4, align 4
    NPC_STATE m_IdealNPCState; // offset 0xC80, size 0x4, align 4
    GameTime_t m_flLastStateChangeTime; // offset 0xC84, size 0x4, align 255
    CAI_Senses* m_pSenses; // offset 0xC88, size 0x8, align 8
    CAI_ScheduleBits m_Conditions; // offset 0xC90, size 0x24, align 255
    CAI_ScheduleBits m_ExistingConditionsAsync; // offset 0xCB4, size 0x24, align 255
    CAI_ScheduleBits m_NonGatherConditions; // offset 0xCD8, size 0x24, align 255
    CAI_ScheduleBits m_CustomInterruptConditions; // offset 0xCFC, size 0x24, align 255
    bool m_bForceConditionsGather; // offset 0xD20, size 0x1, align 1
    bool m_bConditionsGathered; // offset 0xD21, size 0x1, align 1
    bool m_bConditionsGatheredAsync; // offset 0xD22, size 0x1, align 1
    char _pad_0D23[0x1]; // offset 0xD23
    GameTick_t m_nTickGatheredConditions; // offset 0xD24, size 0x4, align 255
    char _pad_0D28[0x4]; // offset 0xD28
    GameTime_t m_flLastTimeIgnited; // offset 0xD2C, size 0x4, align 255
    GameTime_t m_flTimeIgnitionStarted; // offset 0xD30, size 0x4, align 255
    bool m_bDoPostRestoreRefindPath; // offset 0xD34, size 0x1, align 1 | MNotSaved
    char _pad_0D35[0x3]; // offset 0xD35
    CAI_BehaviorHost* m_pBehaviorHost; // offset 0xD38, size 0x8, align 8
    CGlobalSymbol m_sDeathAnim; // offset 0xD40, size 0x8, align 8
    CAI_EnemyServices* m_pEnemyServices; // offset 0xD48, size 0x8, align 8
    CRandStopwatch m_GiveUpOnDeadEnemyTimer; // offset 0xD50, size 0x14, align 255
    CSimpleSimTimer m_FailChooseEnemyTimer; // offset 0xD64, size 0x8, align 255
    GameTime_t m_flAcceptableTimeSeenEnemy; // offset 0xD6C, size 0x4, align 255
    bool m_bSkippedChooseEnemy; // offset 0xD70, size 0x1, align 1
    bool m_bIgnoreUnseenEnemies; // offset 0xD71, size 0x1, align 1
    char _pad_0D72[0x2]; // offset 0xD72
    CHandle< CBaseFilter > m_hEnemyFilter; // offset 0xD74, size 0x4, align 4
    CUtlSymbolLarge m_iszEnemyFilterName; // offset 0xD78, size 0x8, align 8
    CHandle< CBaseEntity > m_hTargetEnt; // offset 0xD80, size 0x4, align 4
    bool m_bClearTargetOnScheduleEnd; // offset 0xD84, size 0x1, align 1
    char _pad_0D85[0x3]; // offset 0xD85
    GameTime_t m_flSoundWaitTime; // offset 0xD88, size 0x4, align 255
    int32 m_nSoundPriority; // offset 0xD8C, size 0x4, align 4
    bool m_bSuppressFootsteps; // offset 0xD90, size 0x1, align 1
    char _pad_0D91[0x3]; // offset 0xD91
    int32 m_afCapability; // offset 0xD94, size 0x4, align 4
    float32 m_flGroundSpeed; // offset 0xD98, size 0x4, align 4
    GameTime_t m_lastTimeBashedObstacle; // offset 0xD9C, size 0x4, align 255
    GameTime_t m_nextMantleTime; // offset 0xDA0, size 0x4, align 255
    GameTime_t m_flMoveWaitFinished; // offset 0xDA4, size 0x4, align 255
    CHandle< CBaseEntity > m_hOpeningDoor; // offset 0xDA8, size 0x4, align 4
    char _pad_0DAC[0x4]; // offset 0xDAC
    CUnreachableTargetList m_UnreachableTargets; // offset 0xDB0, size 0x20, align 255
    CHandle< CBaseEntity > m_hPathObstructor; // offset 0xDD0, size 0x4, align 4
    float32 m_flJumpMaxRise; // offset 0xDD4, size 0x4, align 4 | MNotSaved
    float32 m_flJumpMaxDrop; // offset 0xDD8, size 0x4, align 4 | MNotSaved
    float32 m_flJumpMaxDist; // offset 0xDDC, size 0x4, align 4 | MNotSaved
    float32 m_flJumpMinDist; // offset 0xDE0, size 0x4, align 4 | MNotSaved
    char _pad_0DE4[0x4]; // offset 0xDE4
    CAI_FacingServices* m_pFacingServices; // offset 0xDE8, size 0x8, align 8
    CAI_AnimGraphServices* m_pAnimGraphServices; // offset 0xDF0, size 0x8, align 8
    bool m_bAnimGraphIsAnimatingDeath; // offset 0xDF8, size 0x1, align 1
    char _pad_0DF9[0x1]; // offset 0xDF9
    bool m_bDeferredNavigation; // offset 0xDFA, size 0x1, align 1 | MNotSaved
    char _pad_0DFB[0x5]; // offset 0xDFB
    CAI_Scheduler m_Scheduler; // offset 0xE00, size 0xB0, align 255
    CAI_Navigator* m_pNavigator; // offset 0xEB0, size 0x8, align 8
    CAI_Pathfinder* m_pPathfinder; // offset 0xEB8, size 0x8, align 8
    CAI_Pathfinder* m_pPathfinderNet; // offset 0xEC0, size 0x8, align 8
    char _pad_0EC8[0x10]; // offset 0xEC8
    CAI_Motor* m_pMotor; // offset 0xED8, size 0x8, align 8 | MNetworkEnable
    GameTime_t m_flTimeLastMovement; // offset 0xEE0, size 0x4, align 255
    GameTime_t m_flTimeLastFootstep; // offset 0xEE4, size 0x4, align 255
    AI_VolumetricEventHandle_t m_hFootstepEvent; // offset 0xEE8, size 0x8, align 255
    CSimpleSimTimer m_CheckOnGroundTimer; // offset 0xEF0, size 0x8, align 255
    CUtlSymbolLarge m_strNavRestrictionVolume; // offset 0xEF8, size 0x8, align 8
    int32 m_afMemory; // offset 0xF00, size 0x4, align 4
    GameTime_t m_flLastAttackTime; // offset 0xF04, size 0x4, align 255
    GameTime_t m_flLastTookDamageTime; // offset 0xF08, size 0x4, align 255
    GameTime_t m_flLastTookDamageFromPlayerTime; // offset 0xF0C, size 0x4, align 255
    Vector m_vecLastTookDamageAttackVector; // offset 0xF10, size 0xC, align 4
    char _pad_0F1C[0x4]; // offset 0xF1C
    CUtlSymbolLarge m_iszSquadName; // offset 0xF20, size 0x8, align 8
    CUtlVector< SquadSlotNPCEntry_t > m_vecMySquadSlots; // offset 0xF28, size 0x18, align 8
    char _pad_0F40[0x8]; // offset 0xF40
    int32 m_nPrevHealthDuringModifyDamage; // offset 0xF48, size 0x4, align 4
    char _pad_0F4C[0x4]; // offset 0xF4C
    bool m_bFadeCorpse; // offset 0xF50, size 0x1, align 1 | MNetworkEnable
    bool m_bImportantRagdoll; // offset 0xF51, size 0x1, align 1 | MNetworkEnable
    bool m_bDidDeathCleanup; // offset 0xF52, size 0x1, align 1
    bool m_bReceivedEnemyDeadNotification; // offset 0xF53, size 0x1, align 1
    char _pad_0F54[0x8]; // offset 0xF54
    GameTime_t m_flWaitFinished; // offset 0xF5C, size 0x4, align 255
    bool m_fNoDamageDecal; // offset 0xF60, size 0x1, align 1
    char _pad_0F61[0x7]; // offset 0xF61
    CUtlVector< CHandle< CBaseEntity > >* m_pVecAttachments; // offset 0xF68, size 0x8, align 8 | MNotSaved
    CEntityIOOutput m_OnDamaged; // offset 0xF70, size 0x18, align 255
    CEntityIOOutput m_OnStartDeath; // offset 0xF88, size 0x18, align 255
    CEntityIOOutput m_OnDeath; // offset 0xFA0, size 0x18, align 255
    CEntityIOOutput m_OnQuarterHealth; // offset 0xFB8, size 0x18, align 255
    CEntityIOOutput m_OnHalfHealth; // offset 0xFD0, size 0x18, align 255
    CEntityIOOutput m_OnThreeQuarterHealth; // offset 0xFE8, size 0x18, align 255
    CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnFoundEnemy; // offset 0x1000, size 0x20, align 8
    CEntityIOOutput m_OnLostEnemy; // offset 0x1020, size 0x18, align 255
    CEntityIOOutput m_OnLostPlayer; // offset 0x1038, size 0x18, align 255
    CEntityIOOutput m_OnDamagedByPlayer; // offset 0x1050, size 0x18, align 255
    CEntityIOOutput m_OnDamagedByPlayerSquad; // offset 0x1068, size 0x18, align 255
    CEntityIOOutput m_OnPlayerUse; // offset 0x1080, size 0x18, align 255
    CEntityIOOutput m_OnUse; // offset 0x1098, size 0x18, align 255
    CEntityIOOutput m_OnStartTouchMaterial; // offset 0x10B0, size 0x18, align 255
    CEntityIOOutput m_OnEndTouchMaterial; // offset 0x10C8, size 0x18, align 255
    CEntityIOOutput m_OnLostEnemyLOS; // offset 0x10E0, size 0x18, align 255
    CEntityIOOutput m_OnLostPlayerLOS; // offset 0x10F8, size 0x18, align 255
    uint64 m_nAITraceMask; // offset 0x1110, size 0x8, align 8
    bool m_bDynamicAILOD; // offset 0x1118, size 0x1, align 1
    char _pad_1119[0x3]; // offset 0x1119
    AILOD_t m_aiLOD; // offset 0x111C, size 0x4, align 4
    float32 m_flThinkTime; // offset 0x1120, size 0x4, align 4
    char _pad_1124[0x1C]; // offset 0x1124
    int32 m_nDebugCurIndex; // offset 0x1140, size 0x4, align 4 | MNotSaved
    char _pad_1144[0xC]; // offset 0x1144
};
