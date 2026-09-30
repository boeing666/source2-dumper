#pragma once

class CRagdollProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xC50, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAA0]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xAA0, size 0x40, align 8
    ragdoll_t m_ragdoll; // offset 0xAE0, size 0x50, align 8
    bool m_bStartDisabled; // offset 0xB30, size 0x1, align 1
    char _pad_0B31[0x3]; // offset 0xB31
    float32 m_massScale; // offset 0xB34, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xB38, size 0x4, align 4
    char _pad_0B3C[0x4]; // offset 0xB3C
    CNetworkUtlVectorBase< bool > m_ragEnabled; // offset 0xB40, size 0x18, align 8
    CNetworkUtlVectorBase< Vector > m_ragPos; // offset 0xB58, size 0x18, align 8
    CNetworkUtlVectorBase< QAngle > m_ragAngles; // offset 0xB70, size 0x18, align 8
    uint32 m_lastUpdateTickCount; // offset 0xB88, size 0x4, align 4
    bool m_allAsleep; // offset 0xB8C, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xB8D, size 0x1, align 1
    char _pad_0B8E[0x2]; // offset 0xB8E
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xB90, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xB94, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xB95, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xB96, size 0x1, align 1
    char _pad_0B97[0x1]; // offset 0xB97
    CHandle< CBaseEntity > m_hDamageEntity; // offset 0xB98, size 0x4, align 4
    CHandle< CBaseEntity > m_hKiller; // offset 0xB9C, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xBA0, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xBA4, size 0x4, align 255
    GameTime_t m_flFadeOutStartTime; // offset 0xBA8, size 0x4, align 255
    float32 m_flFadeTime; // offset 0xBAC, size 0x4, align 4
    VectorWS m_vecLastOrigin; // offset 0xBB0, size 0xC, align 4
    GameTime_t m_flAwakeTime; // offset 0xBBC, size 0x4, align 255
    GameTime_t m_flLastOriginChangeTime; // offset 0xBC0, size 0x4, align 255
    char _pad_0BC4[0x4]; // offset 0xBC4
    CUtlSymbolLarge m_strOriginClassName; // offset 0xBC8, size 0x8, align 8
    CUtlSymbolLarge m_strSourceClassName; // offset 0xBD0, size 0x8, align 8
    bool m_bHasBeenPhysgunned; // offset 0xBD8, size 0x1, align 1
    bool m_bAllowStretch; // offset 0xBD9, size 0x1, align 1 | MNotSaved
    char _pad_0BDA[0x2]; // offset 0xBDA
    float32 m_flBlendWeight; // offset 0xBDC, size 0x4, align 4
    float32 m_flDefaultFadeScale; // offset 0xBE0, size 0x4, align 4
    char _pad_0BE4[0x4]; // offset 0xBE4
    CUtlVector< Vector > m_ragdollMins; // offset 0xBE8, size 0x18, align 8 | MNotSaved
    CUtlVector< Vector > m_ragdollMaxs; // offset 0xC00, size 0x18, align 8 | MNotSaved
    bool m_bShouldDeleteActivationRecord; // offset 0xC18, size 0x1, align 1 | MNotSaved
    char _pad_0C19[0x17]; // offset 0xC19
    CUtlVector< INavObstacle* > m_vecNavObstacles; // offset 0xC30, size 0x18, align 8 | MNotSaved
    char _pad_0C48[0x8]; // offset 0xC48
};
