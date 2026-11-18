#pragma once

class CRagdollProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xCB0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB00]; // offset 0x0
    CPropDataComponent m_CPropDataComponent; // offset 0xB00, size 0x40, align 8
    ragdoll_t m_ragdoll; // offset 0xB40, size 0x50, align 8
    bool m_bStartDisabled; // offset 0xB90, size 0x1, align 1
    char _pad_0B91[0x3]; // offset 0xB91
    float32 m_massScale; // offset 0xB94, size 0x4, align 4
    float32 m_buoyancyScale; // offset 0xB98, size 0x4, align 4
    char _pad_0B9C[0x4]; // offset 0xB9C
    CNetworkUtlVectorBase< bool > m_ragEnabled; // offset 0xBA0, size 0x18, align 8
    CNetworkUtlVectorBase< Vector > m_ragPos; // offset 0xBB8, size 0x18, align 8
    CNetworkUtlVectorBase< QAngle > m_ragAngles; // offset 0xBD0, size 0x18, align 8
    uint32 m_lastUpdateTickCount; // offset 0xBE8, size 0x4, align 4
    bool m_allAsleep; // offset 0xBEC, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xBED, size 0x1, align 1
    char _pad_0BEE[0x2]; // offset 0xBEE
    INavObstacle::NavObstacleType_t m_nNavObstacleType; // offset 0xBF0, size 0x4, align 4
    bool m_bUpdateNavWhenMoving; // offset 0xBF4, size 0x1, align 1
    bool m_bForceNavObstacleCut; // offset 0xBF5, size 0x1, align 1
    bool m_bAttachedToReferenceFrame; // offset 0xBF6, size 0x1, align 1
    char _pad_0BF7[0x1]; // offset 0xBF7
    CHandle< CBaseEntity > m_hDamageEntity; // offset 0xBF8, size 0x4, align 4
    CHandle< CBaseEntity > m_hKiller; // offset 0xBFC, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xC00, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xC04, size 0x4, align 255
    GameTime_t m_flFadeOutStartTime; // offset 0xC08, size 0x4, align 255
    float32 m_flFadeTime; // offset 0xC0C, size 0x4, align 4
    VectorWS m_vecLastOrigin; // offset 0xC10, size 0xC, align 4
    GameTime_t m_flAwakeTime; // offset 0xC1C, size 0x4, align 255
    GameTime_t m_flLastOriginChangeTime; // offset 0xC20, size 0x4, align 255
    char _pad_0C24[0x4]; // offset 0xC24
    CUtlSymbolLarge m_strOriginClassName; // offset 0xC28, size 0x8, align 8
    CUtlSymbolLarge m_strSourceClassName; // offset 0xC30, size 0x8, align 8
    bool m_bHasBeenPhysgunned; // offset 0xC38, size 0x1, align 1
    bool m_bAllowStretch; // offset 0xC39, size 0x1, align 1 | MNotSaved
    char _pad_0C3A[0x2]; // offset 0xC3A
    float32 m_flBlendWeight; // offset 0xC3C, size 0x4, align 4
    float32 m_flDefaultFadeScale; // offset 0xC40, size 0x4, align 4
    char _pad_0C44[0x4]; // offset 0xC44
    CUtlVector< Vector > m_ragdollMins; // offset 0xC48, size 0x18, align 8 | MNotSaved
    CUtlVector< Vector > m_ragdollMaxs; // offset 0xC60, size 0x18, align 8 | MNotSaved
    bool m_bShouldDeleteActivationRecord; // offset 0xC78, size 0x1, align 1 | MNotSaved
    char _pad_0C79[0x17]; // offset 0xC79
    CUtlVector< INavObstacle* > m_vecNavObstacles; // offset 0xC90, size 0x18, align 8 | MNotSaved
    char _pad_0CA8[0x8]; // offset 0xCA8
};
