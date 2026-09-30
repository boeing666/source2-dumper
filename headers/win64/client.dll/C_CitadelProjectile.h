#pragma once

class C_CitadelProjectile : public C_BaseModelEntity /*0x0*/  // sizeof 0xCE8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBF0]; // offset 0x0
    float32 m_flMaxDistance; // offset 0xBF0, size 0x4, align 4
    char _pad_0BF4[0x4]; // offset 0xBF4
    uint64 m_nCachedExcludeFlags; // offset 0xBF8, size 0x8, align 8
    bool m_bInPortalEnvironment; // offset 0xC00, size 0x1, align 1
    bool m_bHandlingPortalResult; // offset 0xC01, size 0x1, align 1
    char _pad_0C02[0x2]; // offset 0xC02
    float32 m_flArmingTime; // offset 0xC04, size 0x4, align 4
    float32 m_flChargeAmount; // offset 0xC08, size 0x4, align 4
    bool m_bCollideWithThrower; // offset 0xC0C, size 0x1, align 1
    bool m_bNewCollideWithThrower; // offset 0xC0D, size 0x1, align 1
    char _pad_0C0E[0xA]; // offset 0xC0E
    float32 m_flTickSoundInterval; // offset 0xC18, size 0x4, align 4
    char _pad_0C1C[0x4]; // offset 0xC1C
    int32 m_nNumDetonations; // offset 0xC20, size 0x4, align 4
    int32 m_nDetonationsLeft; // offset 0xC24, size 0x4, align 4
    Vector m_vInitialVelocity; // offset 0xC28, size 0xC, align 4
    VectorWS m_vInitialPosition; // offset 0xC34, size 0xC, align 4
    CUtlStringToken m_abilityID; // offset 0xC40, size 0x4, align 4
    char _pad_0C44[0x4]; // offset 0xC44
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hParticleDef; // offset 0xC48, size 0x8, align 8
    VectorWS m_vecSpawnPosition; // offset 0xC50, size 0xC, align 4
    float32 m_flProjectileSpeed; // offset 0xC5C, size 0x4, align 4
    float32 m_flMaxLifetime; // offset 0xC60, size 0x4, align 4
    char _pad_0C64[0x4]; // offset 0xC64
    float32 m_flParticleRadius; // offset 0xC68, size 0x4, align 4
    char _pad_0C6C[0x74]; // offset 0xC6C
    float32 m_flPreviousTimeScale; // offset 0xCE0, size 0x4, align 4
    char _pad_0CE4[0x4]; // offset 0xCE4
};
