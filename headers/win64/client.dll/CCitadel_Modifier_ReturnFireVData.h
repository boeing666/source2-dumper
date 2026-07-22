#pragma once

class CCitadel_Modifier_ReturnFireVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA10, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackerHitFx; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x830, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpiritReflectTracerReplacement; // offset 0x910, size 0xE0, align 8
    CSoundEventName m_strAttackerHitSound; // offset 0x9F0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitProcSound; // offset 0xA00, size 0x10, align 8
};
