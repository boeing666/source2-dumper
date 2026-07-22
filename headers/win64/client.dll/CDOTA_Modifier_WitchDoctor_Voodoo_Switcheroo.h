#pragma once

class CDOTA_Modifier_WitchDoctor_Voodoo_Switcheroo : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    VectorWS m_vSavedPos; // offset 0x1A58, size 0xC, align 4
    CHandle< C_BaseEntity > m_hSavedAbility; // offset 0x1A64, size 0x4, align 4
};
