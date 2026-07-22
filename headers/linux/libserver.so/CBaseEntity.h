#pragma once

class CBaseEntity : public CEntityInstance /*0x0*/  // sizeof 0x778, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CBodyComponent* m_CBodyComponent; // offset 0x30, size 0x8, align 8
    CNetworkTransmitComponent m_NetworkTransmitComponent; // offset 0x38, size 0x330, align 8
    char _pad_0368[0x198]; // offset 0x368
    CUtlVector< thinkfunc_t > m_aThinkFunctions; // offset 0x500, size 0x18, align 8
    int32 m_iCurrentThinkContext; // offset 0x518, size 0x4, align 4 | MNotSaved
    GameTick_t m_nLastThinkTick; // offset 0x51C, size 0x4, align 255
    bool m_bDisabledContextThinks; // offset 0x520, size 0x1, align 1
    char _pad_0521[0xF]; // offset 0x521
    CTypedBitVec< 64 > m_isSteadyState; // offset 0x530, size 0x8, align 4 | MNotSaved
    float32 m_lastNetworkChange; // offset 0x538, size 0x4, align 4 | MNotSaved
    char _pad_053C[0x4]; // offset 0x53C
    BASEPTR m_think; // offset 0x540, size 0x10, align 8
    CUtlVector< ResponseContext_t > m_ResponseContexts; // offset 0x550, size 0x18, align 8
    CUtlSymbolLarge m_iszResponseContext; // offset 0x568, size 0x8, align 8
    ENTITYFUNCPTR m_pfnTouch; // offset 0x570, size 0x10, align 8
    USEPTR m_pfnUse; // offset 0x580, size 0x10, align 8
    ENTITYFUNCPTR m_pfnBlocked; // offset 0x590, size 0x10, align 8
    BASEPTR m_pfnMoveDone; // offset 0x5A0, size 0x10, align 8
    int32 m_iHealth; // offset 0x5B0, size 0x4, align 4
    int32 m_iMaxHealth; // offset 0x5B4, size 0x4, align 4
    uint8 m_lifeState; // offset 0x5B8, size 0x1, align 1
    char _pad_05B9[0x3]; // offset 0x5B9
    float32 m_flDamageAccumulator; // offset 0x5BC, size 0x4, align 4
    DamageOptions_t m_takedamage; // offset 0x5C0, size 0x1, align 1
    bool m_bTakesDamage; // offset 0x5C1, size 0x1, align 1
    char _pad_05C2[0x6]; // offset 0x5C2
    TakeDamageFlags_t m_nTakeDamageFlags; // offset 0x5C8, size 0x8, align 8
    EntityPlatformTypes_t m_nPlatformType; // offset 0x5D0, size 0x1, align 1
    char _pad_05D1[0x1]; // offset 0x5D1
    MoveCollide_t m_MoveCollide; // offset 0x5D2, size 0x1, align 1
    MoveType_t m_MoveType; // offset 0x5D3, size 0x1, align 1
    MoveType_t m_nPreviouslySetMoveType; // offset 0x5D4, size 0x1, align 1
    MoveType_t m_nActualMoveType; // offset 0x5D5, size 0x1, align 1
    uint8 m_nWaterTouch; // offset 0x5D6, size 0x1, align 1 | MNotSaved
    uint8 m_nSlimeTouch; // offset 0x5D7, size 0x1, align 1 | MNotSaved
    bool m_bRestoreInHierarchy; // offset 0x5D8, size 0x1, align 1
    char _pad_05D9[0x7]; // offset 0x5D9
    CUtlSymbolLarge m_target; // offset 0x5E0, size 0x8, align 8
    CHandle< CBaseFilter > m_hDamageFilter; // offset 0x5E8, size 0x4, align 4
    char _pad_05EC[0x4]; // offset 0x5EC
    CUtlSymbolLarge m_iszDamageFilterName; // offset 0x5F0, size 0x8, align 8
    float32 m_flMoveDoneTime; // offset 0x5F8, size 0x4, align 4
    CUtlStringToken m_nSubclassID; // offset 0x5FC, size 0x4, align 4
    char _pad_0600[0x8]; // offset 0x600
    float32 m_flAnimTime; // offset 0x608, size 0x4, align 4 | MKV3TransferSaveOpsForField
    float32 m_flSimulationTime; // offset 0x60C, size 0x4, align 4 | MKV3TransferSaveOpsForField
    GameTime_t m_flCreateTime; // offset 0x610, size 0x4, align 255
    bool m_bClientSideRagdoll; // offset 0x614, size 0x1, align 1
    uint8 m_ubInterpolationFrame; // offset 0x615, size 0x1, align 1
    char _pad_0616[0x2]; // offset 0x616
    VectorWS m_vPrevVPhysicsUpdatePos; // offset 0x618, size 0xC, align 4
    uint8 m_iTeamNum; // offset 0x624, size 0x1, align 1
    char _pad_0625[0x3]; // offset 0x625
    CUtlSymbolLarge m_iGlobalname; // offset 0x628, size 0x8, align 8 | MSaveBehavior
    int32 m_iSentToClients; // offset 0x630, size 0x4, align 4 | MNotSaved
    char _pad_0634[0x4]; // offset 0x634
    CUtlString m_sUniqueHammerID; // offset 0x638, size 0x8, align 8
    uint32 m_spawnflags; // offset 0x640, size 0x4, align 4
    GameTick_t m_nNextThinkTick; // offset 0x644, size 0x4, align 255
    int32 m_nSimulationTick; // offset 0x648, size 0x4, align 4 | MKV3TransferSaveOpsForField
    char _pad_064C[0x4]; // offset 0x64C
    CEntityIOOutput m_OnKilled; // offset 0x650, size 0x18, align 255
    uint32 m_fFlags; // offset 0x668, size 0x4, align 4
    Vector m_vecAbsVelocity; // offset 0x66C, size 0xC, align 4
    CNetworkVelocityVector m_vecVelocity; // offset 0x678, size 0x28, align 255
    char _pad_06A0[0x8]; // offset 0x6A0
    int32 m_nPushEnumCount; // offset 0x6A8, size 0x4, align 4 | MNotSaved
    char _pad_06AC[0x4]; // offset 0x6AC
    CCollisionProperty* m_pCollision; // offset 0x6B0, size 0x8, align 8 | MNotSaved
    CHandle< CBaseEntity > m_hEffectEntity; // offset 0x6B8, size 0x4, align 4
    CHandle< CBaseEntity > m_hOwnerEntity; // offset 0x6BC, size 0x4, align 4
    uint32 m_fEffects; // offset 0x6C0, size 0x4, align 4
    CHandle< CBaseEntity > m_hGroundEntity; // offset 0x6C4, size 0x4, align 4
    int32 m_nGroundBodyIndex; // offset 0x6C8, size 0x4, align 4
    float32 m_flFriction; // offset 0x6CC, size 0x4, align 4
    float32 m_flElasticity; // offset 0x6D0, size 0x4, align 4
    float32 m_flGravityScale; // offset 0x6D4, size 0x4, align 4
    float32 m_flTimeScale; // offset 0x6D8, size 0x4, align 4
    float32 m_flWaterLevel; // offset 0x6DC, size 0x4, align 4
    bool m_bGravityDisabled; // offset 0x6E0, size 0x1, align 1
    bool m_bAnimatedEveryTick; // offset 0x6E1, size 0x1, align 1
    char _pad_06E2[0x2]; // offset 0x6E2
    float32 m_flActualGravityScale; // offset 0x6E4, size 0x4, align 4
    bool m_bGravityActuallyDisabled; // offset 0x6E8, size 0x1, align 1
    bool m_bDisableLowViolence; // offset 0x6E9, size 0x1, align 1
    uint8 m_nWaterType; // offset 0x6EA, size 0x1, align 1
    char _pad_06EB[0x1]; // offset 0x6EB
    int32 m_iEFlags; // offset 0x6EC, size 0x4, align 4
    CEntityIOOutput m_OnUser1; // offset 0x6F0, size 0x18, align 255
    CEntityIOOutput m_OnUser2; // offset 0x708, size 0x18, align 255
    CEntityIOOutput m_OnUser3; // offset 0x720, size 0x18, align 255
    CEntityIOOutput m_OnUser4; // offset 0x738, size 0x18, align 255
    int32 m_iInitialTeamNum; // offset 0x750, size 0x4, align 4
    GameTime_t m_flNavIgnoreUntilTime; // offset 0x754, size 0x4, align 255
    QAngle m_vecAngVelocity; // offset 0x758, size 0xC, align 4
    bool m_bNetworkQuantizeOriginAndAngles; // offset 0x764, size 0x1, align 1
    bool m_bLagCompensate; // offset 0x765, size 0x1, align 1
    char _pad_0766[0x2]; // offset 0x766
    CHandle< CBaseEntity > m_pBlocker; // offset 0x768, size 0x4, align 4
    float32 m_flLocalTime; // offset 0x76C, size 0x4, align 4
    float32 m_flVPhysicsUpdateLocalTime; // offset 0x770, size 0x4, align 4
    BloodType m_nBloodType; // offset 0x774, size 0x4, align 4
};
