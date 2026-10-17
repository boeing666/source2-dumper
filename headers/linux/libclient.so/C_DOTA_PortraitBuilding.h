#pragma once

class C_DOTA_PortraitBuilding : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xD48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD34]; // offset 0x0
    ParticleIndex_t m_nAmbientFXIndex; // offset 0xD34, size 0x4, align 255
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndex; // offset 0xD38, size 0x8, align 8
    Color m_ParticleTintColor; // offset 0xD40, size 0x4, align 4
    char _pad_0D44[0x4]; // offset 0xD44
};
