#pragma once

class CItem_ActiveReload_VData : public CitadelItemVData /*0x0*/  // sizeof 0x1AC0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18B8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SuccessModifier; // offset 0x18B8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSuccessSound; // offset 0x18C8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strFailureSound; // offset 0x18D8, size 0x10, align 8
    CSoundEventName m_strWindowEnteredSound; // offset 0x18E8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessParticle; // offset 0x18F8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FailureParticle; // offset 0x19D8, size 0xE0, align 8
    float32 m_flGraceTime; // offset 0x1AB8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
