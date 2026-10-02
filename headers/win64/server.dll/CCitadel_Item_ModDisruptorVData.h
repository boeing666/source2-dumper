#pragma once

class CCitadel_Item_ModDisruptorVData : public CitadelItemVData /*0x0*/  // sizeof 0x15F0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14F8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DetonateParticle; // offset 0x14F8, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DisruptModifier; // offset 0x15D8, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flWaveSpeed; // offset 0x15E8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_15EC[0x4]; // offset 0x15EC
};
