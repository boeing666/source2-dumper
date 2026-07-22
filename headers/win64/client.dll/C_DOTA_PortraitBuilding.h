#pragma once

class C_DOTA_PortraitBuilding : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xAD8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xAC0]; // offset 0x0
    ParticleIndex_t m_nAmbientFXIndex; // offset 0xAC0, size 0x4, align 255
    char _pad_0AC4[0x4]; // offset 0xAC4
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndex; // offset 0xAC8, size 0x8, align 8
    Color m_ParticleTintColor; // offset 0xAD0, size 0x4, align 1
    char _pad_0AD4[0x4]; // offset 0xAD4
};
