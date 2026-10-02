#pragma once

class CAI_BaseNPC : public CBaseCombatCharacter /*0x0*/  // sizeof 0x1130, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xBB8]; // offset 0x0
    CNPCPhysicsHull m_currentNPCBasePhysicsHull; // offset 0xBB8, size 0x40, align 8
    bool m_bCheckContacts; // offset 0xBF8, size 0x1, align 1
    bool m_bForceDynamicHull; // offset 0xBF9, size 0x1, align 1
    char _pad_0BFA[0x26]; // offset 0xBFA
    CHandle< CAI_BaseNPC > m_hSynchronizedPrimaryNPC; // offset 0xC20, size 0x4, align 4
    char _pad_0C24[0x4]; // offset 0xC24
    CUtlVector< CHandle< CAI_BaseNPC > > m_vecSynchronizedSecondaryNPCs; // offset 0xC28, size 0x18, align 8
    NPC_STATE m_NPCState; // offset 0xC40, size 0x4, align 4
    NPC_STATE m_nPreModifierNPCState; // offset 0xC44, size 0x4, align 4
    NPC_STATE m_IdealNPCState; // offset 0xC48, size 0x4, align 4
    GameTime_t m_flLastStateChangeTime; // offset 0xC4C, size 0x4, align 255
    CAI_Senses* m_pSenses; // offset 0xC50, size 0x8, align 8
    CAI_ScheduleBits m_Conditions; // offset 0xC58, size 0x24, align 255
    CAI_ScheduleBits m_PreviousConditionsAsync; // offset 0xC7C, size 0x24, align 255
    CAI_ScheduleBits m_NonGatherConditions; // offset 0xCA0, size 0x24, align 255
    CAI_ScheduleBits m_CustomInterruptConditions; // offset 0xCC4, size 0x24, align 255
    CAI_ScheduleBits m_ScheduleRelatedConditions; // offset 0xCE8, size 0x24, align 255
    CAI_ScheduleBits m_ScheduleRelatedRemovalConditions; // offset 0xD0C, size 0x24, align 255
    bool m_bForceConditionsGather; // offset 0xD30, size 0x1, align 1
    bool m_bConditionsGathered; // offset 0xD31, size 0x1, align 1
    bool m_bConditionsGatheredAsync; // offset 0xD32, size 0x1, align 1
    bool m_bGatheringConditions; // offset 0xD33, size 0x1, align 1
    bool m_bGatheringScheduleRelatedConditions; // offset 0xD34, size 0x1, align 1
    char _pad_0D35[0xB]; // offset 0xD35
    CAI_EnemyServices* m_pEnemyServices; // offset 0xD40, size 0x8, align 8
    bool m_bSkippedChooseEnemy; // offset 0xD48, size 0x1, align 1
    char _pad_0D49[0x3]; // offset 0xD49
    int32 m_afCapability; // offset 0xD4C, size 0x4, align 4
    char _pad_0D50[0x8]; // offset 0xD50
    CRelativeLocation m_lastNavLocation; // offset 0xD58, size 0x48, align 8
    float32 m_flLastPositionTolerance; // offset 0xDA0, size 0x4, align 4
    char _pad_0DA4[0x4]; // offset 0xDA4
    CGlobalSymbol m_sTaskWaitingForMovementId; // offset 0xDA8, size 0x8, align 8
    MovementFailureBehavior_t m_nMovementFailureBehavior; // offset 0xDB0, size 0x1, align 1
    char _pad_0DB1[0x7]; // offset 0xDB1
    MovementId_t m_nCurrentPathMovementId; // offset 0xDB8, size 0x8, align 8
    uint32 m_nCurrentPathSerialNumber; // offset 0xDC0, size 0x4, align 4
    char _pad_0DC4[0x4]; // offset 0xDC4
    MovementId_t m_nLastPathMovementId; // offset 0xDC8, size 0x8, align 8
    uint32 m_nLastPathSerialNumber; // offset 0xDD0, size 0x4, align 4
    SharedMovementGait_t m_nForcedGoGait; // offset 0xDD4, size 0x1, align 1
    char _pad_0DD5[0x3]; // offset 0xDD5
    GameTime_t m_lastTimeBashedObstacle; // offset 0xDD8, size 0x4, align 255
    GameTime_t m_nextMantleTime; // offset 0xDDC, size 0x4, align 255
    CHandle< CBaseEntity > m_hPathObstructor; // offset 0xDE0, size 0x4, align 4
    float32 m_flJumpMaxRise; // offset 0xDE4, size 0x4, align 4 | MNotSaved
    float32 m_flJumpMaxDrop; // offset 0xDE8, size 0x4, align 4 | MNotSaved
    float32 m_flJumpMaxDist; // offset 0xDEC, size 0x4, align 4 | MNotSaved
    float32 m_flJumpMinDist; // offset 0xDF0, size 0x4, align 4 | MNotSaved
    char _pad_0DF4[0x4]; // offset 0xDF4
    CAI_FacingServices* m_pFacingServices; // offset 0xDF8, size 0x8, align 8
    CAI_AnimGraphServices* m_pAnimGraphServices; // offset 0xE00, size 0x8, align 8
    CAI_Scheduler m_Scheduler; // offset 0xE08, size 0xC8, align 255
    CAI_Navigator* m_pNavigator; // offset 0xED0, size 0x8, align 8
    CAI_Pathfinder* m_pPathfinder; // offset 0xED8, size 0x8, align 8
    CAI_Pathfinder* m_pPathfinderNet; // offset 0xEE0, size 0x8, align 8
    char _pad_0EE8[0x10]; // offset 0xEE8
    CAI_MotorServices* m_pMotorServices; // offset 0xEF8, size 0x8, align 8
    GameTime_t m_flTimeLastMovement; // offset 0xF00, size 0x4, align 255
    char _pad_0F04[0x4]; // offset 0xF04
    CUtlSymbolLarge m_strNavRestrictionVolume; // offset 0xF08, size 0x8, align 8
    int32 m_afMemory; // offset 0xF10, size 0x4, align 4
    char _pad_0F14[0x4]; // offset 0xF14
    CUnreachableTargetList m_UnreachableTargets; // offset 0xF18, size 0x20, align 8
    char _pad_0F38[0x28]; // offset 0xF38
    GameTime_t m_flLastTookDamageTime; // offset 0xF60, size 0x4, align 255
    GameTime_t m_flLastTookDamageFromPlayerTime; // offset 0xF64, size 0x4, align 255
    bool m_bDidDeathCleanup; // offset 0xF68, size 0x1, align 1
    bool m_bReceivedEnemyDeadNotification; // offset 0xF69, size 0x1, align 1
    char _pad_0F6A[0x2]; // offset 0xF6A
    int32 m_nPrevHealthDuringModifyDamage; // offset 0xF6C, size 0x4, align 4
    char _pad_0F70[0x4]; // offset 0xF70
    GameTime_t m_flWaitFinished; // offset 0xF74, size 0x4, align 255
    bool m_fNoDamageDecal; // offset 0xF78, size 0x1, align 1
    char _pad_0F79[0x7]; // offset 0xF79
    CUtlVector< CHandle< CBaseEntity > > m_vecAttachments; // offset 0xF80, size 0x18, align 8
    CEntityIOOutput m_OnDamaged; // offset 0xF98, size 0x18, align 255
    CEntityIOOutput m_OnStartDeath; // offset 0xFB0, size 0x18, align 255
    CEntityIOOutput m_OnDeath; // offset 0xFC8, size 0x18, align 255
    CEntityIOOutput m_OnQuarterHealth; // offset 0xFE0, size 0x18, align 255
    CEntityIOOutput m_OnHalfHealth; // offset 0xFF8, size 0x18, align 255
    CEntityIOOutput m_OnThreeQuarterHealth; // offset 0x1010, size 0x18, align 255
    CEntityOutputTemplate< CHandle< CBaseEntity > > m_OnFoundEnemy; // offset 0x1028, size 0x20, align 8
    CEntityIOOutput m_OnLostEnemy; // offset 0x1048, size 0x18, align 255
    CEntityIOOutput m_OnLostPlayer; // offset 0x1060, size 0x18, align 255
    CEntityIOOutput m_OnDamagedByPlayer; // offset 0x1078, size 0x18, align 255
    CEntityIOOutput m_OnPlayerUse; // offset 0x1090, size 0x18, align 255
    CEntityIOOutput m_OnUse; // offset 0x10A8, size 0x18, align 255
    CEntityIOOutput m_OnLostEnemyLOS; // offset 0x10C0, size 0x18, align 255
    CEntityIOOutput m_OnLostPlayerLOS; // offset 0x10D8, size 0x18, align 255
    uint64 m_nAITraceMask; // offset 0x10F0, size 0x8, align 8
    bool m_bDynamicAILOD; // offset 0x10F8, size 0x1, align 1
    char _pad_10F9[0x3]; // offset 0x10F9
    AILOD_t m_aiLOD; // offset 0x10FC, size 0x4, align 4
    float32 m_flThinkTime; // offset 0x1100, size 0x4, align 4
    char _pad_1104[0x1C]; // offset 0x1104
    int32 m_nDebugCurIndex; // offset 0x1120, size 0x4, align 4 | MNotSaved
    char _pad_1124[0xC]; // offset 0x1124
};
