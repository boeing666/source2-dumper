#pragma once

class CFacingServices_GraphController : public CAnimGraphControllerBase /*0x0*/  // sizeof 0x160, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x90]; // offset 0x0
    CAnimGraphParamRef< float32 > m_flFacingHeading; // offset 0x90, size 0x28, align 8
    CAnimGraphParamRef< Vector > m_vFacingTarget; // offset 0xB8, size 0x28, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sMovementStrafingState; // offset 0xE0, size 0x30, align 8
    CAnimGraphParamRef< CGlobalSymbol > m_sFacingReason; // offset 0x110, size 0x30, align 8
    CAnimGraphTagOptionalRef m_sFacingModeUsePath; // offset 0x140, size 0x20, align 8
};
