#pragma once

class CFacingServices_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x188, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CAnimGraphParamRef< float32 > m_flFacingHeading; // offset 0xC0, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vFacingTarget; // offset 0xE8, size 0x28, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementStrafingState; // offset 0x110, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sFacingReason; // offset 0x140, size 0x30, align 8
    CAnimGraphTagOptionalRef m_sFacingModeUsePath; // offset 0x170, size 0x18, align 8
};
