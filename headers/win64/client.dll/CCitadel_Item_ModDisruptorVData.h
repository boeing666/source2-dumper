#pragma once

class CCitadel_Item_ModDisruptorVData : public CitadelItemVData /*0x0*/  // sizeof 0x1288, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1190]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DetonateParticle; // offset 0x1190, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DisruptModifier; // offset 0x1270, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flWaveSpeed; // offset 0x1280, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1284[0x4]; // offset 0x1284
};
