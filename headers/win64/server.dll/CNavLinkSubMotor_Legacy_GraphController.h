#pragma once

class CNavLinkSubMotor_Legacy_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x128, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CAnimGraphParamRef< Vector > m_vecNavLinkTarget; // offset 0xC0, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vecNavLinkUp; // offset 0xE8, size 0x28, align 8
    CAnimGraphTagOptionalRef m_sMovementTransitionForceFacingDisabled; // offset 0x110, size 0x18, align 8
};
