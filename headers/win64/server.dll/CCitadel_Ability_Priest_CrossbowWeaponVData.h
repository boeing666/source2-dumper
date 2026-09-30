#pragma once

class CCitadel_Ability_Priest_CrossbowWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1AF0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1660]; // offset 0x0
    CPiecewiseCurve m_SpreadPenaltyScaleCurve; // offset 0x1660, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flRicochetBulletSpeed; // offset 0x16A0, size 0x4, align 4
    char _pad_16A4[0x4]; // offset 0x16A4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle; // offset 0x16A8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticleOwnerOnly; // offset 0x1788, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BlessedTracerParticle; // offset 0x1868, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CrossbowMuzzleFlashParticle; // offset 0x1948, size 0xE0, align 8
    CSoundEventName m_strHitSound; // offset 0x1A28, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitHeadshotSound; // offset 0x1A38, size 0x10, align 8
    CSoundEventName m_strBeamPointClosestLoopSound; // offset 0x1A48, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceBolt; // offset 0x1A58, size 0x88, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ExecuteModifier; // offset 0x1AE0, size 0x10, align 8 | MPropertyStartGroup
};
