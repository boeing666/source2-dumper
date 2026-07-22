#pragma once

class CNavLinkMotor_Legacy_NavLink : public CNavLinkMotor_Legacy_Transition /*0x0*/  // sizeof 0x40, align 0xFF [vtable trivial_dtor] (server)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CNavLinkMotor_Legacy_GraphController* m_pGraphController; // offset 0x30, size 0x8, align 8 | MSaveOpsForField
    CHandle< CNavLinkAreaEntity > m_hNavLinkEntity; // offset 0x38, size 0x4, align 4
    int32 m_nNavLinkIndex; // offset 0x3C, size 0x4, align 4
};
