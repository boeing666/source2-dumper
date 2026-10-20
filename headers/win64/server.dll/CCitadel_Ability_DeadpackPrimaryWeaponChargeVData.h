#pragma once

class CCitadel_Ability_DeadpackPrimaryWeaponChargeVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1890, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1360]; // offset 0x0
    float32 m_flExplosionRadiusInnerFraction; // offset 0x1360, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flExplosionDamageScaleAtMaxRadius; // offset 0x1364, size 0x4, align 4
    float32 m_flRocketJumpExtraRadiusMeters; // offset 0x1368, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRocketJumpForceMin; // offset 0x136C, size 0x4, align 4
    float32 m_flRocketJumpForceMax; // offset 0x1370, size 0x4, align 4
    float32 m_flRocketJumpForceUpBias; // offset 0x1374, size 0x4, align 4
    float32 m_flRocketJumpForceCrouchMultiplier; // offset 0x1378, size 0x4, align 4
    float32 m_flRocketJumpForceWallMultiplier; // offset 0x137C, size 0x4, align 4
    float32 m_flRocketJumpWallJumpWindow; // offset 0x1380, size 0x4, align 4
    float32 m_flRocketJumpAlreadyFasterMultiplier; // offset 0x1384, size 0x4, align 4
    float32 m_flRocketJumpSelfDamageMaxHealthPercent; // offset 0x1388, size 0x4, align 4
    char _pad_138C[0x4]; // offset 0x138C
    CEmbeddedSubclass< CCitadelModifier > m_RocketJumpModifier; // offset 0x1390, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargingAmbientParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeBeginParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeLevel2Particle; // offset 0x1560, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeLevel2AmbientParticle; // offset 0x1640, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactExplosionChargeLevel2; // offset 0x1720, size 0xE0, align 8
    CSoundEventName m_strChargeLevel2Sound; // offset 0x1800, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strChargingSound; // offset 0x1810, size 0x10, align 8
    CSoundEventName m_strChargeLevel2LoopSound; // offset 0x1820, size 0x10, align 8
    CSoundEventName m_strShootDefaultSound; // offset 0x1830, size 0x10, align 8
    CSoundEventName m_strShootLevel2Sound; // offset 0x1840, size 0x10, align 8
    CSoundEventName m_strImpactDefaultSound; // offset 0x1850, size 0x10, align 8
    CSoundEventName m_strImpactLevel2Sound; // offset 0x1860, size 0x10, align 8
    CSoundEventName m_strLevel2HitConfirmSound; // offset 0x1870, size 0x10, align 8
    CSoundEventName m_strLevel2HitConfirmNPCSound; // offset 0x1880, size 0x10, align 8
};
