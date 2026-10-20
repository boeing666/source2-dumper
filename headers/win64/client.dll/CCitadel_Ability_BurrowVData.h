#pragma once

class CCitadel_Ability_BurrowVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14C8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowStartParticle; // offset 0x1150, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowEndParticle; // offset 0x1230, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BurrowInGroundParticle; // offset 0x1310, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BurrowModifier; // offset 0x13F0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SpinModifier; // offset 0x1400, size 0x10, align 8
    CSoundEventName m_strBurrowEndSound; // offset 0x1410, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flChannelEndEnemyPopUpForce; // offset 0x1420, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flChannelEndEnemyPopUpCylinderHeight; // offset 0x1424, size 0x4, align 4
    CitadelCameraOperationsSequence_t m_cameraSpinStart; // offset 0x1428, size 0xA0, align 8 | MPropertyDescription
};
