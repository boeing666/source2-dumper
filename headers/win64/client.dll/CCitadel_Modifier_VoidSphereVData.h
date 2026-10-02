#pragma once

class CCitadel_Modifier_VoidSphereVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB78, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportStartParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportEndParticle; // offset 0x870, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // offset 0x950, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportModelParticle; // offset 0xA30, size 0xE0, align 8
    float32 m_flPreTeleportDuration; // offset 0xB10, size 0x4, align 4 | MPropertyGroupName
    char _pad_0B14[0x4]; // offset 0xB14
    CPiecewiseCurve m_TeleportVerticalOffsetCurve; // offset 0xB18, size 0x40, align 8
    CSoundEventName m_strAmbientLoopingLocalPlayerSound; // offset 0xB58, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CBaseModifier > m_BuffModifier; // offset 0xB68, size 0x10, align 8 | MPropertyGroupName
};
