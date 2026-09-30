#pragma once

class CCitadelItemPickupVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x118, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    float32 m_flPhysicsRadius; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbientParticle; // offset 0x30, size 0xE0, align 8 | MPropertyGroupName
    CitadelMusicMsgType m_nSpawnMusicState; // offset 0x110, size 0x4, align 4 | MPropertyGroupName
    char _pad_0114[0x4]; // offset 0x114
};
