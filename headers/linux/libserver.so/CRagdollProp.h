#pragma once

class CRagdollProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xF80, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xDD8]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xDD8, size 0x40, align 8
    ragdoll_t m_ragdoll; // offset 0xE18, size 0x50, align 8
    bool m_bStartDisabled; // offset 0xE68, size 0x1, align 1
    char _pad_0E69[0x3]; // offset 0xE69
    float32 m_massScale; // offset 0xE6C, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xE70, size 0x4, align 4
    char _pad_0E74[0x4]; // offset 0xE74
    CNetworkUtlVectorBase< bool > m_ragEnabled; // offset 0xE78, size 0x18, align 8
    CNetworkUtlVectorBase< Vector > m_ragPos; // offset 0xE90, size 0x18, align 8
    CNetworkUtlVectorBase< QAngle > m_ragAngles; // offset 0xEA8, size 0x18, align 8
    uint32 m_lastUpdateTickCount; // offset 0xEC0, size 0x4, align 4
    bool m_allAsleep; // offset 0xEC4, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xEC5, size 0x1, align 1
    char _pad_0EC6[0x2]; // offset 0xEC6
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xEC8, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xECC, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xECD, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xECE, size 0x1, align 1
    char _pad_0ECF[0x1]; // offset 0xECF
    CHandle< CBaseEntity > m_hDamageEntity; // offset 0xED0, size 0x4, align 4
    CHandle< CBaseEntity > m_hKiller; // offset 0xED4, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xED8, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xEDC, size 0x4, align 255
    GameTime_t m_flFadeOutStartTime; // offset 0xEE0, size 0x4, align 255
    float32 m_flFadeTime; // offset 0xEE4, size 0x4, align 4
    VectorWS m_vecLastOrigin; // offset 0xEE8, size 0xC, align 4
    GameTime_t m_flAwakeTime; // offset 0xEF4, size 0x4, align 255
    GameTime_t m_flLastOriginChangeTime; // offset 0xEF8, size 0x4, align 255
    char _pad_0EFC[0x4]; // offset 0xEFC
    CUtlSymbolLarge m_strOriginClassName; // offset 0xF00, size 0x8, align 8
    CUtlSymbolLarge m_strSourceClassName; // offset 0xF08, size 0x8, align 8
    bool m_bHasBeenPhysgunned; // offset 0xF10, size 0x1, align 1
    bool m_bAllowStretch; // offset 0xF11, size 0x1, align 1 | MNotSaved
    char _pad_0F12[0x2]; // offset 0xF12
    float32 m_flBlendWeight; // offset 0xF14, size 0x4, align 4
    float32 m_flDefaultFadeScale; // offset 0xF18, size 0x4, align 4
    char _pad_0F1C[0x4]; // offset 0xF1C
    CUtlVector< Vector > m_ragdollMins; // offset 0xF20, size 0x18, align 8 | MNotSaved
    CUtlVector< Vector > m_ragdollMaxs; // offset 0xF38, size 0x18, align 8 | MNotSaved
    bool m_bShouldDeleteActivationRecord; // offset 0xF50, size 0x1, align 1 | MNotSaved
    char _pad_0F51[0x17]; // offset 0xF51
    CUtlVector< INavObstacle* > m_vecNavObstacles; // offset 0xF68, size 0x18, align 8 | MNotSaved
};
