#pragma once

class CRagdollProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xCA0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAF0]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xAF0, size 0x40, align 8
    ragdoll_t m_ragdoll; // offset 0xB30, size 0x50, align 8
    bool m_bStartDisabled; // offset 0xB80, size 0x1, align 1
    char _pad_0B81[0x3]; // offset 0xB81
    float32 m_massScale; // offset 0xB84, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xB88, size 0x4, align 4
    char _pad_0B8C[0x4]; // offset 0xB8C
    CNetworkUtlVectorBase< bool > m_ragEnabled; // offset 0xB90, size 0x18, align 8
    CNetworkUtlVectorBase< Vector > m_ragPos; // offset 0xBA8, size 0x18, align 8
    CNetworkUtlVectorBase< QAngle > m_ragAngles; // offset 0xBC0, size 0x18, align 8
    uint32 m_lastUpdateTickCount; // offset 0xBD8, size 0x4, align 4
    bool m_allAsleep; // offset 0xBDC, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xBDD, size 0x1, align 1
    char _pad_0BDE[0x2]; // offset 0xBDE
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xBE0, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xBE4, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xBE5, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xBE6, size 0x1, align 1
    char _pad_0BE7[0x1]; // offset 0xBE7
    CHandle< CBaseEntity > m_hDamageEntity; // offset 0xBE8, size 0x4, align 4
    CHandle< CBaseEntity > m_hKiller; // offset 0xBEC, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xBF0, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xBF4, size 0x4, align 255
    GameTime_t m_flFadeOutStartTime; // offset 0xBF8, size 0x4, align 255
    float32 m_flFadeTime; // offset 0xBFC, size 0x4, align 4
    VectorWS m_vecLastOrigin; // offset 0xC00, size 0xC, align 4
    GameTime_t m_flAwakeTime; // offset 0xC0C, size 0x4, align 255
    GameTime_t m_flLastOriginChangeTime; // offset 0xC10, size 0x4, align 255
    char _pad_0C14[0x4]; // offset 0xC14
    CUtlSymbolLarge m_strOriginClassName; // offset 0xC18, size 0x8, align 8
    CUtlSymbolLarge m_strSourceClassName; // offset 0xC20, size 0x8, align 8
    bool m_bHasBeenPhysgunned; // offset 0xC28, size 0x1, align 1
    bool m_bAllowStretch; // offset 0xC29, size 0x1, align 1 | MNotSaved
    char _pad_0C2A[0x2]; // offset 0xC2A
    float32 m_flBlendWeight; // offset 0xC2C, size 0x4, align 4
    float32 m_flDefaultFadeScale; // offset 0xC30, size 0x4, align 4
    char _pad_0C34[0x4]; // offset 0xC34
    CUtlVector< Vector > m_ragdollMins; // offset 0xC38, size 0x18, align 8 | MNotSaved
    CUtlVector< Vector > m_ragdollMaxs; // offset 0xC50, size 0x18, align 8 | MNotSaved
    bool m_bShouldDeleteActivationRecord; // offset 0xC68, size 0x1, align 1 | MNotSaved
    char _pad_0C69[0x17]; // offset 0xC69
    CUtlVector< INavObstacle* > m_vecNavObstacles; // offset 0xC80, size 0x18, align 8 | MNotSaved
    char _pad_0C98[0x8]; // offset 0xC98
};
