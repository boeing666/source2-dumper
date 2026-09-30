#pragma once

class CItem_ActiveReload_VData : public CitadelItemVData /*0x0*/  // sizeof 0x16B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SuccessModifier; // offset 0x14B0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strSuccessSound; // offset 0x14C0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strFailureSound; // offset 0x14D0, size 0x10, align 8
    CSoundEventName m_strWindowEnteredSound; // offset 0x14E0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessParticle; // offset 0x14F0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FailureParticle; // offset 0x15D0, size 0xE0, align 8
    float32 m_flGraceTime; // offset 0x16B0, size 0x4, align 4 | MPropertyStartGroup
    char _pad_16B4[0x4]; // offset 0x16B4
};
