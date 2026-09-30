#pragma once

class C_BaseEntity : public CEntityInstance /*0x0*/  // sizeof 0x5F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CBodyComponent* m_CBodyComponent; // offset 0x30, size 0x8, align 8
    CNetworkTransmitComponent m_NetworkTransmitComponent; // offset 0x38, size 0x1D0, align 8 | MNotSaved
    char _pad_0208[0x120]; // offset 0x208
    GameTick_t m_nLastThinkTick; // offset 0x328, size 0x4, align 255 | MNotSaved
    char _pad_032C[0x4]; // offset 0x32C
    CGameSceneNode* m_pGameSceneNode; // offset 0x330, size 0x8, align 8 | MNotSaved
    CRenderComponent* m_pRenderComponent; // offset 0x338, size 0x8, align 8 | MNotSaved
    CCollisionProperty* m_pCollision; // offset 0x340, size 0x8, align 8 | MNotSaved
    CModifierProperty* m_pModifierProp; // offset 0x348, size 0x8, align 8
    int32 m_iMaxHealth; // offset 0x350, size 0x4, align 4 | MNotSaved
    int32 m_iHealth; // offset 0x354, size 0x4, align 4
    float32 m_flDamageAccumulator; // offset 0x358, size 0x4, align 4 | MNotSaved
    uint8 m_lifeState; // offset 0x35C, size 0x1, align 1 | MNotSaved
    bool m_bTakesDamage; // offset 0x35D, size 0x1, align 1 | MNotSaved
    char _pad_035E[0x2]; // offset 0x35E
    TakeDamageFlags_t m_nTakeDamageFlags; // offset 0x360, size 0x8, align 8 | MNotSaved
    EntityPlatformTypes_t m_nPlatformType; // offset 0x368, size 0x1, align 1
    uint8 m_ubInterpolationFrame; // offset 0x369, size 0x1, align 1 | MNotSaved
    char _pad_036A[0x2]; // offset 0x36A
    CHandle< C_BaseEntity > m_hSceneObjectController; // offset 0x36C, size 0x4, align 4
    int32 m_nNoInterpolationTick; // offset 0x370, size 0x4, align 4 | MNotSaved
    int32 m_nVisibilityNoInterpolationTick; // offset 0x374, size 0x4, align 4 | MNotSaved
    float32 m_flProxyRandomValue; // offset 0x378, size 0x4, align 4 | MNotSaved
    int32 m_iEFlags; // offset 0x37C, size 0x4, align 4 | MNotSaved
    uint8 m_nWaterType; // offset 0x380, size 0x1, align 1 | MNotSaved
    bool m_bInterpolateEvenWithNoModel; // offset 0x381, size 0x1, align 1 | MNotSaved
    bool m_bPredictionEligible; // offset 0x382, size 0x1, align 1 | MNotSaved
    bool m_bApplyLayerMatchIDToModel; // offset 0x383, size 0x1, align 1 | MNotSaved
    CUtlStringToken m_tokLayerMatchID; // offset 0x384, size 0x4, align 4 | MNotSaved
    CUtlStringToken m_nSubclassID; // offset 0x388, size 0x4, align 4
    char _pad_038C[0xC]; // offset 0x38C
    int32 m_nSimulationTick; // offset 0x398, size 0x4, align 4 | MNotSaved
    int32 m_iCurrentThinkContext; // offset 0x39C, size 0x4, align 4 | MNotSaved
    CUtlVector< thinkfunc_t > m_aThinkFunctions; // offset 0x3A0, size 0x18, align 8 | MNotSaved
    bool m_bDisabledContextThinks; // offset 0x3B8, size 0x1, align 1
    char _pad_03B9[0x3]; // offset 0x3B9
    float32 m_flAnimTime; // offset 0x3BC, size 0x4, align 4 | MNotSaved
    float32 m_flSimulationTime; // offset 0x3C0, size 0x4, align 4 | MNotSaved
    uint8 m_nSceneObjectOverrideFlags; // offset 0x3C4, size 0x1, align 1
    bool m_bHasSuccessfullyInterpolated; // offset 0x3C5, size 0x1, align 1 | MNotSaved
    bool m_bHasAddedVarsToInterpolation; // offset 0x3C6, size 0x1, align 1 | MNotSaved
    bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // offset 0x3C7, size 0x1, align 1 | MNotSaved
    int32[2] m_nInterpolationLatchDirtyFlags; // offset 0x3C8, size 0x8, align 4 | MNotSaved
    uint16[11] m_ListEntry; // offset 0x3D0, size 0x16, align 2 | MNotSaved
    char _pad_03E6[0x2]; // offset 0x3E6
    GameTime_t m_flCreateTime; // offset 0x3E8, size 0x4, align 255 | MNotSaved
    uint16 m_EntClientFlags; // offset 0x3EC, size 0x2, align 2 | MNotSaved
    bool m_bClientSideRagdoll; // offset 0x3EE, size 0x1, align 1 | MNotSaved
    uint8 m_iTeamNum; // offset 0x3EF, size 0x1, align 1 | MNotSaved
    uint32 m_spawnflags; // offset 0x3F0, size 0x4, align 4
    GameTick_t m_nNextThinkTick; // offset 0x3F4, size 0x4, align 255 | MNotSaved
    char _pad_03F8[0x4]; // offset 0x3F8
    uint32 m_fFlags; // offset 0x3FC, size 0x4, align 4 | MSaveBehavior
    Vector m_vecAbsVelocity; // offset 0x400, size 0xC, align 4 | MNotSaved
    CNetworkVelocityVector m_vecServerVelocity; // offset 0x40C, size 0x28, align 255 | MNotSaved
    char _pad_0434[0x4]; // offset 0x434
    CNetworkVelocityVector m_vecVelocity; // offset 0x438, size 0x28, align 255
    char _pad_0460[0xB8]; // offset 0x460
    CHandle< C_BaseEntity > m_hEffectEntity; // offset 0x518, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hOwnerEntity; // offset 0x51C, size 0x4, align 4
    MoveCollide_t m_MoveCollide; // offset 0x520, size 0x1, align 1 | MNotSaved
    MoveType_t m_MoveType; // offset 0x521, size 0x1, align 1
    MoveType_t m_nActualMoveType; // offset 0x522, size 0x1, align 1
    char _pad_0523[0x1]; // offset 0x523
    float32 m_flWaterLevel; // offset 0x524, size 0x4, align 4 | MNotSaved
    uint32 m_fEffects; // offset 0x528, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hGroundEntity; // offset 0x52C, size 0x4, align 4 | MNotSaved
    int32 m_nGroundBodyIndex; // offset 0x530, size 0x4, align 4 | MNotSaved
    float32 m_flFriction; // offset 0x534, size 0x4, align 4 | MNotSaved
    float32 m_flElasticity; // offset 0x538, size 0x4, align 4 | MNotSaved
    float32 m_flGravityScale; // offset 0x53C, size 0x4, align 4 | MNotSaved
    float32 m_flTimeScale; // offset 0x540, size 0x4, align 4 | MNotSaved
    bool m_bAnimatedEveryTick; // offset 0x544, size 0x1, align 1 | MNotSaved
    bool m_bGravityDisabled; // offset 0x545, size 0x1, align 1
    char _pad_0546[0x2]; // offset 0x546
    GameTime_t m_flNavIgnoreUntilTime; // offset 0x548, size 0x4, align 255 | MNotSaved
    uint16 m_hThink; // offset 0x54C, size 0x2, align 2 | MNotSaved
    char _pad_054E[0xA]; // offset 0x54E
    uint8 m_fBBoxVisFlags; // offset 0x558, size 0x1, align 1 | MNotSaved
    char _pad_0559[0x3]; // offset 0x559
    float32 m_flActualGravityScale; // offset 0x55C, size 0x4, align 4
    bool m_bGravityActuallyDisabled; // offset 0x560, size 0x1, align 1
    bool m_bPredictable; // offset 0x561, size 0x1, align 1 | MNotSaved
    bool m_bRenderWithViewModels; // offset 0x562, size 0x1, align 1
    char _pad_0563[0x1]; // offset 0x563
    int32 m_nFirstPredictableCommand; // offset 0x564, size 0x4, align 4 | MNotSaved
    int32 m_nLastPredictableCommand; // offset 0x568, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hOldMoveParent; // offset 0x56C, size 0x4, align 4 | MNotSaved
    CParticleProperty m_Particles; // offset 0x570, size 0x28, align 8 | MNotSaved
    char _pad_0598[0x8]; // offset 0x598
    QAngle m_vecAngVelocity; // offset 0x5A0, size 0xC, align 4
    int32 m_DataChangeEventRef; // offset 0x5AC, size 0x4, align 4 | MNotSaved
    CUtlVector< CEntityHandle > m_dependencies; // offset 0x5B0, size 0x18, align 8 | MNotSaved
    int32 m_nCreationTick; // offset 0x5C8, size 0x4, align 4 | MNotSaved
    char _pad_05CC[0xD]; // offset 0x5CC
    bool m_bAnimTimeChanged; // offset 0x5D9, size 0x1, align 1 | MNotSaved
    bool m_bSimulationTimeChanged; // offset 0x5DA, size 0x1, align 1 | MNotSaved
    char _pad_05DB[0xD]; // offset 0x5DB
    CUtlString m_sUniqueHammerID; // offset 0x5E8, size 0x8, align 8 | MNotSaved
};
