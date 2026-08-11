#pragma once

class CDOTA_Modifier_Razor_Arcana_EmpoweredState : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    ParticleIndex_t m_nEmpoweredBodyFX; // offset 0x1A78, size 0x4, align 255
    ParticleIndex_t m_nEmpoweredWeaponFX; // offset 0x1A7C, size 0x4, align 255
};
