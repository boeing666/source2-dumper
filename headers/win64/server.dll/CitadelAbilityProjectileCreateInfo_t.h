#pragma once

struct CitadelAbilityProjectileCreateInfo_t  // sizeof 0x130, align 0xFF (server)
{
    VectorWS m_vecCreatePosition; // offset 0x0, size 0xC, align 4
    QAngle m_angAngles; // offset 0xC, size 0xC, align 4
    Vector m_vecVelocity; // offset 0x18, size 0xC, align 4
    float32 m_flLifeTime; // offset 0x24, size 0x4, align 4
    bool m_bWantsInitialVelocity; // offset 0x28, size 0x1, align 1
    char _pad_0029[0x3]; // offset 0x29
    float32 m_flChargeAmount; // offset 0x2C, size 0x4, align 4
    CUtlString m_sOverrideClassName; // offset 0x30, size 0x8, align 8
    bool m_bShouldHitThrower; // offset 0x38, size 0x1, align 1
    bool m_bLagCompensatePosition; // offset 0x39, size 0x1, align 1
    char _pad_003A[0x2]; // offset 0x3A
    float32 m_flHitThrowerDelay; // offset 0x3C, size 0x4, align 4
    CUtlString m_sModelOverrideName; // offset 0x40, size 0x8, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sTrailParticleOverrideName; // offset 0x48, size 0xE0, align 8
    int32 m_nNumDetonations; // offset 0x128, size 0x4, align 4
    char _pad_012C[0x4]; // offset 0x12C
};
