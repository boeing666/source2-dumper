#pragma once

class C_DOTA_PortraitBuilding : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xC28, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    ParticleIndex_t m_nAmbientFXIndex; // offset 0xC10, size 0x4, align 255
    char _pad_0C14[0x4]; // offset 0xC14
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndex; // offset 0xC18, size 0x8, align 8
    Color m_ParticleTintColor; // offset 0xC20, size 0x4, align 4
    char _pad_0C24[0x4]; // offset 0xC24
};
