#pragma once

class CCitadelProjectile : public CBaseModelEntity /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (server) {MNetworkIncludeByName MNetworkOverride MNetworkOverride MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x7A8]; // offset 0x0
    float32 m_flMaxDistance; // offset 0x7A8, size 0x4, align 4
    char _pad_07AC[0x4]; // offset 0x7AC
    uint64 m_nCachedExcludeFlags; // offset 0x7B0, size 0x8, align 8
    bool m_bInPortalEnvironment; // offset 0x7B8, size 0x1, align 1
    bool m_bHandlingPortalResult; // offset 0x7B9, size 0x1, align 1
    char _pad_07BA[0x2]; // offset 0x7BA
    float32 m_flArmingTime; // offset 0x7BC, size 0x4, align 4
    float32 m_flChargeAmount; // offset 0x7C0, size 0x4, align 4
    bool m_bCollideWithThrower; // offset 0x7C4, size 0x1, align 1
    bool m_bNewCollideWithThrower; // offset 0x7C5, size 0x1, align 1
    char _pad_07C6[0xA]; // offset 0x7C6
    float32 m_flTickSoundInterval; // offset 0x7D0, size 0x4, align 4
    char _pad_07D4[0x4]; // offset 0x7D4
    Vector m_vLastAbsOrigin; // offset 0x7D8, size 0xC, align 4
    Vector m_vLastAbsVelocity; // offset 0x7E4, size 0xC, align 4
    char _pad_07F0[0x18]; // offset 0x7F0
    CUtlVector< CHandle< CBaseEntity > > m_vecTargetToIgnore; // offset 0x808, size 0x18, align 8
    bool m_bDetonateStarted; // offset 0x820, size 0x1, align 1
    bool m_bTouchDisabled; // offset 0x821, size 0x1, align 1
    char _pad_0822[0x2]; // offset 0x822
    Vector m_vInitialVelocity; // offset 0x824, size 0xC, align 4 | MNetworkEnable
    VectorWS m_vInitialPosition; // offset 0x830, size 0xC, align 4 | MNetworkEnable
    CUtlStringToken m_abilityID; // offset 0x83C, size 0x4, align 4 | MNetworkEnable
    CUtlSymbolLarge m_sParticleName; // offset 0x840, size 0x8, align 8 | MNetworkEnable
    Vector m_vecSpawnPosition; // offset 0x848, size 0xC, align 4 | MNetworkEnable
    float32 m_flProjectileSpeed; // offset 0x854, size 0x4, align 4 | MNetworkEnable
    float32 m_flMaxLifetime; // offset 0x858, size 0x4, align 4 | MNetworkEnable
    float32 m_flParticleRadius; // offset 0x85C, size 0x4, align 4 | MNetworkEnable
};
