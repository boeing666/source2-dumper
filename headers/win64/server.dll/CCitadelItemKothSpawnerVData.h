#pragma once

class CCitadelItemKothSpawnerVData : public CCitadelItemPickupVData /*0x0*/  // sizeof 0x1F8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x118]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_OnGroundTouchParticle; // offset 0x118, size 0xE0, align 8 | MPropertyGroupName
};
