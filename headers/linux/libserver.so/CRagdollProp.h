#pragma once

class CRagdollProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xE00, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC50]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xC50, size 0x40, align 8
    ragdoll_t m_ragdoll; // offset 0xC90, size 0x50, align 8
    bool m_bStartDisabled; // offset 0xCE0, size 0x1, align 1
    char _pad_0CE1[0x3]; // offset 0xCE1
    float32 m_massScale; // offset 0xCE4, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xCE8, size 0x4, align 4
    char _pad_0CEC[0x4]; // offset 0xCEC
    CNetworkUtlVectorBase< bool > m_ragEnabled; // offset 0xCF0, size 0x18, align 8
    CNetworkUtlVectorBase< Vector > m_ragPos; // offset 0xD08, size 0x18, align 8
    CNetworkUtlVectorBase< QAngle > m_ragAngles; // offset 0xD20, size 0x18, align 8
    uint32 m_lastUpdateTickCount; // offset 0xD38, size 0x4, align 4
    bool m_allAsleep; // offset 0xD3C, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xD3D, size 0x1, align 1
    char _pad_0D3E[0x2]; // offset 0xD3E
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xD40, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xD44, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xD45, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xD46, size 0x1, align 1
    char _pad_0D47[0x1]; // offset 0xD47
    CHandle< CBaseEntity > m_hDamageEntity; // offset 0xD48, size 0x4, align 4
    CHandle< CBaseEntity > m_hKiller; // offset 0xD4C, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xD50, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xD54, size 0x4, align 255
    GameTime_t m_flFadeOutStartTime; // offset 0xD58, size 0x4, align 255
    float32 m_flFadeTime; // offset 0xD5C, size 0x4, align 4
    VectorWS m_vecLastOrigin; // offset 0xD60, size 0xC, align 4
    GameTime_t m_flAwakeTime; // offset 0xD6C, size 0x4, align 255
    GameTime_t m_flLastOriginChangeTime; // offset 0xD70, size 0x4, align 255
    char _pad_0D74[0x4]; // offset 0xD74
    CUtlSymbolLarge m_strOriginClassName; // offset 0xD78, size 0x8, align 8
    CUtlSymbolLarge m_strSourceClassName; // offset 0xD80, size 0x8, align 8
    bool m_bHasBeenPhysgunned; // offset 0xD88, size 0x1, align 1
    bool m_bAllowStretch; // offset 0xD89, size 0x1, align 1 | MNotSaved
    char _pad_0D8A[0x2]; // offset 0xD8A
    float32 m_flBlendWeight; // offset 0xD8C, size 0x4, align 4
    float32 m_flDefaultFadeScale; // offset 0xD90, size 0x4, align 4
    char _pad_0D94[0x4]; // offset 0xD94
    CUtlVector< Vector > m_ragdollMins; // offset 0xD98, size 0x18, align 8 | MNotSaved
    CUtlVector< Vector > m_ragdollMaxs; // offset 0xDB0, size 0x18, align 8 | MNotSaved
    bool m_bShouldDeleteActivationRecord; // offset 0xDC8, size 0x1, align 1 | MNotSaved
    char _pad_0DC9[0x17]; // offset 0xDC9
    CUtlVector< INavObstacle* > m_vecNavObstacles; // offset 0xDE0, size 0x18, align 8 | MNotSaved
    char _pad_0DF8[0x8]; // offset 0xDF8
};
