#pragma once

class CAI_ScriptConditions : public CBaseEntity /*0x0*/  // sizeof 0x588, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CEntityIOOutput m_OnConditionsSatisfied; // offset 0x4A8, size 0x18, align 255
    CEntityIOOutput m_OnConditionsTimeout; // offset 0x4C0, size 0x18, align 255
    CEntityIOOutput m_NoValidActors; // offset 0x4D8, size 0x18, align 255
    bool m_fDisabled; // offset 0x4F0, size 0x1, align 1
    bool m_bLeaveAsleep; // offset 0x4F1, size 0x1, align 1
    char _pad_04F2[0x2]; // offset 0x4F2
    CHandle< CBaseEntity > m_hTarget; // offset 0x4F4, size 0x4, align 4
    float32 m_flRequiredDuration; // offset 0x4F8, size 0x4, align 4
    NPC_STATE m_fMinState; // offset 0x4FC, size 0x4, align 4
    NPC_STATE m_fMaxState; // offset 0x500, size 0x4, align 4
    ThreeState_t m_fScriptStatus; // offset 0x504, size 0x4, align 4
    ThreeState_t m_fActorSeePlayer; // offset 0x508, size 0x4, align 4
    char _pad_050C[0x4]; // offset 0x50C
    CUtlSymbolLarge m_Actor; // offset 0x510, size 0x8, align 8
    float32 m_flPlayerActorProximity; // offset 0x518, size 0x4, align 4
    CAI_ProxTester m_PlayerActorProxTester; // offset 0x51C, size 0x8, align 255
    float32 m_flPlayerActorFOV; // offset 0x524, size 0x4, align 4
    bool m_bPlayerActorFOVTrueCone; // offset 0x528, size 0x1, align 1
    char _pad_0529[0x3]; // offset 0x529
    ThreeState_t m_fPlayerActorLOS; // offset 0x52C, size 0x4, align 4
    ThreeState_t m_fActorSeeTarget; // offset 0x530, size 0x4, align 4
    float32 m_flActorTargetProximity; // offset 0x534, size 0x4, align 4
    CAI_ProxTester m_ActorTargetProxTester; // offset 0x538, size 0x8, align 255
    float32 m_flPlayerTargetProximity; // offset 0x540, size 0x4, align 4
    CAI_ProxTester m_PlayerTargetProxTester; // offset 0x544, size 0x8, align 255
    float32 m_flPlayerTargetFOV; // offset 0x54C, size 0x4, align 4
    bool m_bPlayerTargetFOVTrueCone; // offset 0x550, size 0x1, align 1
    char _pad_0551[0x3]; // offset 0x551
    ThreeState_t m_fPlayerTargetLOS; // offset 0x554, size 0x4, align 4
    ThreeState_t m_fPlayerBlockingActor; // offset 0x558, size 0x4, align 4
    ThreeState_t m_fActorInPVS; // offset 0x55C, size 0x4, align 4
    float32 m_flMinTimeout; // offset 0x560, size 0x4, align 4
    float32 m_flMaxTimeout; // offset 0x564, size 0x4, align 4
    ThreeState_t m_fActorInVehicle; // offset 0x568, size 0x4, align 4
    ThreeState_t m_fPlayerInVehicle; // offset 0x56C, size 0x4, align 4
    CUtlVector< CAI_ScriptConditionsElement > m_ElementList; // offset 0x570, size 0x18, align 8
};
