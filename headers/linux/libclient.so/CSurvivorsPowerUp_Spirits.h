#pragma once

class CSurvivorsPowerUp_Spirits : public CSurvivorsPowerUp /*0x0*/  // sizeof 0x7F0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x608]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sParticle; // offset 0x608, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sExplosionParticle; // offset 0x6E8, size 0xE0, align 8
    char _pad_07C8[0x18]; // offset 0x7C8
    bool m_bActive; // offset 0x7E0, size 0x1, align 1
    char _pad_07E1[0x3]; // offset 0x7E1
    float32 m_flDurationTimer; // offset 0x7E4, size 0x4, align 4
    float32 m_flRange; // offset 0x7E8, size 0x4, align 4
    char _pad_07EC[0x4]; // offset 0x7EC
};
