#pragma once

class CRagdollProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xC10, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA60]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xA60, size 0x40, align 8
    ragdoll_t m_ragdoll; // offset 0xAA0, size 0x50, align 8
    bool m_bStartDisabled; // offset 0xAF0, size 0x1, align 1
    char _pad_0AF1[0x3]; // offset 0xAF1
    float32 m_massScale; // offset 0xAF4, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xAF8, size 0x4, align 4
    char _pad_0AFC[0x4]; // offset 0xAFC
    CNetworkUtlVectorBase< bool > m_ragEnabled; // offset 0xB00, size 0x18, align 8
    CNetworkUtlVectorBase< Vector > m_ragPos; // offset 0xB18, size 0x18, align 8
    CNetworkUtlVectorBase< QAngle > m_ragAngles; // offset 0xB30, size 0x18, align 8
    uint32 m_lastUpdateTickCount; // offset 0xB48, size 0x4, align 4
    bool m_allAsleep; // offset 0xB4C, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xB4D, size 0x1, align 1
    char _pad_0B4E[0x2]; // offset 0xB4E
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xB50, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xB54, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xB55, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xB56, size 0x1, align 1
    char _pad_0B57[0x1]; // offset 0xB57
    CHandle< CBaseEntity > m_hDamageEntity; // offset 0xB58, size 0x4, align 4
    CHandle< CBaseEntity > m_hKiller; // offset 0xB5C, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xB60, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xB64, size 0x4, align 255
    GameTime_t m_flFadeOutStartTime; // offset 0xB68, size 0x4, align 255
    float32 m_flFadeTime; // offset 0xB6C, size 0x4, align 4
    VectorWS m_vecLastOrigin; // offset 0xB70, size 0xC, align 4
    GameTime_t m_flAwakeTime; // offset 0xB7C, size 0x4, align 255
    GameTime_t m_flLastOriginChangeTime; // offset 0xB80, size 0x4, align 255
    char _pad_0B84[0x4]; // offset 0xB84
    CUtlSymbolLarge m_strOriginClassName; // offset 0xB88, size 0x8, align 8
    CUtlSymbolLarge m_strSourceClassName; // offset 0xB90, size 0x8, align 8
    bool m_bHasBeenPhysgunned; // offset 0xB98, size 0x1, align 1
    bool m_bAllowStretch; // offset 0xB99, size 0x1, align 1 | MNotSaved
    char _pad_0B9A[0x2]; // offset 0xB9A
    float32 m_flBlendWeight; // offset 0xB9C, size 0x4, align 4
    float32 m_flDefaultFadeScale; // offset 0xBA0, size 0x4, align 4
    char _pad_0BA4[0x4]; // offset 0xBA4
    CUtlVector< Vector > m_ragdollMins; // offset 0xBA8, size 0x18, align 8 | MNotSaved
    CUtlVector< Vector > m_ragdollMaxs; // offset 0xBC0, size 0x18, align 8 | MNotSaved
    bool m_bShouldDeleteActivationRecord; // offset 0xBD8, size 0x1, align 1 | MNotSaved
    char _pad_0BD9[0x17]; // offset 0xBD9
    CUtlVector< INavObstacle* > m_vecNavObstacles; // offset 0xBF0, size 0x18, align 8 | MNotSaved
    char _pad_0C08[0x8]; // offset 0xC08
};
