#pragma once

class C_DOTA_PortraitBuilding : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xBC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    ParticleIndex_t m_nAmbientFXIndex; // offset 0xBB0, size 0x4, align 255
    char _pad_0BB4[0x4]; // offset 0xBB4
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndex; // offset 0xBB8, size 0x8, align 8
    Color m_ParticleTintColor; // offset 0xBC0, size 0x4, align 4
    char _pad_0BC4[0x4]; // offset 0xBC4
};
