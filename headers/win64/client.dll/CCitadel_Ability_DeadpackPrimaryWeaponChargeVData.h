#pragma once

class CCitadel_Ability_DeadpackPrimaryWeaponChargeVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1888, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1358]; // offset 0x0
    float32 m_flExplosionRadiusInnerFraction; // offset 0x1358, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flExplosionDamageScaleAtMaxRadius; // offset 0x135C, size 0x4, align 4
    float32 m_flRocketJumpExtraRadiusMeters; // offset 0x1360, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRocketJumpForceMin; // offset 0x1364, size 0x4, align 4
    float32 m_flRocketJumpForceMax; // offset 0x1368, size 0x4, align 4
    float32 m_flRocketJumpForceUpBias; // offset 0x136C, size 0x4, align 4
    float32 m_flRocketJumpForceCrouchMultiplier; // offset 0x1370, size 0x4, align 4
    float32 m_flRocketJumpForceWallMultiplier; // offset 0x1374, size 0x4, align 4
    float32 m_flRocketJumpWallJumpWindow; // offset 0x1378, size 0x4, align 4
    float32 m_flRocketJumpAlreadyFasterMultiplier; // offset 0x137C, size 0x4, align 4
    float32 m_flRocketJumpSelfDamageMaxHealthPercent; // offset 0x1380, size 0x4, align 4
    char _pad_1384[0x4]; // offset 0x1384
    CEmbeddedSubclass< CCitadelModifier > m_RocketJumpModifier; // offset 0x1388, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargingAmbientParticle; // offset 0x1398, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeBeginParticle; // offset 0x1478, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeLevel2Particle; // offset 0x1558, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeLevel2AmbientParticle; // offset 0x1638, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactExplosionChargeLevel2; // offset 0x1718, size 0xE0, align 8
    CSoundEventName m_strChargeLevel2Sound; // offset 0x17F8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strChargingSound; // offset 0x1808, size 0x10, align 8
    CSoundEventName m_strChargeLevel2LoopSound; // offset 0x1818, size 0x10, align 8
    CSoundEventName m_strShootDefaultSound; // offset 0x1828, size 0x10, align 8
    CSoundEventName m_strShootLevel2Sound; // offset 0x1838, size 0x10, align 8
    CSoundEventName m_strImpactDefaultSound; // offset 0x1848, size 0x10, align 8
    CSoundEventName m_strImpactLevel2Sound; // offset 0x1858, size 0x10, align 8
    CSoundEventName m_strLevel2HitConfirmSound; // offset 0x1868, size 0x10, align 8
    CSoundEventName m_strLevel2HitConfirmNPCSound; // offset 0x1878, size 0x10, align 8
};
