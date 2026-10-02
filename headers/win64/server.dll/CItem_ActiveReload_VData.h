#pragma once

class CItem_ActiveReload_VData : public CitadelItemVData /*0x0*/  // sizeof 0x1700, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14F8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SuccessModifier; // offset 0x14F8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSuccessSound; // offset 0x1508, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strFailureSound; // offset 0x1518, size 0x10, align 8
    CSoundEventName m_strWindowEnteredSound; // offset 0x1528, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessParticle; // offset 0x1538, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FailureParticle; // offset 0x1618, size 0xE0, align 8
    float32 m_flGraceTime; // offset 0x16F8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_16FC[0x4]; // offset 0x16FC
};
