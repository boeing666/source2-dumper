#pragma once

class C_CitadelProjectile : public C_BaseModelEntity /*0x0*/  // sizeof 0xAD8, align 0x8 [vtable] (client) {MNetworkIncludeByName MNetworkOverride MNetworkOverride MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9E8]; // offset 0x0
    float32 m_flMaxDistance; // offset 0x9E8, size 0x4, align 4
    char _pad_09EC[0x4]; // offset 0x9EC
    uint64 m_nCachedExcludeFlags; // offset 0x9F0, size 0x8, align 8
    bool m_bInPortalEnvironment; // offset 0x9F8, size 0x1, align 1
    bool m_bHandlingPortalResult; // offset 0x9F9, size 0x1, align 1
    char _pad_09FA[0x2]; // offset 0x9FA
    float32 m_flArmingTime; // offset 0x9FC, size 0x4, align 4
    float32 m_flChargeAmount; // offset 0xA00, size 0x4, align 4
    bool m_bCollideWithThrower; // offset 0xA04, size 0x1, align 1
    bool m_bNewCollideWithThrower; // offset 0xA05, size 0x1, align 1
    char _pad_0A06[0xA]; // offset 0xA06
    float32 m_flTickSoundInterval; // offset 0xA10, size 0x4, align 4
    char _pad_0A14[0x4]; // offset 0xA14
    Vector m_vInitialVelocity; // offset 0xA18, size 0xC, align 4 | MNetworkEnable
    VectorWS m_vInitialPosition; // offset 0xA24, size 0xC, align 4 | MNetworkEnable
    CUtlStringToken m_abilityID; // offset 0xA30, size 0x4, align 4 | MNetworkEnable
    char _pad_0A34[0x4]; // offset 0xA34
    CUtlSymbolLarge m_sParticleName; // offset 0xA38, size 0x8, align 8 | MNetworkEnable
    Vector m_vecSpawnPosition; // offset 0xA40, size 0xC, align 4 | MNetworkEnable
    float32 m_flProjectileSpeed; // offset 0xA4C, size 0x4, align 4 | MNetworkEnable
    float32 m_flMaxLifetime; // offset 0xA50, size 0x4, align 4 | MNetworkEnable
    char _pad_0A54[0x4]; // offset 0xA54
    float32 m_flParticleRadius; // offset 0xA58, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    char _pad_0A5C[0x74]; // offset 0xA5C
    float32 m_flPreviousTimeScale; // offset 0xAD0, size 0x4, align 4
    char _pad_0AD4[0x4]; // offset 0xAD4
};
