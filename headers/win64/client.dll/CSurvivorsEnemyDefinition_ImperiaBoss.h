#pragma once

class CSurvivorsEnemyDefinition_ImperiaBoss : public CSurvivorsEnemyDefinition /*0x0*/  // sizeof 0xBE8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x288]; // offset 0x0
    float32 m_flBurningGroundImpactDamage; // offset 0x288, size 0x4, align 4
    float32 m_flBurningGroundImpactRadius; // offset 0x28C, size 0x4, align 4
    float32 m_flBurningGroundImpactSpawnDelay; // offset 0x290, size 0x4, align 4
    float32 m_flBurningGroundFlamesDuration; // offset 0x294, size 0x4, align 4
    float32 m_flBurningGroundDoTDuration; // offset 0x298, size 0x4, align 4
    float32 m_flBurningGroundDoTDamage; // offset 0x29C, size 0x4, align 4
    float32 m_flBurningGroundImpactStunDuration; // offset 0x2A0, size 0x4, align 4
    int32 m_nBurningGroundInstancesPerEnrageLevel; // offset 0x2A4, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sBurningGroundImpactParticleName; // offset 0x2A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sBurningGroundDoTParticleName; // offset 0x388, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sBurningGroundBurnParticleName; // offset 0x468, size 0xE0, align 8
    float32 m_flRadiateRaysCastStartDuration; // offset 0x548, size 0x4, align 4
    float32 m_flRadiateRaysDuration; // offset 0x54C, size 0x4, align 4
    float32 m_flRadiateRaysInterval; // offset 0x550, size 0x4, align 4
    float32 m_flRadiateRaysAngle; // offset 0x554, size 0x4, align 4
    float32 m_flRadiateRaysSpeed; // offset 0x558, size 0x4, align 4
    float32 m_flRadiateRaysDamage; // offset 0x55C, size 0x4, align 4
    float32 m_flRadiateRaysProjectileRadius; // offset 0x560, size 0x4, align 4
    char _pad_0564[0x4]; // offset 0x564
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sRadiateRaysRayParticle; // offset 0x568, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sRadiateRaysBuffParticle; // offset 0x648, size 0xE0, align 8
    float32 m_nDemonPortalsNumToCreate; // offset 0x728, size 0x4, align 4
    float32 m_flDemonPortalDeactivateTime; // offset 0x72C, size 0x4, align 4
    int32 m_nMaxDemonPortalCount; // offset 0x730, size 0x4, align 4
    float32 m_flDemonPortalDeactivateRadius; // offset 0x734, size 0x4, align 4
    CUtlVector< CUtlString > m_vecDemonPortalSpawners; // offset 0x738, size 0x18, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sDemonPortalsPortalParticle; // offset 0x750, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sDemonPortalsTelegraphParticle; // offset 0x830, size 0xE0, align 8
    int32 m_nNumMagicMissiles; // offset 0x910, size 0x4, align 4
    float32 m_flMagicMissileProjectileSpeed; // offset 0x914, size 0x4, align 4
    float32 m_flMagicMissileProjectileSpeedIncreasePerEnrage; // offset 0x918, size 0x4, align 4
    float32 m_flMagicMissileDamage; // offset 0x91C, size 0x4, align 4
    float32 m_flMagicMissileProjectileRadius; // offset 0x920, size 0x4, align 4
    char _pad_0924[0x4]; // offset 0x924
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sMagicMissileParticle; // offset 0x928, size 0xE0, align 8
    float32 m_flInitialEnrageTime; // offset 0xA08, size 0x4, align 4
    float32 m_flIncrementalEnrageTime; // offset 0xA0C, size 0x4, align 4
    CUtlVector< float32 > m_vecMandatoryEnrageHealthThresholds; // offset 0xA10, size 0x18, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sImperiaAmbientBody; // offset 0xA28, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sImperiaAmbientWings; // offset 0xB08, size 0xE0, align 8
};
