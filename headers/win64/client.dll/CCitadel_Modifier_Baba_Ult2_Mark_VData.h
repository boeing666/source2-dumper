#pragma once

class CCitadel_Modifier_Baba_Ult2_Mark_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB60, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LockingOnParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LockingOnParticleCaster; // offset 0x878, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TickParticle; // offset 0x958, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FinalTickParticle; // offset 0xA38, size 0xE0, align 8
    CSoundEventName m_strVictimLockonSound; // offset 0xB18, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strVictimMaxLockonSound; // offset 0xB28, size 0x10, align 8
    CSoundEventName m_strFinalPigeonWarning; // offset 0xB38, size 0x10, align 8 | MPropertyDescription
    float32 m_flImpactDelay; // offset 0xB48, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    char _pad_0B4C[0x4]; // offset 0xB4C
    CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // offset 0xB50, size 0x10, align 8 | MPropertyDescription
};
