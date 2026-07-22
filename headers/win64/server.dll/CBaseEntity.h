#pragma once

class CBaseEntity : public CEntityInstance /*0x0*/  // sizeof 0x4A0, align 0x8 [vtable] (server) {MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByUserGroup MNetworkExcludeByUserGroup MNetworkExcludeByUserGroup MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkExcludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkUserGroupProxy MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CBodyComponent* m_CBodyComponent; // offset 0x30, size 0x8, align 8 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias MNetworkPriority
    CNetworkTransmitComponent m_NetworkTransmitComponent; // offset 0x38, size 0x1D0, align 255
    char _pad_0208[0x40]; // offset 0x208
    CUtlVector< thinkfunc_t > m_aThinkFunctions; // offset 0x248, size 0x18, align 8 | MSaveOpsForField
    int32 m_iCurrentThinkContext; // offset 0x260, size 0x4, align 4 | MNotSaved
    GameTick_t m_nLastThinkTick; // offset 0x264, size 0x4, align 255
    bool m_bDisabledContextThinks; // offset 0x268, size 0x1, align 1
    char _pad_0269[0xF]; // offset 0x269
    CTypedBitVec< 64 > m_isSteadyState; // offset 0x278, size 0x8, align 4 | MNotSaved
    float32 m_lastNetworkChange; // offset 0x280, size 0x4, align 4 | MNotSaved
    char _pad_0284[0xC]; // offset 0x284
    CUtlVector< ResponseContext_t > m_ResponseContexts; // offset 0x290, size 0x18, align 8
    CUtlSymbolLarge m_iszResponseContext; // offset 0x2A8, size 0x8, align 8
    char _pad_02B0[0x20]; // offset 0x2B0
    int32 m_iHealth; // offset 0x2D0, size 0x4, align 4 | MNetworkEnable MNetworkSerializer MNetworkUserGroup MNetworkPriority
    int32 m_iMaxHealth; // offset 0x2D4, size 0x4, align 4 | MNetworkEnable
    uint8 m_lifeState; // offset 0x2D8, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup MNetworkPriority
    char _pad_02D9[0x3]; // offset 0x2D9
    float32 m_flDamageAccumulator; // offset 0x2DC, size 0x4, align 4
    bool m_bTakesDamage; // offset 0x2E0, size 0x1, align 1 | MNetworkEnable
    char _pad_02E1[0x7]; // offset 0x2E1
    TakeDamageFlags_t m_nTakeDamageFlags; // offset 0x2E8, size 0x8, align 8 | MNetworkEnable
    EntityPlatformTypes_t m_nPlatformType; // offset 0x2F0, size 0x1, align 1 | MNetworkEnable
    char _pad_02F1[0x1]; // offset 0x2F1
    MoveCollide_t m_MoveCollide; // offset 0x2F2, size 0x1, align 1 | MNetworkEnable
    MoveType_t m_MoveType; // offset 0x2F3, size 0x1, align 1 | MNetworkEnable
    MoveType_t m_nActualMoveType; // offset 0x2F4, size 0x1, align 1
    uint8 m_nWaterTouch; // offset 0x2F5, size 0x1, align 1 | MNotSaved
    uint8 m_nSlimeTouch; // offset 0x2F6, size 0x1, align 1 | MNotSaved
    bool m_bRestoreInHierarchy; // offset 0x2F7, size 0x1, align 1
    CUtlSymbolLarge m_target; // offset 0x2F8, size 0x8, align 8
    CHandle< CBaseFilter > m_hDamageFilter; // offset 0x300, size 0x4, align 4
    char _pad_0304[0x4]; // offset 0x304
    CUtlSymbolLarge m_iszDamageFilterName; // offset 0x308, size 0x8, align 8
    float32 m_flMoveDoneTime; // offset 0x310, size 0x4, align 4
    CUtlStringToken m_nSubclassID; // offset 0x314, size 0x4, align 4 | MNetworkEnable MNetworkSendProxyRecipientsFilter
    char _pad_0318[0x8]; // offset 0x318
    float32 m_flAnimTime; // offset 0x320, size 0x4, align 4 | MNetworkEnable MNetworkPriority MNetworkSerializer MNetworkUserGroup MKV3TransferSaveOpsForField
    float32 m_flSimulationTime; // offset 0x324, size 0x4, align 4 | MNetworkEnable MNetworkPriority MNetworkSerializer MNetworkSendProxyRecipientsFilter MKV3TransferSaveOpsForField
    GameTime_t m_flCreateTime; // offset 0x328, size 0x4, align 255 | MNetworkEnable
    bool m_bClientSideRagdoll; // offset 0x32C, size 0x1, align 1 | MNetworkEnable
    uint8 m_ubInterpolationFrame; // offset 0x32D, size 0x1, align 1 | MNetworkEnable
    char _pad_032E[0x2]; // offset 0x32E
    Vector m_vPrevVPhysicsUpdatePos; // offset 0x330, size 0xC, align 4
    uint8 m_iTeamNum; // offset 0x33C, size 0x1, align 1 | MNetworkEnable
    char _pad_033D[0x3]; // offset 0x33D
    CUtlSymbolLarge m_iGlobalname; // offset 0x340, size 0x8, align 8
    int32 m_iSentToClients; // offset 0x348, size 0x4, align 4 | MNotSaved
    float32 m_flSpeed; // offset 0x34C, size 0x4, align 4 | MNetworkEnable
    CUtlString m_sUniqueHammerID; // offset 0x350, size 0x8, align 8
    uint32 m_spawnflags; // offset 0x358, size 0x4, align 4 | MNetworkEnable
    GameTick_t m_nNextThinkTick; // offset 0x35C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    int32 m_nSimulationTick; // offset 0x360, size 0x4, align 4 | MKV3TransferSaveOpsForField
    char _pad_0364[0x4]; // offset 0x364
    CEntityIOOutput m_OnKilled; // offset 0x368, size 0x18, align 255
    uint32 m_fFlags; // offset 0x380, size 0x4, align 4 | MNetworkEnable MNetworkPriority MNetworkUserGroup
    Vector m_vecAbsVelocity; // offset 0x384, size 0xC, align 4
    CNetworkVelocityVector m_vecVelocity; // offset 0x390, size 0x28, align 255 | MNetworkEnable MNetworkUserGroup MNetworkPriority
    char _pad_03B8[0x8]; // offset 0x3B8
    int32 m_nPushEnumCount; // offset 0x3C0, size 0x4, align 4 | MNotSaved
    char _pad_03C4[0x4]; // offset 0x3C4
    CCollisionProperty* m_pCollision; // offset 0x3C8, size 0x8, align 8 | MNotSaved
    CModifierProperty* m_pModifierProp; // offset 0x3D0, size 0x8, align 8 | MNetworkEnable MPtrAutoallocate
    CHandle< CBaseEntity > m_hEffectEntity; // offset 0x3D8, size 0x4, align 4 | MNetworkEnable
    CHandle< CBaseEntity > m_hOwnerEntity; // offset 0x3DC, size 0x4, align 4 | MNetworkEnable MNetworkPriority
    uint32 m_fEffects; // offset 0x3E0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    CHandle< CBaseEntity > m_hGroundEntity; // offset 0x3E4, size 0x4, align 4 | MNetworkEnable MNetworkPriority MNetworkUserGroup
    int32 m_nGroundBodyIndex; // offset 0x3E8, size 0x4, align 4 | MNetworkEnable MNetworkPriority MNetworkUserGroup
    float32 m_flFriction; // offset 0x3EC, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags MNetworkUserGroup
    float32 m_flElasticity; // offset 0x3F0, size 0x4, align 4 | MNetworkEnable MNetworkEncoder
    float32 m_flGravityScale; // offset 0x3F4, size 0x4, align 4 | MNetworkEnable
    float32 m_flTimeScale; // offset 0x3F8, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    float32 m_flWaterLevel; // offset 0x3FC, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    bool m_bGravityDisabled; // offset 0x400, size 0x1, align 1 | MNetworkEnable
    bool m_bAnimatedEveryTick; // offset 0x401, size 0x1, align 1 | MNetworkEnable
    char _pad_0402[0x2]; // offset 0x402
    float32 m_flActualGravityScale; // offset 0x404, size 0x4, align 4
    bool m_bGravityActuallyDisabled; // offset 0x408, size 0x1, align 1
    bool m_bDisableLowViolence; // offset 0x409, size 0x1, align 1
    uint8 m_nWaterType; // offset 0x40A, size 0x1, align 1
    char _pad_040B[0x1]; // offset 0x40B
    int32 m_iEFlags; // offset 0x40C, size 0x4, align 4
    CEntityIOOutput m_OnUser1; // offset 0x410, size 0x18, align 255
    CEntityIOOutput m_OnUser2; // offset 0x428, size 0x18, align 255
    CEntityIOOutput m_OnUser3; // offset 0x440, size 0x18, align 255
    CEntityIOOutput m_OnUser4; // offset 0x458, size 0x18, align 255
    int32 m_iInitialTeamNum; // offset 0x470, size 0x4, align 4
    GameTime_t m_flNavIgnoreUntilTime; // offset 0x474, size 0x4, align 255 | MNetworkEnable
    QAngle m_vecAngVelocity; // offset 0x478, size 0xC, align 4
    bool m_bNetworkQuantizeOriginAndAngles; // offset 0x484, size 0x1, align 1
    bool m_bLagCompensate; // offset 0x485, size 0x1, align 1
    char _pad_0486[0x2]; // offset 0x486
    CHandle< CBaseEntity > m_pBlocker; // offset 0x488, size 0x4, align 4
    float32 m_flLocalTime; // offset 0x48C, size 0x4, align 4
    float32 m_flVPhysicsUpdateLocalTime; // offset 0x490, size 0x4, align 4
    char _pad_0494[0x4]; // offset 0x494
    CPulseGraphInstance_ServerEntity* m_pPulseGraphInstance; // offset 0x498, size 0x8, align 8 | MSaveOpsForField
};
