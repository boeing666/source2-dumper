#pragma once

class CNavLinkSubMotor_Legacy : public INavLinkSubMotor /*0x0*/  // sizeof 0xA0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CAnimGraphControllerPtr m_pGraphController; // offset 0x18, size 0x8, align 255
    int32 m_nMode; // offset 0x20, size 0x4, align 4
    BodySectionMutex_t m_eBodySectionMutex; // offset 0x24, size 0x4, align 4
    CNavLinkSubMotor_Legacy_Transition m_transition; // offset 0x28, size 0x30, align 8
    CNavLinkSubMotor_Legacy_NavLink m_navLink; // offset 0x58, size 0x48, align 8
};
