#pragma once

class CCitadel_Neutral_Attack_BulletToPointModifierVData : public CModifierNeutralAbilityVData /*0x0*/  // sizeof 0x13C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10B8]; // offset 0x0
    int32 m_nBulletCount; // offset 0x10B8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFireRate; // offset 0x10BC, size 0x4, align 4
    float32 m_flTargetPosRNG; // offset 0x10C0, size 0x4, align 4
    float32 m_flTargetOffsetPerShot; // offset 0x10C4, size 0x4, align 4
    float32 m_flBulletSpeed; // offset 0x10C8, size 0x4, align 4
    float32 m_flNoTargetDistance; // offset 0x10CC, size 0x4, align 4
    float32 m_flLobGravityScale; // offset 0x10D0, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flHangTime; // offset 0x10D4, size 0x4, align 4 | MPropertyDescription
    float32 m_flModifierDuration; // offset 0x10D8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_10DC[0x4]; // offset 0x10DC
    CEmbeddedSubclass< CCitadelModifier > m_GroundPointModifier; // offset 0x10E0, size 0x10, align 8
    float32 m_flImpactEffectRadius; // offset 0x10F0, size 0x4, align 4 | MPropertyStartGroup
    char _pad_10F4[0x4]; // offset 0x10F4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x10F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // offset 0x11D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MuzzleFlashParticle; // offset 0x12B8, size 0xE0, align 8 | MPropertyDescription
    CUtlString m_strMuzzleFlashParticleConfig; // offset 0x1398, size 0x8, align 8 | MPropertyDescription
    CSoundEventName m_ShootSound; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_HitSound; // offset 0x13B0, size 0x10, align 8
};
