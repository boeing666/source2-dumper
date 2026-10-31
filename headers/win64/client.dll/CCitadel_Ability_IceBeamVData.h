#pragma once

class CCitadel_Ability_IceBeamVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x12D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    float32 m_SplitBeamWidth; // offset 0x1080, size 0x4, align 4
    char _pad_1084[0x4]; // offset 0x1084
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x1088, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // offset 0x1168, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_IceBeamModifier; // offset 0x1248, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1258, size 0x10, align 8
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildupModifier; // offset 0x1268, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuildupProcModifier; // offset 0x1278, size 0x10, align 8
    CSoundEventName m_BeamStartSound; // offset 0x1288, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BeamStopSound; // offset 0x1298, size 0x10, align 8
    CSoundEventName m_BeamPointStartLoopSound; // offset 0x12A8, size 0x10, align 8
    CSoundEventName m_BeamPointEndLoopSound; // offset 0x12B8, size 0x10, align 8
    CSoundEventName m_BeamPointClosestLoopSound; // offset 0x12C8, size 0x10, align 8
};
