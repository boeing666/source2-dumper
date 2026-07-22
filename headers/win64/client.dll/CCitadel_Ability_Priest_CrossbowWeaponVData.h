#pragma once

class CCitadel_Ability_Priest_CrossbowWeaponVData : public CCitadel_Ability_PrimaryWeaponVData /*0x0*/  // sizeof 0x1E28, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x19C0]; // offset 0x0
    CPiecewiseCurve m_SpreadPenaltyScaleCurve; // offset 0x19C0, size 0x40, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticle; // offset 0x1A00, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserSightParticleOwnerOnly; // offset 0x1AE0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BlessedTracerParticle; // offset 0x1BC0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CrossbowMuzzleFlashParticle; // offset 0x1CA0, size 0xE0, align 8
    CSoundEventName m_strHitSound; // offset 0x1D80, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitHeadshotSound; // offset 0x1D90, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceBolt; // offset 0x1DA0, size 0x88, align 8 | MPropertyStartGroup
};
