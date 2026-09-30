#pragma once

class CCitadel_Modifier_ReturnFireVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA20, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackerHitFx; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x840, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpiritReflectTracerReplacement; // offset 0x920, size 0xE0, align 8
    CSoundEventName m_strAttackerHitSound; // offset 0xA00, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitProcSound; // offset 0xA10, size 0x10, align 8
};
