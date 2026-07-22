#pragma once

class CSurvivorsImperiaBoss : public CSurvivorsEnemy /*0x0*/  // sizeof 0xD50, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x3C4]; // offset 0x0
    float32 m_flBurningGroundImpactDamage; // offset 0x3C4, size 0x4, align 4
    float32 m_flBurningGroundImpactRadius; // offset 0x3C8, size 0x4, align 4
    float32 m_flBurningGroundImpactSpawnDelay; // offset 0x3CC, size 0x4, align 4
    float32 m_flBurningGroundFlamesDuration; // offset 0x3D0, size 0x4, align 4
    float32 m_flBurningGroundDoTDuration; // offset 0x3D4, size 0x4, align 4
    float32 m_flBurningGroundDoTDamage; // offset 0x3D8, size 0x4, align 4
    float32 m_flBurningGroundImpactStunDuration; // offset 0x3DC, size 0x4, align 4
    int32 m_nBurningGroundInstancesPerEnrageLevel; // offset 0x3E0, size 0x4, align 4
    char _pad_03E4[0x4]; // offset 0x3E4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sBurningGroundImpactParticleName; // offset 0x3E8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sBurningGroundDoTParticleName; // offset 0x4C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sBurningGroundBurnParticleName; // offset 0x5A8, size 0xE0, align 8
    float32 m_flRadiateRaysCastStartDuration; // offset 0x688, size 0x4, align 4
    float32 m_flRadiateRaysDuration; // offset 0x68C, size 0x4, align 4
    float32 m_flRadiateRaysInterval; // offset 0x690, size 0x4, align 4
    float32 m_flRadiateRaysAngle; // offset 0x694, size 0x4, align 4
    float32 m_flRadiateRaysSpeed; // offset 0x698, size 0x4, align 4
    float32 m_flRadiateRaysDamage; // offset 0x69C, size 0x4, align 4
    float32 m_flRadiateRaysProjectileRadius; // offset 0x6A0, size 0x4, align 4
    char _pad_06A4[0x4]; // offset 0x6A4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sRadiateRaysRayParticle; // offset 0x6A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sRadiateRaysBuffParticle; // offset 0x788, size 0xE0, align 8
    CNewParticleEffect* m_pRadiateRaysBuffParticle; // offset 0x868, size 0x8, align 8
    float32 m_nDemonPortalsNumToCreate; // offset 0x870, size 0x4, align 4
    float32 m_flDemonPortalDeactivateTime; // offset 0x874, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sDemonPortalsPortalParticle; // offset 0x878, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sDemonPortalsTelegraphParticle; // offset 0x958, size 0xE0, align 8
    int32 m_nMaxDemonPortalCount; // offset 0xA38, size 0x4, align 4
    float32 m_flDemonPortalDeactivateRadius; // offset 0xA3C, size 0x4, align 4
    CUtlVector< CUtlString > m_vecDemonPortalSpawners; // offset 0xA40, size 0x18, align 8
    CUtlVector< VectorWS > m_vecDemonPortalSpawnPositions; // offset 0xA58, size 0x18, align 8
    int32 m_nNumMagicMissiles; // offset 0xA70, size 0x4, align 4
    float32 m_flMagicMissileProjectileSpeed; // offset 0xA74, size 0x4, align 4
    float32 m_flMagicMissileDamage; // offset 0xA78, size 0x4, align 4
    float32 m_flMagicMissileProjectileRadius; // offset 0xA7C, size 0x4, align 4
    float32 m_flMagicMissileProjectileSpeedIncreasePerEnrage; // offset 0xA80, size 0x4, align 4
    char _pad_0A84[0x4]; // offset 0xA84
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sMagicMissileParticle; // offset 0xA88, size 0xE0, align 8
    float32 m_flInitialEnrageTime; // offset 0xB68, size 0x4, align 4
    float32 m_flIncrementalEnrageTime; // offset 0xB6C, size 0x4, align 4
    CUtlVector< float32 > m_vecMandatoryEnrageHealthThresholds; // offset 0xB70, size 0x18, align 8
    char _pad_0B88[0x4]; // offset 0xB88
    bool m_bSpawnedAmbientParticles; // offset 0xB8C, size 0x1, align 1
    char _pad_0B8D[0x3]; // offset 0xB8D
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sImperiaAmbientBody; // offset 0xB90, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sImperiaAmbientWings; // offset 0xC70, size 0xE0, align 8
};
