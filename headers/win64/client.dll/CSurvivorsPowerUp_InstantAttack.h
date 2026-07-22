#pragma once

class CSurvivorsPowerUp_InstantAttack : public CSurvivorsPowerUp /*0x0*/  // sizeof 0x6F0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x608]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sParticle; // offset 0x608, size 0xE0, align 8
    ESurvivorsAttackTargeting m_eTargeting; // offset 0x6E8, size 0x4, align 4
    char _pad_06EC[0x4]; // offset 0x6EC
};
