#pragma once

class CDOTA_Modifier_WitchDoctor_Voodoo_Switcheroo : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    VectorWS m_vSavedPos; // offset 0x1A78, size 0xC, align 4
    CHandle< C_BaseEntity > m_hSavedAbility; // offset 0x1A84, size 0x4, align 4
};
