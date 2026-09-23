#pragma once

class CRagdollProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xEE0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD30]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xD30, size 0x40, align 8
    ragdoll_t m_ragdoll; // offset 0xD70, size 0x50, align 8
    bool m_bStartDisabled; // offset 0xDC0, size 0x1, align 1
    char _pad_0DC1[0x3]; // offset 0xDC1
    float32 m_massScale; // offset 0xDC4, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xDC8, size 0x4, align 4
    char _pad_0DCC[0x4]; // offset 0xDCC
    CNetworkUtlVectorBase< bool > m_ragEnabled; // offset 0xDD0, size 0x18, align 8
    CNetworkUtlVectorBase< Vector > m_ragPos; // offset 0xDE8, size 0x18, align 8
    CNetworkUtlVectorBase< QAngle > m_ragAngles; // offset 0xE00, size 0x18, align 8
    uint32 m_lastUpdateTickCount; // offset 0xE18, size 0x4, align 4
    bool m_allAsleep; // offset 0xE1C, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xE1D, size 0x1, align 1
    char _pad_0E1E[0x2]; // offset 0xE1E
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xE20, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xE24, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xE25, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xE26, size 0x1, align 1
    char _pad_0E27[0x1]; // offset 0xE27
    CHandle< CBaseEntity > m_hDamageEntity; // offset 0xE28, size 0x4, align 4
    CHandle< CBaseEntity > m_hKiller; // offset 0xE2C, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xE30, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xE34, size 0x4, align 255
    GameTime_t m_flFadeOutStartTime; // offset 0xE38, size 0x4, align 255
    float32 m_flFadeTime; // offset 0xE3C, size 0x4, align 4
    VectorWS m_vecLastOrigin; // offset 0xE40, size 0xC, align 4
    GameTime_t m_flAwakeTime; // offset 0xE4C, size 0x4, align 255
    GameTime_t m_flLastOriginChangeTime; // offset 0xE50, size 0x4, align 255
    char _pad_0E54[0x4]; // offset 0xE54
    CUtlSymbolLarge m_strOriginClassName; // offset 0xE58, size 0x8, align 8
    CUtlSymbolLarge m_strSourceClassName; // offset 0xE60, size 0x8, align 8
    bool m_bHasBeenPhysgunned; // offset 0xE68, size 0x1, align 1
    bool m_bAllowStretch; // offset 0xE69, size 0x1, align 1 | MNotSaved
    char _pad_0E6A[0x2]; // offset 0xE6A
    float32 m_flBlendWeight; // offset 0xE6C, size 0x4, align 4
    float32 m_flDefaultFadeScale; // offset 0xE70, size 0x4, align 4
    char _pad_0E74[0x4]; // offset 0xE74
    CUtlVector< Vector > m_ragdollMins; // offset 0xE78, size 0x18, align 8 | MNotSaved
    CUtlVector< Vector > m_ragdollMaxs; // offset 0xE90, size 0x18, align 8 | MNotSaved
    bool m_bShouldDeleteActivationRecord; // offset 0xEA8, size 0x1, align 1 | MNotSaved
    char _pad_0EA9[0x17]; // offset 0xEA9
    CUtlVector< INavObstacle* > m_vecNavObstacles; // offset 0xEC0, size 0x18, align 8 | MNotSaved
    char _pad_0ED8[0x8]; // offset 0xED8
};
