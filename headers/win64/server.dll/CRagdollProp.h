#pragma once

class CRagdollProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xBE0, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xAA0]; // offset 0x0
    ragdoll_t m_ragdoll; // offset 0xAA0, size 0x50, align 255
    bool m_bStartDisabled; // offset 0xAF0, size 0x1, align 1
    char _pad_0AF1[0x7]; // offset 0xAF1
    CNetworkUtlVectorBase< bool > m_ragEnabled; // offset 0xAF8, size 0x18, align 8 | MNetworkEnable
    CNetworkUtlVectorBase< Vector > m_ragPos; // offset 0xB10, size 0x18, align 8 | MNetworkEnable MNetworkEncoder
    CNetworkUtlVectorBase< QAngle > m_ragAngles; // offset 0xB28, size 0x18, align 8 | MNetworkEnable MNetworkEncoder MNetworkBitCount
    uint32 m_lastUpdateTickCount; // offset 0xB40, size 0x4, align 4
    bool m_allAsleep; // offset 0xB44, size 0x1, align 1
    bool m_bFirstCollisionAfterLaunch; // offset 0xB45, size 0x1, align 1
    char _pad_0B46[0x2]; // offset 0xB46
    CHandle< CBaseEntity > m_hDamageEntity; // offset 0xB48, size 0x4, align 4
    CHandle< CBaseEntity > m_hKiller; // offset 0xB4C, size 0x4, align 4
    CHandle< CBasePlayerPawn > m_hPhysicsAttacker; // offset 0xB50, size 0x4, align 4
    GameTime_t m_flLastPhysicsInfluenceTime; // offset 0xB54, size 0x4, align 255
    GameTime_t m_flFadeOutStartTime; // offset 0xB58, size 0x4, align 255
    float32 m_flFadeTime; // offset 0xB5C, size 0x4, align 4
    VectorWS m_vecLastOrigin; // offset 0xB60, size 0xC, align 4
    GameTime_t m_flAwakeTime; // offset 0xB6C, size 0x4, align 255
    GameTime_t m_flLastOriginChangeTime; // offset 0xB70, size 0x4, align 255
    char _pad_0B74[0x4]; // offset 0xB74
    CUtlSymbolLarge m_strOriginClassName; // offset 0xB78, size 0x8, align 8
    CUtlSymbolLarge m_strSourceClassName; // offset 0xB80, size 0x8, align 8
    bool m_bHasBeenPhysgunned; // offset 0xB88, size 0x1, align 1
    bool m_bAllowStretch; // offset 0xB89, size 0x1, align 1 | MNotSaved
    char _pad_0B8A[0x2]; // offset 0xB8A
    float32 m_flBlendWeight; // offset 0xB8C, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    float32 m_flDefaultFadeScale; // offset 0xB90, size 0x4, align 4
    char _pad_0B94[0x4]; // offset 0xB94
    CUtlVector< Vector > m_ragdollMins; // offset 0xB98, size 0x18, align 8 | MNotSaved
    CUtlVector< Vector > m_ragdollMaxs; // offset 0xBB0, size 0x18, align 8 | MNotSaved
    bool m_bShouldDeleteActivationRecord; // offset 0xBC8, size 0x1, align 1 | MNotSaved
    char _pad_0BC9[0x17]; // offset 0xBC9
};
