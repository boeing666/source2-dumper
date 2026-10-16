#pragma once

class CCitadel_Ability_DeadpackPrimaryWeaponChargeVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1C08, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    float32 m_flExplosionRadiusInnerFraction; // offset 0x16D8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flExplosionDamageScaleAtMaxRadius; // offset 0x16DC, size 0x4, align 4
    float32 m_flRocketJumpExtraRadiusMeters; // offset 0x16E0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRocketJumpForceMin; // offset 0x16E4, size 0x4, align 4
    float32 m_flRocketJumpForceMax; // offset 0x16E8, size 0x4, align 4
    float32 m_flRocketJumpForceUpBias; // offset 0x16EC, size 0x4, align 4
    float32 m_flRocketJumpForceCrouchMultiplier; // offset 0x16F0, size 0x4, align 4
    float32 m_flRocketJumpForceWallMultiplier; // offset 0x16F4, size 0x4, align 4
    float32 m_flRocketJumpWallJumpWindow; // offset 0x16F8, size 0x4, align 4
    float32 m_flRocketJumpAlreadyFasterMultiplier; // offset 0x16FC, size 0x4, align 4
    float32 m_flRocketJumpSelfDamageMaxHealthPercent; // offset 0x1700, size 0x4, align 4
    char _pad_1704[0x4]; // offset 0x1704
    CEmbeddedSubclass< CCitadelModifier > m_RocketJumpModifier; // offset 0x1708, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargingAmbientParticle; // offset 0x1718, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeBeginParticle; // offset 0x17F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeLevel2Particle; // offset 0x18D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeLevel2AmbientParticle; // offset 0x19B8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactExplosionChargeLevel2; // offset 0x1A98, size 0xE0, align 8
    CSoundEventName m_strChargeLevel2Sound; // offset 0x1B78, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strChargingSound; // offset 0x1B88, size 0x10, align 8
    CSoundEventName m_strChargeLevel2LoopSound; // offset 0x1B98, size 0x10, align 8
    CSoundEventName m_strShootDefaultSound; // offset 0x1BA8, size 0x10, align 8
    CSoundEventName m_strShootLevel2Sound; // offset 0x1BB8, size 0x10, align 8
    CSoundEventName m_strImpactDefaultSound; // offset 0x1BC8, size 0x10, align 8
    CSoundEventName m_strImpactLevel2Sound; // offset 0x1BD8, size 0x10, align 8
    CSoundEventName m_strLevel2HitConfirmSound; // offset 0x1BE8, size 0x10, align 8
    CSoundEventName m_strLevel2HitConfirmNPCSound; // offset 0x1BF8, size 0x10, align 8
};
