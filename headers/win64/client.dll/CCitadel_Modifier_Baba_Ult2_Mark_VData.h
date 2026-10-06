#pragma once

class CCitadel_Modifier_Baba_Ult2_Mark_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB58, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LockingOnParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LockingOnParticleCaster; // offset 0x870, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TickParticle; // offset 0x950, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FinalTickParticle; // offset 0xA30, size 0xE0, align 8
    CSoundEventName m_strVictimLockonSound; // offset 0xB10, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strVictimMaxLockonSound; // offset 0xB20, size 0x10, align 8
    CSoundEventName m_strFinalPigeonWarning; // offset 0xB30, size 0x10, align 8 | MPropertyDescription
    float32 m_flImpactDelay; // offset 0xB40, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    char _pad_0B44[0x4]; // offset 0xB44
    CEmbeddedSubclass< CCitadelModifier > m_ImpactModifier; // offset 0xB48, size 0x10, align 8 | MPropertyDescription
};
