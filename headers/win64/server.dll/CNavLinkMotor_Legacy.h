#pragma once

class CNavLinkMotor_Legacy : public INavLinkMotor /*0x0*/  // sizeof 0x90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18]; // offset 0x0
    int32 m_nMode; // offset 0x18, size 0x4, align 4
    BodySectionAuthority_t m_eBodySectionAuthority; // offset 0x1C, size 0x4, align 4
    CNavLinkMotor_Legacy_Transition m_transition; // offset 0x20, size 0x30, align 255
    CNavLinkMotor_Legacy_NavLink m_navLink; // offset 0x50, size 0x40, align 255
};
