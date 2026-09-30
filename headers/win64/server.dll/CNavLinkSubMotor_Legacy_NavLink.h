#pragma once

class CNavLinkSubMotor_Legacy_NavLink : public CNavLinkSubMotor_Legacy_Transition /*0x0*/  // sizeof 0x48, align 0x8 [vtable trivial_dtor] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CAnimGraphControllerPtr m_pExternalGraphController; // offset 0x30, size 0x8, align 255
    CHandle< CNavLinkAreaEntity > m_hNavLinkEntity; // offset 0x38, size 0x4, align 4
    int32 m_nNavLinkIndex; // offset 0x3C, size 0x4, align 4
    bool m_bExternalGraphSet; // offset 0x40, size 0x1, align 1
    char _pad_0041[0x7]; // offset 0x41
};
