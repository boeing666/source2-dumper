#pragma once

class CCitadel_Ability_Priest_CrossbowWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1800, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1358]; // offset 0x0
    CPiecewiseCurve m_SpreadPenaltyScaleCurve; // offset 0x1358, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flRicochetBulletSpeed; // offset 0x1398, size 0x4, align 4
    char _pad_139C[0x4]; // offset 0x139C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticleOwnerOnly; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BlessedTracerParticle; // offset 0x1560, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CrossbowMuzzleFlashParticle; // offset 0x1640, size 0xE0, align 8
    CSoundEventName m_strHitSound; // offset 0x1720, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitHeadshotSound; // offset 0x1730, size 0x10, align 8
    CSoundEventName m_strBeamPointClosestLoopSound; // offset 0x1740, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceBolt; // offset 0x1750, size 0xA0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ExecuteModifier; // offset 0x17F0, size 0x10, align 8 | MPropertyStartGroup
};
