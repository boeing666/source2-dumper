#pragma once

class CSurvivorsPowerUp_Stampede : public CSurvivorsPowerUp /*0x0*/  // sizeof 0x728, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x638]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sParticle; // offset 0x638, size 0xE0, align 8
    SurvivorsParticleID_t m_unParticleID; // offset 0x718, size 0x4, align 255
    char _pad_071C[0x4]; // offset 0x71C
    CNewParticleEffect* m_pParticle; // offset 0x720, size 0x8, align 8
};
