#pragma once

class CCitadel_Modifier_VoidSphereVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB38, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportStartParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportEndParticle; // offset 0x830, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // offset 0x910, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportModelParticle; // offset 0x9F0, size 0xE0, align 8
    float32 m_flPreTeleportDuration; // offset 0xAD0, size 0x4, align 4 | MPropertyGroupName
    char _pad_0AD4[0x4]; // offset 0xAD4
    CPiecewiseCurve m_TeleportVerticalOffsetCurve; // offset 0xAD8, size 0x40, align 8
    CSoundEventName m_strAmbientLoopingLocalPlayerSound; // offset 0xB18, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CBaseModifier > m_BuffModifier; // offset 0xB28, size 0x10, align 8 | MPropertyGroupName
};
