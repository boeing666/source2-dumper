#pragma once

class CCitadel_Ability_IceBeamVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A70, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    float32 m_SplitBeamWidth; // offset 0x1818, size 0x4, align 4
    char _pad_181C[0x4]; // offset 0x181C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x1820, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // offset 0x1900, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_IceBeamModifier; // offset 0x19E0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x19F0, size 0x10, align 8
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildupModifier; // offset 0x1A00, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuildupProcModifier; // offset 0x1A10, size 0x10, align 8
    CSoundEventName m_BeamStartSound; // offset 0x1A20, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BeamStopSound; // offset 0x1A30, size 0x10, align 8
    CSoundEventName m_BeamPointStartLoopSound; // offset 0x1A40, size 0x10, align 8
    CSoundEventName m_BeamPointEndLoopSound; // offset 0x1A50, size 0x10, align 8
    CSoundEventName m_BeamPointClosestLoopSound; // offset 0x1A60, size 0x10, align 8
};
