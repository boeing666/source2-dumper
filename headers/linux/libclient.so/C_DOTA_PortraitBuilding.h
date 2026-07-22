#pragma once

class C_DOTA_PortraitBuilding : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xC58, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC44]; // offset 0x0
    ParticleIndex_t m_nAmbientFXIndex; // offset 0xC44, size 0x4, align 255
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndex; // offset 0xC48, size 0x8, align 8
    Color m_ParticleTintColor; // offset 0xC50, size 0x4, align 1
    char _pad_0C54[0x4]; // offset 0xC54
};
