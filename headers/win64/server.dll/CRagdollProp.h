#pragma once

class CRagdollProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xB20, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x970]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0x970, size 0x40, align 8
    ragdoll_t m_ragdoll; // offset 0x9B0, size 0x50, align 8
    bool m_bStartDisabled; // offset 0xA00, size 0x1, align 1
    char _pad_0A01[0x3]; // offset 0xA01
    float32 m_massScale; // offset 0xA04, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xA08, size 0x4, align 4
    char _pad_0A0C[0x4]; // offset 0xA0C
    CNetworkUtlVectorBase< bool > m_ragEnabled; // offset 0xA10, size 0x18, align 8
    CNetworkUtlVectorBase< Vector > m_ragPos; // offset 0xA28, size 0x18, align 8
    CNetworkUtlVectorBase< QAngle > m_ragAngles; // offset 0xA40, size 0x18, align 8
    uint32 m_lastUpdateTickCount; // offset 0xA58, size 0x4, align 4
    bool m_allAsleep; // offset 0xA5C, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xA5D, size 0x1, align 1
    char _pad_0A5E[0x2]; // offset 0xA5E
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xA60, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xA64, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xA65, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xA66, size 0x1, align 1
    char _pad_0A67[0x1]; // offset 0xA67
    CHandle< CBaseEntity > m_hDamageEntity; // offset 0xA68, size 0x4, align 4
    CHandle< CBaseEntity > m_hKiller; // offset 0xA6C, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xA70, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xA74, size 0x4, align 255
    GameTime_t m_flFadeOutStartTime; // offset 0xA78, size 0x4, align 255
    float32 m_flFadeTime; // offset 0xA7C, size 0x4, align 4
    VectorWS m_vecLastOrigin; // offset 0xA80, size 0xC, align 4
    GameTime_t m_flAwakeTime; // offset 0xA8C, size 0x4, align 255
    GameTime_t m_flLastOriginChangeTime; // offset 0xA90, size 0x4, align 255
    char _pad_0A94[0x4]; // offset 0xA94
    CUtlSymbolLarge m_strOriginClassName; // offset 0xA98, size 0x8, align 8
    CUtlSymbolLarge m_strSourceClassName; // offset 0xAA0, size 0x8, align 8
    bool m_bHasBeenPhysgunned; // offset 0xAA8, size 0x1, align 1
    bool m_bAllowStretch; // offset 0xAA9, size 0x1, align 1 | MNotSaved
    char _pad_0AAA[0x2]; // offset 0xAAA
    float32 m_flBlendWeight; // offset 0xAAC, size 0x4, align 4
    float32 m_flDefaultFadeScale; // offset 0xAB0, size 0x4, align 4
    char _pad_0AB4[0x4]; // offset 0xAB4
    CUtlVector< Vector > m_ragdollMins; // offset 0xAB8, size 0x18, align 8 | MNotSaved
    CUtlVector< Vector > m_ragdollMaxs; // offset 0xAD0, size 0x18, align 8 | MNotSaved
    bool m_bShouldDeleteActivationRecord; // offset 0xAE8, size 0x1, align 1 | MNotSaved
    char _pad_0AE9[0x17]; // offset 0xAE9
    CUtlVector< INavObstacle* > m_vecNavObstacles; // offset 0xB00, size 0x18, align 8 | MNotSaved
    char _pad_0B18[0x8]; // offset 0xB18
};
