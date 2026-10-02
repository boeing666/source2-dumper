#pragma once

class CCitadel_Ability_Priest_CrossbowWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1B78, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x16D0]; // offset 0x0
    CPiecewiseCurve m_SpreadPenaltyScaleCurve; // offset 0x16D0, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flRicochetBulletSpeed; // offset 0x1710, size 0x4, align 4
    char _pad_1714[0x4]; // offset 0x1714
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle; // offset 0x1718, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticleOwnerOnly; // offset 0x17F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BlessedTracerParticle; // offset 0x18D8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CrossbowMuzzleFlashParticle; // offset 0x19B8, size 0xE0, align 8
    CSoundEventName m_strHitSound; // offset 0x1A98, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitHeadshotSound; // offset 0x1AA8, size 0x10, align 8
    CSoundEventName m_strBeamPointClosestLoopSound; // offset 0x1AB8, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceBolt; // offset 0x1AC8, size 0xA0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ExecuteModifier; // offset 0x1B68, size 0x10, align 8 | MPropertyStartGroup
};
