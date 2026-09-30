#pragma once

class CCitadel_Modifier_Wrecker_Ultimate : public CCitadelModifier /*0x0*/  // sizeof 0x6E0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecGrabbed; // offset 0x140, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x158, size 0x4, align 255
    char _pad_015C[0x584]; // offset 0x15C
};
