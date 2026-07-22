#pragma once

class CModifierLashGrappleEnemyDebuffVData : public CCitadel_Modifier_StunnedVData /*0x0*/  // sizeof 0xBD0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x830]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GrappleParticle; // offset 0x830, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // offset 0x910, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x9F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RopeParticle; // offset 0xAD0, size 0xE0, align 8
    CSoundEventName m_ImpactSound; // offset 0xBB0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0xBC0, size 0x10, align 8 | MPropertyStartGroup
};
