#pragma once

class CDOTA_Modifier_MuertaReleaseEvent_RemoveGravestone : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    ParticleIndex_t m_nParticleIndex; // offset 0x1A78, size 0x4, align 255
    char _pad_1A7C[0x4]; // offset 0x1A7C
    CUtlVector< ParticleIndex_t >* m_pActiveGravestones; // offset 0x1A80, size 0x8, align 8
};
