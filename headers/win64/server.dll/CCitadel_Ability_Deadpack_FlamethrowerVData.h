#pragma once

class CCitadel_Ability_Deadpack_FlamethrowerVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x17F8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ScorchParticle; // offset 0x15A8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BackblastParticle; // offset 0x1688, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1768, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ResistModifier; // offset 0x1778, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1788, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BackblastModifier; // offset 0x1798, size 0x10, align 8
    CSoundEventName m_BeamStartSound; // offset 0x17A8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BeamStopSound; // offset 0x17B8, size 0x10, align 8
    CSoundEventName m_BackblastSound; // offset 0x17C8, size 0x10, align 8
    CSoundEventName m_BeamPointStartLoopSound; // offset 0x17D8, size 0x10, align 8
    CSoundEventName m_BeamPointClosestLoopSound; // offset 0x17E8, size 0x10, align 8
};
