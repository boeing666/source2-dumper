#pragma once

class CCitadel_Neutral_Attack_BulletToPointModifierVData : public CModifierNeutralAbilityVData /*0x0*/  // sizeof 0x13F0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10E8]; // offset 0x0
    int32 m_nBulletCount; // offset 0x10E8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFireRate; // offset 0x10EC, size 0x4, align 4
    float32 m_flTargetPosRNG; // offset 0x10F0, size 0x4, align 4
    float32 m_flTargetOffsetPerShot; // offset 0x10F4, size 0x4, align 4
    float32 m_flBulletSpeed; // offset 0x10F8, size 0x4, align 4
    float32 m_flNoTargetDistance; // offset 0x10FC, size 0x4, align 4
    float32 m_flLobGravityScale; // offset 0x1100, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flHangTime; // offset 0x1104, size 0x4, align 4 | MPropertyDescription
    float32 m_flModifierDuration; // offset 0x1108, size 0x4, align 4 | MPropertyStartGroup
    char _pad_110C[0x4]; // offset 0x110C
    CEmbeddedSubclass< CCitadelModifier > m_GroundPointModifier; // offset 0x1110, size 0x10, align 8
    float32 m_flImpactEffectRadius; // offset 0x1120, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1124[0x4]; // offset 0x1124
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1128, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // offset 0x1208, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MuzzleFlashParticle; // offset 0x12E8, size 0xE0, align 8 | MPropertyDescription
    CUtlString m_strMuzzleFlashParticleConfig; // offset 0x13C8, size 0x8, align 8 | MPropertyDescription
    CSoundEventName m_ShootSound; // offset 0x13D0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_HitSound; // offset 0x13E0, size 0x10, align 8
};
