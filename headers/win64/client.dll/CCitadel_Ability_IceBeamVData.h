#pragma once

class CCitadel_Ability_IceBeamVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15F8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    float32 m_SplitBeamWidth; // offset 0x13A0, size 0x4, align 4
    char _pad_13A4[0x4]; // offset 0x13A4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x13A8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // offset 0x1488, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_IceBeamModifier; // offset 0x1568, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1578, size 0x10, align 8
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildupModifier; // offset 0x1588, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuildupProcModifier; // offset 0x1598, size 0x10, align 8
    CSoundEventName m_BeamStartSound; // offset 0x15A8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BeamStopSound; // offset 0x15B8, size 0x10, align 8
    CSoundEventName m_BeamPointStartLoopSound; // offset 0x15C8, size 0x10, align 8
    CSoundEventName m_BeamPointEndLoopSound; // offset 0x15D8, size 0x10, align 8
    CSoundEventName m_BeamPointClosestLoopSound; // offset 0x15E8, size 0x10, align 8
};
