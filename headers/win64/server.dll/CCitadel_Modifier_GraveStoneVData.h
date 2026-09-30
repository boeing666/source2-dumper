#pragma once

class CCitadel_Modifier_GraveStoneVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0xA88, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7B8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GravestoneParticle; // offset 0x7B8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyParticle; // offset 0x898, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AuraParticle; // offset 0x978, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CasterBuffModifier; // offset 0xA58, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GravestoneCriticalModifier; // offset 0xA68, size 0x10, align 8
    CSoundEventName m_DestroySound; // offset 0xA78, size 0x10, align 8 | MPropertyGroupName
};
