#pragma once

class CCitadelProjectile : public CBaseModelEntity /*0x0*/  // sizeof 0x968, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8A0]; // offset 0x0
    float32 m_flMaxDistance; // offset 0x8A0, size 0x4, align 4
    char _pad_08A4[0x4]; // offset 0x8A4
    uint64 m_nCachedExcludeFlags; // offset 0x8A8, size 0x8, align 8
    bool m_bInPortalEnvironment; // offset 0x8B0, size 0x1, align 1
    bool m_bHandlingPortalResult; // offset 0x8B1, size 0x1, align 1
    char _pad_08B2[0x2]; // offset 0x8B2
    float32 m_flArmingTime; // offset 0x8B4, size 0x4, align 4
    float32 m_flChargeAmount; // offset 0x8B8, size 0x4, align 4
    bool m_bCollideWithThrower; // offset 0x8BC, size 0x1, align 1
    bool m_bNewCollideWithThrower; // offset 0x8BD, size 0x1, align 1
    char _pad_08BE[0xA]; // offset 0x8BE
    float32 m_flTickSoundInterval; // offset 0x8C8, size 0x4, align 4
    char _pad_08CC[0x4]; // offset 0x8CC
    int32 m_nNumDetonations; // offset 0x8D0, size 0x4, align 4
    int32 m_nDetonationsLeft; // offset 0x8D4, size 0x4, align 4
    VectorWS m_vLastAbsOrigin; // offset 0x8D8, size 0xC, align 4
    Vector m_vLastAbsVelocity; // offset 0x8E4, size 0xC, align 4
    char _pad_08F0[0x20]; // offset 0x8F0
    CUtlVector< CHandle< CBaseEntity > > m_vecTargetToIgnore; // offset 0x910, size 0x18, align 8
    bool m_bDetonateStarted; // offset 0x928, size 0x1, align 1
    bool m_bTouchDisabled; // offset 0x929, size 0x1, align 1
    char _pad_092A[0x2]; // offset 0x92A
    Vector m_vInitialVelocity; // offset 0x92C, size 0xC, align 4
    VectorWS m_vInitialPosition; // offset 0x938, size 0xC, align 4
    CUtlStringToken m_abilityID; // offset 0x944, size 0x4, align 4
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hParticleDef; // offset 0x948, size 0x8, align 8
    VectorWS m_vecSpawnPosition; // offset 0x950, size 0xC, align 4
    float32 m_flProjectileSpeed; // offset 0x95C, size 0x4, align 4
    float32 m_flMaxLifetime; // offset 0x960, size 0x4, align 4
    float32 m_flParticleRadius; // offset 0x964, size 0x4, align 4
};
