#pragma once

class CRagdollProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xB30, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x980]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0x980, size 0x40, align 8
    ragdoll_t m_ragdoll; // offset 0x9C0, size 0x50, align 8
    bool m_bStartDisabled; // offset 0xA10, size 0x1, align 1
    char _pad_0A11[0x3]; // offset 0xA11
    float32 m_massScale; // offset 0xA14, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xA18, size 0x4, align 4
    char _pad_0A1C[0x4]; // offset 0xA1C
    CNetworkUtlVectorBase< bool > m_ragEnabled; // offset 0xA20, size 0x18, align 8
    CNetworkUtlVectorBase< Vector > m_ragPos; // offset 0xA38, size 0x18, align 8
    CNetworkUtlVectorBase< QAngle > m_ragAngles; // offset 0xA50, size 0x18, align 8
    uint32 m_lastUpdateTickCount; // offset 0xA68, size 0x4, align 4
    bool m_allAsleep; // offset 0xA6C, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xA6D, size 0x1, align 1
    char _pad_0A6E[0x2]; // offset 0xA6E
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xA70, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xA74, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xA75, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xA76, size 0x1, align 1
    char _pad_0A77[0x1]; // offset 0xA77
    CHandle< CBaseEntity > m_hDamageEntity; // offset 0xA78, size 0x4, align 4
    CHandle< CBaseEntity > m_hKiller; // offset 0xA7C, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xA80, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xA84, size 0x4, align 255
    GameTime_t m_flFadeOutStartTime; // offset 0xA88, size 0x4, align 255
    float32 m_flFadeTime; // offset 0xA8C, size 0x4, align 4
    VectorWS m_vecLastOrigin; // offset 0xA90, size 0xC, align 4
    GameTime_t m_flAwakeTime; // offset 0xA9C, size 0x4, align 255
    GameTime_t m_flLastOriginChangeTime; // offset 0xAA0, size 0x4, align 255
    char _pad_0AA4[0x4]; // offset 0xAA4
    CUtlSymbolLarge m_strOriginClassName; // offset 0xAA8, size 0x8, align 8
    CUtlSymbolLarge m_strSourceClassName; // offset 0xAB0, size 0x8, align 8
    bool m_bHasBeenPhysgunned; // offset 0xAB8, size 0x1, align 1
    bool m_bAllowStretch; // offset 0xAB9, size 0x1, align 1 | MNotSaved
    char _pad_0ABA[0x2]; // offset 0xABA
    float32 m_flBlendWeight; // offset 0xABC, size 0x4, align 4
    float32 m_flDefaultFadeScale; // offset 0xAC0, size 0x4, align 4
    char _pad_0AC4[0x4]; // offset 0xAC4
    CUtlVector< Vector > m_ragdollMins; // offset 0xAC8, size 0x18, align 8 | MNotSaved
    CUtlVector< Vector > m_ragdollMaxs; // offset 0xAE0, size 0x18, align 8 | MNotSaved
    bool m_bShouldDeleteActivationRecord; // offset 0xAF8, size 0x1, align 1 | MNotSaved
    char _pad_0AF9[0x17]; // offset 0xAF9
    CUtlVector< INavObstacle* > m_vecNavObstacles; // offset 0xB10, size 0x18, align 8 | MNotSaved
    char _pad_0B28[0x8]; // offset 0xB28
};
