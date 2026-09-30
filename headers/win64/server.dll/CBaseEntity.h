#pragma once

class CBaseEntity : public CEntityInstance /*0x0*/  // sizeof 0x4B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CBodyComponent* m_CBodyComponent; // offset 0x30, size 0x8, align 8
    CNetworkTransmitComponent m_NetworkTransmitComponent; // offset 0x38, size 0x1D0, align 8
    char _pad_0208[0x40]; // offset 0x208
    CUtlVector< thinkfunc_t > m_aThinkFunctions; // offset 0x248, size 0x18, align 8
    int32 m_iCurrentThinkContext; // offset 0x260, size 0x4, align 4 | MNotSaved
    GameTick_t m_nLastThinkTick; // offset 0x264, size 0x4, align 255
    bool m_bDisabledContextThinks; // offset 0x268, size 0x1, align 1
    char _pad_0269[0xF]; // offset 0x269
    CTypedBitVec< 64 > m_isSteadyState; // offset 0x278, size 0x8, align 4 | MNotSaved
    float32 m_lastNetworkChange; // offset 0x280, size 0x4, align 4 | MNotSaved
    char _pad_0284[0x4]; // offset 0x284
    BASEPTR m_think; // offset 0x288, size 0x8, align 8
    CUtlVector< ResponseContext_t > m_ResponseContexts; // offset 0x290, size 0x18, align 8
    CUtlSymbolLarge m_iszResponseContext; // offset 0x2A8, size 0x8, align 8
    ENTITYFUNCPTR m_pfnTouch; // offset 0x2B0, size 0x8, align 8
    USEPTR m_pfnUse; // offset 0x2B8, size 0x8, align 8
    ENTITYFUNCPTR m_pfnBlocked; // offset 0x2C0, size 0x8, align 8
    BASEPTR m_pfnMoveDone; // offset 0x2C8, size 0x8, align 8
    int32 m_iHealth; // offset 0x2D0, size 0x4, align 4
    int32 m_iMaxHealth; // offset 0x2D4, size 0x4, align 4
    uint8 m_lifeState; // offset 0x2D8, size 0x1, align 1
    char _pad_02D9[0x3]; // offset 0x2D9
    float32 m_flDamageAccumulator; // offset 0x2DC, size 0x4, align 4
    bool m_bTakesDamage; // offset 0x2E0, size 0x1, align 1
    char _pad_02E1[0x7]; // offset 0x2E1
    TakeDamageFlags_t m_nTakeDamageFlags; // offset 0x2E8, size 0x8, align 8
    EntityPlatformTypes_t m_nPlatformType; // offset 0x2F0, size 0x1, align 1
    char _pad_02F1[0x1]; // offset 0x2F1
    MoveCollide_t m_MoveCollide; // offset 0x2F2, size 0x1, align 1
    MoveType_t m_MoveType; // offset 0x2F3, size 0x1, align 1
    MoveType_t m_nPreviouslySetMoveType; // offset 0x2F4, size 0x1, align 1
    MoveType_t m_nActualMoveType; // offset 0x2F5, size 0x1, align 1
    uint8 m_nWaterTouch; // offset 0x2F6, size 0x1, align 1 | MNotSaved
    uint8 m_nSlimeTouch; // offset 0x2F7, size 0x1, align 1 | MNotSaved
    bool m_bRestoreInHierarchy; // offset 0x2F8, size 0x1, align 1
    char _pad_02F9[0x7]; // offset 0x2F9
    CUtlSymbolLarge m_target; // offset 0x300, size 0x8, align 8
    CHandle< CBaseFilter > m_hDamageFilter; // offset 0x308, size 0x4, align 4
    char _pad_030C[0x4]; // offset 0x30C
    CUtlSymbolLarge m_iszDamageFilterName; // offset 0x310, size 0x8, align 8
    float32 m_flMoveDoneTime; // offset 0x318, size 0x4, align 4
    CUtlStringToken m_nSubclassID; // offset 0x31C, size 0x4, align 4
    char _pad_0320[0x8]; // offset 0x320
    SensableByNPCHandle_t m_hNPCSensingHandle; // offset 0x328, size 0x4, align 255 | MNotSaved
    float32 m_flAnimTime; // offset 0x32C, size 0x4, align 4 | MKV3TransferSaveOpsForField
    float32 m_flSimulationTime; // offset 0x330, size 0x4, align 4 | MNotSaved
    GameTime_t m_flCreateTime; // offset 0x334, size 0x4, align 255
    bool m_bClientSideRagdoll; // offset 0x338, size 0x1, align 1
    uint8 m_ubInterpolationFrame; // offset 0x339, size 0x1, align 1
    char _pad_033A[0x2]; // offset 0x33A
    VectorWS m_vPrevVPhysicsUpdatePos; // offset 0x33C, size 0xC, align 4
    uint8 m_iTeamNum; // offset 0x348, size 0x1, align 1
    char _pad_0349[0x7]; // offset 0x349
    CUtlSymbolLarge m_iGlobalname; // offset 0x350, size 0x8, align 8 | MSaveBehavior
    int32 m_iSentToClients; // offset 0x358, size 0x4, align 4 | MNotSaved
    char _pad_035C[0x4]; // offset 0x35C
    CUtlString m_sUniqueHammerID; // offset 0x360, size 0x8, align 8
    uint32 m_spawnflags; // offset 0x368, size 0x4, align 4
    GameTick_t m_nNextThinkTick; // offset 0x36C, size 0x4, align 255
    int32 m_nSimulationTick; // offset 0x370, size 0x4, align 4 | MKV3TransferSaveOpsForField
    char _pad_0374[0x4]; // offset 0x374
    CEntityIOOutput m_OnKilled; // offset 0x378, size 0x18, align 255
    uint32 m_fFlags; // offset 0x390, size 0x4, align 4
    Vector m_vecAbsVelocity; // offset 0x394, size 0xC, align 4
    CNetworkVelocityVector m_vecVelocity; // offset 0x3A0, size 0x28, align 255
    char _pad_03C8[0x8]; // offset 0x3C8
    int32 m_nPushEnumCount; // offset 0x3D0, size 0x4, align 4 | MNotSaved
    char _pad_03D4[0x4]; // offset 0x3D4
    CCollisionProperty* m_pCollision; // offset 0x3D8, size 0x8, align 8 | MNotSaved
    CModifierProperty* m_pModifierProp; // offset 0x3E0, size 0x8, align 8
    CHandle< CBaseEntity > m_hEffectEntity; // offset 0x3E8, size 0x4, align 4
    CHandle< CBaseEntity > m_hOwnerEntity; // offset 0x3EC, size 0x4, align 4
    uint32 m_fEffects; // offset 0x3F0, size 0x4, align 4
    CHandle< CBaseEntity > m_hGroundEntity; // offset 0x3F4, size 0x4, align 4
    int32 m_nGroundBodyIndex; // offset 0x3F8, size 0x4, align 4
    float32 m_flFriction; // offset 0x3FC, size 0x4, align 4
    float32 m_flElasticity; // offset 0x400, size 0x4, align 4
    float32 m_flGravityScale; // offset 0x404, size 0x4, align 4
    float32 m_flTimeScale; // offset 0x408, size 0x4, align 4
    float32 m_flWaterLevel; // offset 0x40C, size 0x4, align 4
    bool m_bGravityDisabled; // offset 0x410, size 0x1, align 1
    bool m_bAnimatedEveryTick; // offset 0x411, size 0x1, align 1
    char _pad_0412[0x2]; // offset 0x412
    float32 m_flActualGravityScale; // offset 0x414, size 0x4, align 4
    bool m_bGravityActuallyDisabled; // offset 0x418, size 0x1, align 1
    bool m_bDisableLowViolence; // offset 0x419, size 0x1, align 1
    uint8 m_nWaterType; // offset 0x41A, size 0x1, align 1
    char _pad_041B[0x1]; // offset 0x41B
    int32 m_iEFlags; // offset 0x41C, size 0x4, align 4
    CEntityIOOutput m_OnUser1; // offset 0x420, size 0x18, align 255
    CEntityIOOutput m_OnUser2; // offset 0x438, size 0x18, align 255
    CEntityIOOutput m_OnUser3; // offset 0x450, size 0x18, align 255
    CEntityIOOutput m_OnUser4; // offset 0x468, size 0x18, align 255
    int32 m_iInitialTeamNum; // offset 0x480, size 0x4, align 4
    GameTime_t m_flNavIgnoreUntilTime; // offset 0x484, size 0x4, align 255
    QAngle m_vecAngVelocity; // offset 0x488, size 0xC, align 4
    bool m_bNetworkQuantizeOriginAndAngles; // offset 0x494, size 0x1, align 1
    bool m_bLagCompensate; // offset 0x495, size 0x1, align 1
    char _pad_0496[0x2]; // offset 0x496
    CHandle< CBaseEntity > m_pBlocker; // offset 0x498, size 0x4, align 4
    float32 m_flLocalTime; // offset 0x49C, size 0x4, align 4
    float32 m_flVPhysicsUpdateLocalTime; // offset 0x4A0, size 0x4, align 4
    char _pad_04A4[0x4]; // offset 0x4A4
    CPulseGraphInstance_ServerEntity* m_pPulseGraphInstance; // offset 0x4A8, size 0x8, align 8 | MKV3TransferSaveOpsForField
};
