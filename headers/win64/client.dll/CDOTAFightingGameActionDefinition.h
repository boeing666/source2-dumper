#pragma once

class CDOTAFightingGameActionDefinition  // sizeof 0x560, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    EFightingGameActionID m_nActionID; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_strCustomActionName; // offset 0x8, size 0x8, align 8
    CUtlString m_pszSequenceName; // offset 0x10, size 0x8, align 8
    CUtlString m_pszIconFile; // offset 0x18, size 0x8, align 8
    CUtlString m_pszSwingSound; // offset 0x20, size 0x8, align 8
    CUtlString m_pszHitSound; // offset 0x28, size 0x8, align 8
    int32 m_nDuration; // offset 0x30, size 0x4, align 4
    AABB_t m_HurtBox; // offset 0x34, size 0x18, align 255
    AABB_t m_HitBox; // offset 0x4C, size 0x18, align 255
    int32 m_nHitBoxStart; // offset 0x64, size 0x4, align 4
    int32 m_nHitBoxDuration; // offset 0x68, size 0x4, align 4
    int32 m_nOnHitFrames; // offset 0x6C, size 0x4, align 4
    int32 m_nOnBlockFrames; // offset 0x70, size 0x4, align 4
    float32 m_flGuardDamage; // offset 0x74, size 0x4, align 4
    float32 m_flChipDamage; // offset 0x78, size 0x4, align 4
    float32 m_flHitDamage; // offset 0x7C, size 0x4, align 4
    float32 m_flHealOnDamage; // offset 0x80, size 0x4, align 4
    char _pad_0084[0x4]; // offset 0x84
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_healOnDamageParticle; // offset 0x88, size 0xE0, align 8
    int32 m_nDashStart; // offset 0x168, size 0x4, align 4
    int32 m_nDashDuration; // offset 0x16C, size 0x4, align 4
    int32 m_nDamageAmpFrames; // offset 0x170, size 0x4, align 4
    float32 m_fDamageAmpPercent; // offset 0x174, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_damageAmpParticle; // offset 0x178, size 0xE0, align 8
    float32 m_flPushbackOnHit; // offset 0x258, size 0x4, align 4
    float32 m_flPushbackOnBlock; // offset 0x25C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_projectileParticle; // offset 0x260, size 0xE0, align 8
    float32 m_flProjectileSpeed; // offset 0x340, size 0x4, align 4
    float32 m_flProjectileRange; // offset 0x344, size 0x4, align 4
    float32 m_flDashSpeedMultiplier; // offset 0x348, size 0x4, align 4
    char _pad_034C[0x4]; // offset 0x34C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_installParticle; // offset 0x350, size 0xE0, align 8
    int32 m_nInstallStart; // offset 0x430, size 0x4, align 4
    int32 m_nInstallFrames; // offset 0x434, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_actionParticle; // offset 0x438, size 0xE0, align 8
    Vector2D m_vActionParticleOffset; // offset 0x518, size 0x8, align 4
    int32 m_nActionParticleStart; // offset 0x520, size 0x4, align 4
    int32 m_nHitStop; // offset 0x524, size 0x4, align 4
    int32 m_nBlockStop; // offset 0x528, size 0x4, align 4
    EFightingGameInvulnerabilityFlags m_nInvulnerabilityFlags; // offset 0x52C, size 0x4, align 4
    int32 m_nInvulnerabilityStart; // offset 0x530, size 0x4, align 4
    int32 m_nInvulnerabilityDuration; // offset 0x534, size 0x4, align 4
    Vector2D m_vCameraShakeScale; // offset 0x538, size 0x8, align 4
    bool m_bSingleUse; // offset 0x540, size 0x1, align 1
    bool m_bNoAttackerPushback; // offset 0x541, size 0x1, align 1
    bool m_bIsSpecialMove; // offset 0x542, size 0x1, align 1
    char _pad_0543[0x5]; // offset 0x543
    CUtlVector< CDOTAFightingGameCancelOptionDefinition > m_vecCancelOptions; // offset 0x548, size 0x18, align 8
};
