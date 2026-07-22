#pragma once

class CSurvivorsPowerUp_LandMine : public CSurvivorsPowerUp /*0x0*/  // sizeof 0x808, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x608]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sParticle; // offset 0x608, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sExplosionParticle; // offset 0x6E8, size 0xE0, align 8
    char _pad_07C8[0x18]; // offset 0x7C8
    float32 m_flScepterVacuumRadius; // offset 0x7E0, size 0x4, align 4
    float32 m_flScepterVacuumDistance; // offset 0x7E4, size 0x4, align 4
    char _pad_07E8[0x18]; // offset 0x7E8
    int32 m_nMineTypeIndex; // offset 0x800, size 0x4, align 4
    char _pad_0804[0x4]; // offset 0x804
};
