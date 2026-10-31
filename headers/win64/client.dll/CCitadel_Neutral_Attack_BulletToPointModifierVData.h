#pragma once

class CCitadel_Neutral_Attack_BulletToPointModifierVData : public CModifierNeutralAbilityVData /*0x0*/  // sizeof 0x1408, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10F8]; // offset 0x0
    int32 m_nBulletCount; // offset 0x10F8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFireRate; // offset 0x10FC, size 0x4, align 4
    float32 m_flTargetPosRNG; // offset 0x1100, size 0x4, align 4
    float32 m_flTargetOffsetPerShot; // offset 0x1104, size 0x4, align 4
    float32 m_flBulletSpeed; // offset 0x1108, size 0x4, align 4
    float32 m_flNoTargetDistance; // offset 0x110C, size 0x4, align 4
    float32 m_flLobGravityScale; // offset 0x1110, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flHangTime; // offset 0x1114, size 0x4, align 4 | MPropertyDescription
    float32 m_flModifierDuration; // offset 0x1118, size 0x4, align 4 | MPropertyStartGroup
    char _pad_111C[0x4]; // offset 0x111C
    CEmbeddedSubclass< CCitadelModifier > m_GroundPointModifier; // offset 0x1120, size 0x10, align 8
    float32 m_flImpactEffectRadius; // offset 0x1130, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1134[0x4]; // offset 0x1134
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1138, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // offset 0x1218, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MuzzleFlashParticle; // offset 0x12F8, size 0xE0, align 8 | MPropertyDescription
    CUtlString m_strMuzzleFlashParticleConfig; // offset 0x13D8, size 0x8, align 8 | MPropertyDescription
    bool m_bAG2UseActionShootForAttack; // offset 0x13E0, size 0x1, align 1 | MPropertyDescription
    char _pad_13E1[0x7]; // offset 0x13E1
    CSoundEventName m_ShootSound; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_HitSound; // offset 0x13F8, size 0x10, align 8
};
