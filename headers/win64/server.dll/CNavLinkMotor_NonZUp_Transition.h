#pragma once

class CNavLinkMotor_NonZUp_Transition : public INavLinkMotor /*0x0*/  // sizeof 0x70, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CountdownTimer m_transitionTimer; // offset 0x18, size 0x18, align 255
    CTransformWS m_xTransitionOrigin; // offset 0x30, size 0x20, align 16
    CTransformWS m_xTransitionTarget; // offset 0x50, size 0x20, align 16
};
