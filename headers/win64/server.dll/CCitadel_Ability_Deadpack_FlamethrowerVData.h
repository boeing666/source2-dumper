#pragma once

class CCitadel_Ability_Deadpack_FlamethrowerVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1480, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // offset 0x1150, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ScorchParticle; // offset 0x1230, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BackblastParticle; // offset 0x1310, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13F0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ResistModifier; // offset 0x1400, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1410, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BackblastModifier; // offset 0x1420, size 0x10, align 8
    CSoundEventName m_BeamStartSound; // offset 0x1430, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BeamStopSound; // offset 0x1440, size 0x10, align 8
    CSoundEventName m_BackblastSound; // offset 0x1450, size 0x10, align 8
    CSoundEventName m_BeamPointStartLoopSound; // offset 0x1460, size 0x10, align 8
    CSoundEventName m_BeamPointClosestLoopSound; // offset 0x1470, size 0x10, align 8
};
