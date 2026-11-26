#pragma once

class CCitadel_Neutral_Attack_BulletToPointModifierVData : public CModifierNeutralAbilityVData /*0x0*/  // sizeof 0x1450, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1140]; // offset 0x0
    int32 m_nBulletCount; // offset 0x1140, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFireRate; // offset 0x1144, size 0x4, align 4
    float32 m_flTargetPosRNG; // offset 0x1148, size 0x4, align 4
    float32 m_flTargetOffsetPerShot; // offset 0x114C, size 0x4, align 4
    float32 m_flBulletSpeed; // offset 0x1150, size 0x4, align 4
    float32 m_flNoTargetDistance; // offset 0x1154, size 0x4, align 4
    float32 m_flLobGravityScale; // offset 0x1158, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flHangTime; // offset 0x115C, size 0x4, align 4 | MPropertyDescription
    float32 m_flModifierDuration; // offset 0x1160, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1164[0x4]; // offset 0x1164
    CEmbeddedSubclass< CCitadelModifier > m_GroundPointModifier; // offset 0x1168, size 0x10, align 8
    float32 m_flImpactEffectRadius; // offset 0x1178, size 0x4, align 4 | MPropertyStartGroup
    char _pad_117C[0x4]; // offset 0x117C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1180, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // offset 0x1260, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MuzzleFlashParticle; // offset 0x1340, size 0xE0, align 8 | MPropertyDescription
    CUtlString m_strMuzzleFlashParticleConfig; // offset 0x1420, size 0x8, align 8 | MPropertyDescription
    bool m_bAG2UseActionShootForAttack; // offset 0x1428, size 0x1, align 1 | MPropertyDescription
    char _pad_1429[0x7]; // offset 0x1429
    CSoundEventName m_ShootSound; // offset 0x1430, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_HitSound; // offset 0x1440, size 0x10, align 8
};
