#pragma once

class CCitadel_Ability_DeadpackPrimaryWeaponChargeVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1C00, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x16D0]; // offset 0x0
    float32 m_flExplosionRadiusInnerFraction; // offset 0x16D0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flExplosionDamageScaleAtMaxRadius; // offset 0x16D4, size 0x4, align 4
    float32 m_flRocketJumpExtraRadiusMeters; // offset 0x16D8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRocketJumpForceMin; // offset 0x16DC, size 0x4, align 4
    float32 m_flRocketJumpForceMax; // offset 0x16E0, size 0x4, align 4
    float32 m_flRocketJumpForceUpBias; // offset 0x16E4, size 0x4, align 4
    float32 m_flRocketJumpForceCrouchMultiplier; // offset 0x16E8, size 0x4, align 4
    float32 m_flRocketJumpForceWallMultiplier; // offset 0x16EC, size 0x4, align 4
    float32 m_flRocketJumpWallJumpWindow; // offset 0x16F0, size 0x4, align 4
    float32 m_flRocketJumpAlreadyFasterMultiplier; // offset 0x16F4, size 0x4, align 4
    float32 m_flRocketJumpSelfDamageMaxHealthPercent; // offset 0x16F8, size 0x4, align 4
    char _pad_16FC[0x4]; // offset 0x16FC
    CEmbeddedSubclass< CCitadelModifier > m_RocketJumpModifier; // offset 0x1700, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargingAmbientParticle; // offset 0x1710, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeBeginParticle; // offset 0x17F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeLevel2Particle; // offset 0x18D0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeLevel2AmbientParticle; // offset 0x19B0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactExplosionChargeLevel2; // offset 0x1A90, size 0xE0, align 8
    CSoundEventName m_strChargeLevel2Sound; // offset 0x1B70, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strChargingSound; // offset 0x1B80, size 0x10, align 8
    CSoundEventName m_strChargeLevel2LoopSound; // offset 0x1B90, size 0x10, align 8
    CSoundEventName m_strShootDefaultSound; // offset 0x1BA0, size 0x10, align 8
    CSoundEventName m_strShootLevel2Sound; // offset 0x1BB0, size 0x10, align 8
    CSoundEventName m_strImpactDefaultSound; // offset 0x1BC0, size 0x10, align 8
    CSoundEventName m_strImpactLevel2Sound; // offset 0x1BD0, size 0x10, align 8
    CSoundEventName m_strLevel2HitConfirmSound; // offset 0x1BE0, size 0x10, align 8
    CSoundEventName m_strLevel2HitConfirmNPCSound; // offset 0x1BF0, size 0x10, align 8
};
