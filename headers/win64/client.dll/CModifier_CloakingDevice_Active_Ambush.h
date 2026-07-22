#pragma once

class CModifier_CloakingDevice_Active_Ambush : public CCitadelModifier /*0x0*/  // sizeof 0xC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    ParticleIndex_t m_nAmbushParticle; // offset 0xC0, size 0x4, align 255
    char _pad_00C4[0x4]; // offset 0xC4
};
