#pragma once

class CCitadel_Modifier_Wrecker_Ultimate : public CCitadelModifier /*0x0*/  // sizeof 0x6E8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecGrabbed; // offset 0x148, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x160, size 0x4, align 255
    char _pad_0164[0x584]; // offset 0x164
};
