#pragma once

class CCitadel_Modifier_Wrecker_Ultimate : public CCitadelModifier /*0x0*/  // sizeof 0x4F0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecGrabbed; // offset 0xD0, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0xE8, size 0x4, align 255
    char _pad_00EC[0x404]; // offset 0xEC
};
