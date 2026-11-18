#pragma once

class CDOTA_Modifier_Razor_Arcana_EmpoweredState : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    ParticleIndex_t m_nEmpoweredBodyFX; // offset 0x1AF8, size 0x4, align 255
    ParticleIndex_t m_nEmpoweredWeaponFX; // offset 0x1AFC, size 0x4, align 255
};
