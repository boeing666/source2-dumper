#pragma once

class CRagdollProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xE10, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC60]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xC60, size 0x40, align 8
    ragdoll_t m_ragdoll; // offset 0xCA0, size 0x50, align 8
    bool m_bStartDisabled; // offset 0xCF0, size 0x1, align 1
    char _pad_0CF1[0x3]; // offset 0xCF1
    float32 m_massScale; // offset 0xCF4, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xCF8, size 0x4, align 4
    char _pad_0CFC[0x4]; // offset 0xCFC
    CNetworkUtlVectorBase< bool > m_ragEnabled; // offset 0xD00, size 0x18, align 8
    CNetworkUtlVectorBase< Vector > m_ragPos; // offset 0xD18, size 0x18, align 8
    CNetworkUtlVectorBase< QAngle > m_ragAngles; // offset 0xD30, size 0x18, align 8
    uint32 m_lastUpdateTickCount; // offset 0xD48, size 0x4, align 4
    bool m_allAsleep; // offset 0xD4C, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xD4D, size 0x1, align 1
    char _pad_0D4E[0x2]; // offset 0xD4E
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xD50, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xD54, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xD55, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xD56, size 0x1, align 1
    char _pad_0D57[0x1]; // offset 0xD57
    CHandle< CBaseEntity > m_hDamageEntity; // offset 0xD58, size 0x4, align 4
    CHandle< CBaseEntity > m_hKiller; // offset 0xD5C, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xD60, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xD64, size 0x4, align 255
    GameTime_t m_flFadeOutStartTime; // offset 0xD68, size 0x4, align 255
    float32 m_flFadeTime; // offset 0xD6C, size 0x4, align 4
    VectorWS m_vecLastOrigin; // offset 0xD70, size 0xC, align 4
    GameTime_t m_flAwakeTime; // offset 0xD7C, size 0x4, align 255
    GameTime_t m_flLastOriginChangeTime; // offset 0xD80, size 0x4, align 255
    char _pad_0D84[0x4]; // offset 0xD84
    CUtlSymbolLarge m_strOriginClassName; // offset 0xD88, size 0x8, align 8
    CUtlSymbolLarge m_strSourceClassName; // offset 0xD90, size 0x8, align 8
    bool m_bHasBeenPhysgunned; // offset 0xD98, size 0x1, align 1
    bool m_bAllowStretch; // offset 0xD99, size 0x1, align 1 | MNotSaved
    char _pad_0D9A[0x2]; // offset 0xD9A
    float32 m_flBlendWeight; // offset 0xD9C, size 0x4, align 4
    float32 m_flDefaultFadeScale; // offset 0xDA0, size 0x4, align 4
    char _pad_0DA4[0x4]; // offset 0xDA4
    CUtlVector< Vector > m_ragdollMins; // offset 0xDA8, size 0x18, align 8 | MNotSaved
    CUtlVector< Vector > m_ragdollMaxs; // offset 0xDC0, size 0x18, align 8 | MNotSaved
    bool m_bShouldDeleteActivationRecord; // offset 0xDD8, size 0x1, align 1 | MNotSaved
    char _pad_0DD9[0x17]; // offset 0xDD9
    CUtlVector< INavObstacle* > m_vecNavObstacles; // offset 0xDF0, size 0x18, align 8 | MNotSaved
    char _pad_0E08[0x8]; // offset 0xE08
};
