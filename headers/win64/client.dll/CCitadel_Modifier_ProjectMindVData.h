#pragma once

class CCitadel_Modifier_ProjectMindVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xAE0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportStartParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportEndParticle; // offset 0x830, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportTrailParticle; // offset 0x910, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportModelParticle; // offset 0x9F0, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ShieldModifier; // offset 0xAD0, size 0x10, align 8 | MPropertyStartGroup
};
