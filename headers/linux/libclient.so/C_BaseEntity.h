#pragma once

class C_BaseEntity : public CEntityInstance /*0x0*/  // sizeof 0x770, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CBodyComponent* m_CBodyComponent; // offset 0x30, size 0x8, align 8
    CNetworkTransmitComponent m_NetworkTransmitComponent; // offset 0x38, size 0x330, align 8 | MNotSaved
    char _pad_0368[0x130]; // offset 0x368
    GameTick_t m_nLastThinkTick; // offset 0x498, size 0x4, align 255 | MNotSaved
    char _pad_049C[0x4]; // offset 0x49C
    CGameSceneNode* m_pGameSceneNode; // offset 0x4A0, size 0x8, align 8 | MNotSaved
    CRenderComponent* m_pRenderComponent; // offset 0x4A8, size 0x8, align 8 | MNotSaved
    CCollisionProperty* m_pCollision; // offset 0x4B0, size 0x8, align 8 | MNotSaved
    int32 m_iMaxHealth; // offset 0x4B8, size 0x4, align 4 | MNotSaved
    int32 m_iHealth; // offset 0x4BC, size 0x4, align 4
    float32 m_flDamageAccumulator; // offset 0x4C0, size 0x4, align 4 | MNotSaved
    uint8 m_lifeState; // offset 0x4C4, size 0x1, align 1 | MNotSaved
    DamageOptions_t m_takedamage; // offset 0x4C5, size 0x1, align 1
    bool m_bTakesDamage; // offset 0x4C6, size 0x1, align 1 | MNotSaved
    char _pad_04C7[0x1]; // offset 0x4C7
    TakeDamageFlags_t m_nTakeDamageFlags; // offset 0x4C8, size 0x8, align 8 | MNotSaved
    EntityPlatformTypes_t m_nPlatformType; // offset 0x4D0, size 0x1, align 1
    uint8 m_ubInterpolationFrame; // offset 0x4D1, size 0x1, align 1 | MNotSaved
    char _pad_04D2[0x2]; // offset 0x4D2
    CHandle< C_BaseEntity > m_hSceneObjectController; // offset 0x4D4, size 0x4, align 4
    int32 m_nNoInterpolationTick; // offset 0x4D8, size 0x4, align 4 | MNotSaved
    int32 m_nVisibilityNoInterpolationTick; // offset 0x4DC, size 0x4, align 4 | MNotSaved
    float32 m_flProxyRandomValue; // offset 0x4E0, size 0x4, align 4 | MNotSaved
    int32 m_iEFlags; // offset 0x4E4, size 0x4, align 4 | MNotSaved
    uint8 m_nWaterType; // offset 0x4E8, size 0x1, align 1 | MNotSaved
    bool m_bInterpolateEvenWithNoModel; // offset 0x4E9, size 0x1, align 1 | MNotSaved
    bool m_bPredictionEligible; // offset 0x4EA, size 0x1, align 1 | MNotSaved
    bool m_bApplyLayerMatchIDToModel; // offset 0x4EB, size 0x1, align 1 | MNotSaved
    CUtlStringToken m_tokLayerMatchID; // offset 0x4EC, size 0x4, align 4 | MNotSaved
    CUtlStringToken m_nSubclassID; // offset 0x4F0, size 0x4, align 4
    char _pad_04F4[0xC]; // offset 0x4F4
    int32 m_nSimulationTick; // offset 0x500, size 0x4, align 4 | MNotSaved
    int32 m_iCurrentThinkContext; // offset 0x504, size 0x4, align 4 | MNotSaved
    CUtlVector< thinkfunc_t > m_aThinkFunctions; // offset 0x508, size 0x18, align 8 | MNotSaved
    bool m_bDisabledContextThinks; // offset 0x520, size 0x1, align 1
    char _pad_0521[0x3]; // offset 0x521
    float32 m_flAnimTime; // offset 0x524, size 0x4, align 4 | MNotSaved
    float32 m_flSimulationTime; // offset 0x528, size 0x4, align 4 | MNotSaved
    uint8 m_nSceneObjectOverrideFlags; // offset 0x52C, size 0x1, align 1
    bool m_bHasSuccessfullyInterpolated; // offset 0x52D, size 0x1, align 1 | MNotSaved
    bool m_bHasAddedVarsToInterpolation; // offset 0x52E, size 0x1, align 1 | MNotSaved
    bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // offset 0x52F, size 0x1, align 1 | MNotSaved
    int32[2] m_nInterpolationLatchDirtyFlags; // offset 0x530, size 0x8, align 4 | MNotSaved
    uint16[11] m_ListEntry; // offset 0x538, size 0x16, align 2 | MNotSaved
    char _pad_054E[0x2]; // offset 0x54E
    GameTime_t m_flCreateTime; // offset 0x550, size 0x4, align 255 | MNotSaved
    uint16 m_EntClientFlags; // offset 0x554, size 0x2, align 2 | MNotSaved
    bool m_bClientSideRagdoll; // offset 0x556, size 0x1, align 1 | MNotSaved
    uint8 m_iTeamNum; // offset 0x557, size 0x1, align 1 | MNotSaved
    uint32 m_spawnflags; // offset 0x558, size 0x4, align 4
    GameTick_t m_nNextThinkTick; // offset 0x55C, size 0x4, align 255 | MNotSaved
    char _pad_0560[0x4]; // offset 0x560
    uint32 m_fFlags; // offset 0x564, size 0x4, align 4 | MSaveBehavior
    Vector m_vecAbsVelocity; // offset 0x568, size 0xC, align 4 | MNotSaved
    CNetworkVelocityVector m_vecServerVelocity; // offset 0x574, size 0x28, align 255 | MNotSaved
    char _pad_059C[0x4]; // offset 0x59C
    CNetworkVelocityVector m_vecVelocity; // offset 0x5A0, size 0x28, align 255
    char _pad_05C8[0xC0]; // offset 0x5C8
    CHandle< C_BaseEntity > m_hEffectEntity; // offset 0x688, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hOwnerEntity; // offset 0x68C, size 0x4, align 4
    MoveCollide_t m_MoveCollide; // offset 0x690, size 0x1, align 1 | MNotSaved
    MoveType_t m_MoveType; // offset 0x691, size 0x1, align 1
    MoveType_t m_nActualMoveType; // offset 0x692, size 0x1, align 1
    char _pad_0693[0x1]; // offset 0x693
    float32 m_flWaterLevel; // offset 0x694, size 0x4, align 4 | MNotSaved
    uint32 m_fEffects; // offset 0x698, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hGroundEntity; // offset 0x69C, size 0x4, align 4 | MNotSaved
    int32 m_nGroundBodyIndex; // offset 0x6A0, size 0x4, align 4 | MNotSaved
    float32 m_flFriction; // offset 0x6A4, size 0x4, align 4 | MNotSaved
    float32 m_flElasticity; // offset 0x6A8, size 0x4, align 4 | MNotSaved
    float32 m_flGravityScale; // offset 0x6AC, size 0x4, align 4 | MNotSaved
    float32 m_flTimeScale; // offset 0x6B0, size 0x4, align 4 | MNotSaved
    bool m_bAnimatedEveryTick; // offset 0x6B4, size 0x1, align 1 | MNotSaved
    bool m_bGravityDisabled; // offset 0x6B5, size 0x1, align 1
    char _pad_06B6[0x2]; // offset 0x6B6
    GameTime_t m_flNavIgnoreUntilTime; // offset 0x6B8, size 0x4, align 255 | MNotSaved
    uint16 m_hThink; // offset 0x6BC, size 0x2, align 2 | MNotSaved
    char _pad_06BE[0xA]; // offset 0x6BE
    uint8 m_fBBoxVisFlags; // offset 0x6C8, size 0x1, align 1 | MNotSaved
    char _pad_06C9[0x3]; // offset 0x6C9
    float32 m_flActualGravityScale; // offset 0x6CC, size 0x4, align 4
    bool m_bGravityActuallyDisabled; // offset 0x6D0, size 0x1, align 1
    bool m_bPredictable; // offset 0x6D1, size 0x1, align 1 | MNotSaved
    bool m_bRenderWithViewModels; // offset 0x6D2, size 0x1, align 1
    char _pad_06D3[0x1]; // offset 0x6D3
    int32 m_nFirstPredictableCommand; // offset 0x6D4, size 0x4, align 4 | MNotSaved
    int32 m_nLastPredictableCommand; // offset 0x6D8, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hOldMoveParent; // offset 0x6DC, size 0x4, align 4 | MNotSaved
    CParticleProperty m_Particles; // offset 0x6E0, size 0x28, align 8 | MNotSaved
    char _pad_0708[0x8]; // offset 0x708
    QAngle m_vecAngVelocity; // offset 0x710, size 0xC, align 4
    int32 m_DataChangeEventRef; // offset 0x71C, size 0x4, align 4 | MNotSaved
    CUtlVector< CEntityHandle > m_dependencies; // offset 0x720, size 0x18, align 8 | MNotSaved
    int32 m_nCreationTick; // offset 0x738, size 0x4, align 4 | MNotSaved
    char _pad_073C[0x15]; // offset 0x73C
    bool m_bAnimTimeChanged; // offset 0x751, size 0x1, align 1 | MNotSaved
    bool m_bSimulationTimeChanged; // offset 0x752, size 0x1, align 1 | MNotSaved
    char _pad_0753[0xD]; // offset 0x753
    CUtlString m_sUniqueHammerID; // offset 0x760, size 0x8, align 8 | MNotSaved
    BloodType m_nBloodType; // offset 0x768, size 0x4, align 4
    char _pad_076C[0x4]; // offset 0x76C
};
