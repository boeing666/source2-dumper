#pragma once

class CAI_BaseNPC : public CBaseCombatCharacter /*0x0*/  // sizeof 0x10E0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB68]; // offset 0x0
    CNPCPhysicsHull m_currentNPCBasePhysicsHull; // offset 0xB68, size 0x40, align 8
    bool m_bCheckContacts; // offset 0xBA8, size 0x1, align 1
    bool m_bForceDynamicHull; // offset 0xBA9, size 0x1, align 1
    char _pad_0BAA[0x26]; // offset 0xBAA
    CHandle< CAI_BaseNPC > m_hSynchronizedPrimaryNPC; // offset 0xBD0, size 0x4, align 4
    char _pad_0BD4[0x4]; // offset 0xBD4
    CUtlVector< CHandle< CAI_BaseNPC > > m_vecSynchronizedSecondaryNPCs; // offset 0xBD8, size 0x18, align 8
    NPC_STATE m_NPCState; // offset 0xBF0, size 0x4, align 4
    NPC_STATE m_nPreModifierNPCState; // offset 0xBF4, size 0x4, align 4
    NPC_STATE m_IdealNPCState; // offset 0xBF8, size 0x4, align 4
    GameTime_t m_flLastStateChangeTime; // offset 0xBFC, size 0x4, align 255
    CAI_Senses* m_pSenses; // offset 0xC00, size 0x8, align 8
    CAI_ScheduleBits m_Conditions; // offset 0xC08, size 0x24, align 255
    CAI_ScheduleBits m_PreviousConditionsAsync; // offset 0xC2C, size 0x24, align 255
    CAI_ScheduleBits m_NonGatherConditions; // offset 0xC50, size 0x24, align 255
    CAI_ScheduleBits m_CustomInterruptConditions; // offset 0xC74, size 0x24, align 255
    CAI_ScheduleBits m_ScheduleRelatedConditions; // offset 0xC98, size 0x24, align 255
    CAI_ScheduleBits m_ScheduleRelatedRemovalConditions; // offset 0xCBC, size 0x24, align 255
    bool m_bForceConditionsGather; // offset 0xCE0, size 0x1, align 1
    bool m_bConditionsGathered; // offset 0xCE1, size 0x1, align 1
    bool m_bConditionsGatheredAsync; // offset 0xCE2, size 0x1, align 1
    bool m_bGatheringConditions; // offset 0xCE3, size 0x1, align 1
    bool m_bGatheringScheduleRelatedConditions; // offset 0xCE4, size 0x1, align 1
    char _pad_0CE5[0xB]; // offset 0xCE5
    CAI_EnemyServices* m_pEnemyServices; // offset 0xCF0, size 0x8, align 8
    bool m_bSkippedChooseEnemy; // offset 0xCF8, size 0x1, align 1
    char _pad_0CF9[0x3]; // offset 0xCF9
    int32 m_afCapability; // offset 0xCFC, size 0x4, align 4
    char _pad_0D00[0x8]; // offset 0xD00
    CRelativeLocation m_lastNavLocation; // offset 0xD08, size 0x48, align 8
    float32 m_flLastPositionTolerance; // offset 0xD50, size 0x4, align 4
    char _pad_0D54[0x4]; // offset 0xD54
    CGlobalSymbol m_sTaskWaitingForMovementId; // offset 0xD58, size 0x8, align 8
    MovementFailureBehavior_t m_nMovementFailureBehavior; // offset 0xD60, size 0x1, align 1
    char _pad_0D61[0x7]; // offset 0xD61
    MovementId_t m_nCurrentPathMovementId; // offset 0xD68, size 0x8, align 8
    uint32 m_nCurrentPathSerialNumber; // offset 0xD70, size 0x4, align 4
    char _pad_0D74[0x4]; // offset 0xD74
    MovementId_t m_nLastPathMovementId; // offset 0xD78, size 0x8, align 8
    uint32 m_nLastPathSerialNumber; // offset 0xD80, size 0x4, align 4
    SharedMovementGait_t m_nForcedGoGait; // offset 0xD84, size 0x1, align 1
    char _pad_0D85[0x3]; // offset 0xD85
    GameTime_t m_lastTimeBashedObstacle; // offset 0xD88, size 0x4, align 255
    GameTime_t m_nextMantleTime; // offset 0xD8C, size 0x4, align 255
    CHandle< CBaseEntity > m_hPathObstructor; // offset 0xD90, size 0x4, align 4
    float32 m_flJumpMaxRise; // offset 0xD94, size 0x4, align 4 | MNotSaved
    float32 m_flJumpMaxDrop; // offset 0xD98, size 0x4, align 4 | MNotSaved
    float32 m_flJumpMaxDist; // offset 0xD9C, size 0x4, align 4 | MNotSaved
    float32 m_flJumpMinDist; // offset 0xDA0, size 0x4, align 4 | MNotSaved
    char _pad_0DA4[0x4]; // offset 0xDA4
    CAI_FacingServices* m_pFacingServices; // offset 0xDA8, size 0x8, align 8
    CAI_AnimGraphServices* m_pAnimGraphServices; // offset 0xDB0, size 0x8, align 8
    CAI_Scheduler m_Scheduler; // offset 0xDB8, size 0xC8, align 255
    CAI_Navigator* m_pNavigator; // offset 0xE80, size 0x8, align 8
    CAI_Pathfinder* m_pPathfinder; // offset 0xE88, size 0x8, align 8
    CAI_Pathfinder* m_pPathfinderNet; // offset 0xE90, size 0x8, align 8
    char _pad_0E98[0x10]; // offset 0xE98
    CAI_MotorServices* m_pMotorServices; // offset 0xEA8, size 0x8, align 8
    GameTime_t m_flTimeLastMovement; // offset 0xEB0, size 0x4, align 255
    char _pad_0EB4[0x4]; // offset 0xEB4
    CUtlSymbolLarge m_strNavRestrictionVolume; // offset 0xEB8, size 0x8, align 8
    int32 m_afMemory; // offset 0xEC0, size 0x4, align 4
    char _pad_0EC4[0x4]; // offset 0xEC4
    CUnreachableTargetList m_UnreachableTargets; // offset 0xEC8, size 0x20, align 8
    char _pad_0EE8[0x28]; // offset 0xEE8
    GameTime_t m_flLastTookDamageTime; // offset 0xF10, size 0x4, align 255
    GameTime_t m_flLastTookDamageFromPlayerTime; // offset 0xF14, size 0x4, align 255
    bool m_bDidDeathCleanup; // offset 0xF18, size 0x1, align 1
    bool m_bReceivedEnemyDeadNotification; // offset 0xF19, size 0x1, align 1
    char _pad_0F1A[0x2]; // offset 0xF1A
    int32 m_nPrevHealthDuringModifyDamage; // offset 0xF1C, size 0x4, align 4
    char _pad_0F20[0x4]; // offset 0xF20
    GameTime_t m_flWaitFinished; // offset 0xF24, size 0x4, align 255
    bool m_fNoDamageDecal; // offset 0xF28, size 0x1, align 1
    char _pad_0F29[0x7]; // offset 0xF29
    CUtlVector< CHandle< CBaseEntity > > m_vecAttachments; // offset 0xF30, size 0x18, align 8
    CEntityIOOutput m_OnDamaged; // offset 0xF48, size 0x18, align 255
    CEntityIOOutput m_OnStartDeath; // offset 0xF60, size 0x18, align 255
    CEntityIOOutput m_OnDeath; // offset 0xF78, size 0x18, align 255
    CEntityIOOutput m_OnQuarterHealth; // offset 0xF90, size 0x18, align 255
    CEntityIOOutput m_OnHalfHealth; // offset 0xFA8, size 0x18, align 255
    CEntityIOOutput m_OnThreeQuarterHealth; // offset 0xFC0, size 0x18, align 255
    CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnFoundEnemy; // offset 0xFD8, size 0x20, align 8
    CEntityIOOutput m_OnLostEnemy; // offset 0xFF8, size 0x18, align 255
    CEntityIOOutput m_OnLostPlayer; // offset 0x1010, size 0x18, align 255
    CEntityIOOutput m_OnDamagedByPlayer; // offset 0x1028, size 0x18, align 255
    CEntityIOOutput m_OnPlayerUse; // offset 0x1040, size 0x18, align 255
    CEntityIOOutput m_OnUse; // offset 0x1058, size 0x18, align 255
    CEntityIOOutput m_OnLostEnemyLOS; // offset 0x1070, size 0x18, align 255
    CEntityIOOutput m_OnLostPlayerLOS; // offset 0x1088, size 0x18, align 255
    uint64 m_nAITraceMask; // offset 0x10A0, size 0x8, align 8
    bool m_bDynamicAILOD; // offset 0x10A8, size 0x1, align 1
    char _pad_10A9[0x3]; // offset 0x10A9
    AILOD_t m_aiLOD; // offset 0x10AC, size 0x4, align 4
    float32 m_flThinkTime; // offset 0x10B0, size 0x4, align 4
    char _pad_10B4[0x1C]; // offset 0x10B4
    int32 m_nDebugCurIndex; // offset 0x10D0, size 0x4, align 4 | MNotSaved
    char _pad_10D4[0xC]; // offset 0x10D4
};
