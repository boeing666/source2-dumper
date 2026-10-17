#pragma once

class CRagdollProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xEF0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD40]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xD40, size 0x40, align 8
    ragdoll_t m_ragdoll; // offset 0xD80, size 0x50, align 8
    bool m_bStartDisabled; // offset 0xDD0, size 0x1, align 1
    char _pad_0DD1[0x3]; // offset 0xDD1
    float32 m_massScale; // offset 0xDD4, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xDD8, size 0x4, align 4
    char _pad_0DDC[0x4]; // offset 0xDDC
    CNetworkUtlVectorBase< bool > m_ragEnabled; // offset 0xDE0, size 0x18, align 8
    CNetworkUtlVectorBase< Vector > m_ragPos; // offset 0xDF8, size 0x18, align 8
    CNetworkUtlVectorBase< QAngle > m_ragAngles; // offset 0xE10, size 0x18, align 8
    uint32 m_lastUpdateTickCount; // offset 0xE28, size 0x4, align 4
    bool m_allAsleep; // offset 0xE2C, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xE2D, size 0x1, align 1
    char _pad_0E2E[0x2]; // offset 0xE2E
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xE30, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xE34, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xE35, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xE36, size 0x1, align 1
    char _pad_0E37[0x1]; // offset 0xE37
    CHandle< CBaseEntity > m_hDamageEntity; // offset 0xE38, size 0x4, align 4
    CHandle< CBaseEntity > m_hKiller; // offset 0xE3C, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xE40, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xE44, size 0x4, align 255
    GameTime_t m_flFadeOutStartTime; // offset 0xE48, size 0x4, align 255
    float32 m_flFadeTime; // offset 0xE4C, size 0x4, align 4
    VectorWS m_vecLastOrigin; // offset 0xE50, size 0xC, align 4
    GameTime_t m_flAwakeTime; // offset 0xE5C, size 0x4, align 255
    GameTime_t m_flLastOriginChangeTime; // offset 0xE60, size 0x4, align 255
    char _pad_0E64[0x4]; // offset 0xE64
    CUtlSymbolLarge m_strOriginClassName; // offset 0xE68, size 0x8, align 8
    CUtlSymbolLarge m_strSourceClassName; // offset 0xE70, size 0x8, align 8
    bool m_bHasBeenPhysgunned; // offset 0xE78, size 0x1, align 1
    bool m_bAllowStretch; // offset 0xE79, size 0x1, align 1 | MNotSaved
    char _pad_0E7A[0x2]; // offset 0xE7A
    float32 m_flBlendWeight; // offset 0xE7C, size 0x4, align 4
    float32 m_flDefaultFadeScale; // offset 0xE80, size 0x4, align 4
    char _pad_0E84[0x4]; // offset 0xE84
    CUtlVector< Vector > m_ragdollMins; // offset 0xE88, size 0x18, align 8 | MNotSaved
    CUtlVector< Vector > m_ragdollMaxs; // offset 0xEA0, size 0x18, align 8 | MNotSaved
    bool m_bShouldDeleteActivationRecord; // offset 0xEB8, size 0x1, align 1 | MNotSaved
    char _pad_0EB9[0x17]; // offset 0xEB9
    CUtlVector< INavObstacle* > m_vecNavObstacles; // offset 0xED0, size 0x18, align 8 | MNotSaved
    char _pad_0EE8[0x8]; // offset 0xEE8
};
